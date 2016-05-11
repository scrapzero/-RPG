#include"Map.h"

CMapJiki *mapjiki;
CMap *map;


CMapJiki::CMapJiki(float _x ,float _y){
	jikix=_x;
	jikiy=_y;

	max_dx=0;
	max_dy=0;
	soguritsu=0;
	pregobattle=false;
	gobattle=false;

	stop=true;	//~‚Ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©
	movecontrol=false;
	right=false;
	left=false;
	up=false;
	down=false;
	
}




void CMapJiki::CDraw(){

	DrawBox(jikix ,jikiy ,jikix+20 ,jikiy+30 ,RED,true);
	
}


void CMapJiki::CMove(){

	if(movecontrol==false){
		if(stop==true ){

			if(Event.key.GetPush(Event.key.RIGHT) && jikix<780 && left==false){
				right=true;
				stop=false;
			}

			if(Event.key.GetPush(Event.key.LEFT) && jikix>0 && right==false){
				left=true;
				stop=false;
			}

			if(Event.key.GetPush(Event.key.UP) && jikiy>-10 && down==false){
				up=true;
				stop=false;
			}


			if(Event.key.GetPush(Event.key.DOWN) && jikiy<570 && up==false){
				down=true;
				stop=false;
			}

		}




		if(right==true){
			jikix+=2.5;
		}

		if(left==true){
			jikix-=2.5;
		}

		if(up==true){
			jikiy-=2.5;
		}

		if(down==true){
			jikiy+=2.5;
		}

	}

	//‚±‚±‚Ü‚ÅˆÚ“®

	if( (int)jikix %20 == 0 && ((int)jikiy+10) %20 == 0 && stop==false ){
		
		
		if ( GetRand(100)<(int)soguritsu && soguritsu>=8){
			pregobattle=true;
			movecontrol=true;
		}

		soguritsu+=0.6;

		stop=true;

	}

	//‘˜‹öŒn“



	if( (int)jikix %20 == 0 ){
		
		right=false;
		left=false;
	}

	if( ((int)jikiy+10) %20 == 0 ){
		up=false;
		down=false;
	}



}


void CMapJiki::CPreGoBattle(){

	if(pregobattle==true){

		max_dx+=0.36;
		max_dy+=0.27;


		for(int x=0 ;x<max_dx ;x++){
				for(int y=0 ;y<max_dy ;y++){
					DrawGraph( x*40 ,y*40,GetPanel(),true);
				}
			}


		if(max_dx>=32 ){
		gobattle=true;
		}
	
	}

	


}//ƒV[ƒ“Ø‚è‘Ö‚¦‚Ìü‚è



CMap::CMap(int _type){
	type=_type;
}



void CMap::CDraw(){

	switch(type){

		case MTEST:

			for(int x=0 ;x<40 ;x++){
				for(int y=0 ;y<30 ;y++){
					DrawBox(x*20,y*20,x*20+20,y*20+20,GREEN,false);
				}
			}

		break;

	}


}




void LoadMap(float x ,float y ,int type){
	mapjiki=new CMapJiki(x ,y );
	map=new CMap(type);
}


void DrawMap(){
	map->CDraw();
	mapjiki->CDraw();
	mapjiki->CMove();
	mapjiki->CPreGoBattle();
}
void DeleteMap(){
	delete mapjiki;
	mapjiki=NULL;
	
	delete map;
	map=NULL;
}

bool GetGoBattle(){
	return mapjiki->gobattle;
}



