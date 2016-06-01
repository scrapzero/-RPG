#include"jiki.h"

CBattleJiki *battlejiki;
CJikiAtack *jikiatack[400];


CBattleJiki::CBattleJiki(float _x,float _y ,int _atype){
	x = _x;
	y = _y;
	atype=_atype;
	kaiten=0;
	center = 0.2;
	center_f = 0;
	anumber=0;
	agage=0;
	max_dx=32;
	max_dy=15;
	stopf=true;
	sflag=false;
	LoadCGage(1);
}


void CBattleJiki::CDraw(){
	DrawRotaGraph(x,y,0.78,0.00,GetJiki(BATTLE),true);


	if(Event.key.GetPush(Event.key.LSHIFT)){
		

		DrawRotaGraph(x,y,(double)center,kaiten*-1,GetJikiCenter(0),true,true);
		DrawRotaGraph(x,y,0.6,0,GetJikiCenter(1),true,true);

		kaiten-=0.10;

			if(kaiten<=-3.141592){
				kaiten=0;
			}

	switch(center_f){
	case 0:
		center += 0.008;
	break;
	case 1:
		center -= 0.008;
	break;
	}

	if(center >= 1.0){
		center_f = 1;
	}
	if(center <= 0.7){
		center_f = 0;
	}


	}else{
			kaiten=0;
			center = 1.0;
			center_f = 1;
		}

	






}

void CBattleJiki::CPreBattle(){
	
	if(stopf==true){


		if(max_dx>-2){
			max_dx-=0.72;
		}

		for(int x=0 ;x<max_dx ;x++){
				for(int y=0 ;y<max_dy ;y++){
					DrawGraph(800 - x*40 ,y*40,GetPanel(),true);
				}
			}


		if(max_dx<0 ){
		stopf=false;
		}
	
	}


}



void CBattleJiki::CMove(){

	vx=0;
	vy=0;


	if(Event.key.GetPush(Event.key.RIGHT)){
		vx=3.5;	
	}
	
	if(Event.key.GetPush(Event.key.LEFT)){
		vx=-3.5;	
	}

	if(Event.key.GetPush(Event.key.UP)){
		vy=-3.5;	

		if(Event.key.GetPush(Event.key.RIGHT) && x+vx<510 && y+vy>30){
			vx=cos(315*radian)*3.5;
			vy=sin(315*radian)*3.5;
		}

		if(Event.key.GetPush(Event.key.LEFT) && x+vx>22 && y+vy>30){	
			vx=cos(225*radian)*3.5;
			vy=sin(225*radian)*3.5;
		}

	}


	if(Event.key.GetPush(Event.key.DOWN)){
		vy=3.5;	

		if(Event.key.GetPush(Event.key.RIGHT) && x+vx<510 && y+vy<574){
			vx=cos(45*radian)*3.5;
			vy=sin(45*radian)*3.5;
		}

		if(Event.key.GetPush(Event.key.LEFT) && x+vx>22 && y+vy<574){
			vx=cos(135*radian)*3.5;
			vy=sin(135*radian)*3.5;
		}

	}




	if(Event.key.GetPush(Event.key.LSHIFT)){
		vx/=2.2;
		vy/=2.2;	
	}



	if(x+vx<=22 && Event.key.GetPush(Event.key.LEFT)){
		x=22;
		vx=0;
	}

	if(x+vx>=510 && Event.key.GetPush(Event.key.RIGHT)){
		x=510;
		vx=0;
	}

	if(y+vy<=30 && Event.key.GetPush(Event.key.UP)){
		y=30;
		vy=0;
	}


	if(y+vy>=574 && Event.key.GetPush(Event.key.DOWN)){
		y=574;
		vy=0;
	}




	x+=vx;
	y+=vy;


}



void CBattleJiki::CAtack(){

	switch (atype){
	
			case SOAD:
				if(agage>=200 && sflag==false && Event.key.GetPush(Event.key.Z) ){
					sflag=true;
				}  //撃つ条件	
					
				if(sflag==true){
					LoadJikiAtack(anumber,x-20,y-23,atype);
					LoadJikiAtack(anumber+1,x+20,y-23,atype); //弾出し
					anumber+=2;
					agage-=25; //放つ長さ
				}else{
					if(agage<=200){
						agage+=2; //ゲージのたまる速度
					}
				}



					if(agage<=0){
					sflag=false;
				}

				if(anumber>=400){
					anumber=0;
				}

				for(int i=0;i<400;i++){
					if(jikiatack[i]!=NULL){									
						DrawJikiAtack(i);
						 DeleteJikiAtack(i);
					}

				}
				
			
	
			break;
	
	
	
	
		}


}



CJikiAtack::CJikiAtack(float _x ,float _y,int _type){
	x=_x;
	y=_y;
	type=_type;
	vx=0;
	vy=0;
}

void CJikiAtack::CDraw(){
	
	if(type==SOAD){
		DrawRotaGraph(x+vx,y+vy,1.00,0.00,GetJikiAtack(SOAD),true);

	}

}


void CJikiAtack::CMove(){
	if(type==SOAD){
		vy-=12;
	}
}










void LoadBattleJiki(){
	battlejiki = new CBattleJiki(200,500,SOAD);
	
}


void DrawPreBattle(){
	battlejiki->CPreBattle();	
}



void DrawBattleJiki(){
	
	battlejiki->CDraw();

	if(battlejiki->stopf==false){
		battlejiki->CMove();
		battlejiki->CAtack();
	}

}



void DeleteBattleJiki(){
	delete battlejiki;
	battlejiki= NULL;

	for(int i=0;i<400;i++){
			if(jikiatack[i]!=NULL){
				delete jikiatack[i];
			jikiatack[i]= NULL;
			}
	}

	DeleateCGage();
}

void JudgeBattleJiki(float _x,float _y,int _r){
	if( (_x - battlejiki->x )*(_x - battlejiki->x ) + (_y - battlejiki->y )*(_y - battlejiki->y ) < _r * _r){
		battlejiki->judge=true;
	}
}




void LoadJikiAtack(int number,float x,float y,int type){
	jikiatack[number]=new CJikiAtack(x,y,type);
}

void DrawJikiAtack(int number){
	jikiatack[number]->CDraw();
	jikiatack[number]->CMove();
}

void DeleteJikiAtack(int number){
	
	if(jikiatack[number]->x < -30 || jikiatack[number]->x > 540 || jikiatack[number]->y < -15 || jikiatack[number]->y > 580){
			delete jikiatack[number];
			jikiatack[number]= NULL;
	}

}



float GetBattleJikiAgage(){
	return battlejiki->agage;
}


