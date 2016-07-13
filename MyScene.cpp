#include"MyScene.h"


CScene	STITLE,
		SMAP,
		SBATTLE;



//extern CBattleJiki *battlejiki;




void AwakeScene(){
	

	
	STITLE.input.AddEventListener(Event.EVERY_FRAME,DrawGameTitle);

	SMAP.input.AddEventListener(Event.EVERY_FRAME,DrawGameMap);

	SBATTLE.input.AddEventListener(Event.EVERY_FRAME,DrawGameBattle);

	

}



void DrawGameTitle(){

	DrawString(400,100,"TITLE",RED,true);


	if(Event.key.GetPush(Event.key.RETURN)){
			GoGameMap();
			ExitGameTitle();
	}



}




void DrawGameMap(){
	DrawMap();

	if( GetGoBattle()==true ){
		GoGameBattle();
		DeleteMap();
	}

	DrawMenue();

	
}





void DrawGameBattle(){

	DrawBack(1);

	DrawBattleJiki();


	


	DrawGraph(0,0,GetFrame(0),true);

	DrawBar(520,60,795,90,0);

	DrawBar(520,140,795,170,1);

		

//	if(battlejiki!=NULL){
		DrawCGage(GetBattleJikiAgage());
		DrawPreBattle();
	//}

		if(Event.key.GetPush(Event.key.BACK)){
			GoGameTitle();
			ExitGameBattle();
	}
}







void GoGameTitle(){
	Game.RemoveChild();
	Game.AddChild(&STITLE);
	DeleteJikiStatus();
	DeleteMenue();
}

void ExitGameTitle(){
	LoadCSaveData();
	LoadJikiStatus();
	LoadMenue();
}


void GoGameMap(){
	
	Game.RemoveChild();
	Game.AddChild(&SMAP);
	LoadMap(0 ,-10 ,MTEST);
	
}


void GoGameBattle(){

	Game.RemoveChild();
	Game.AddChild(&SBATTLE);
	LoadBattleJiki();
	DeleteMap();
}



void ExitGameBattle(){
	DeleteBattleJiki();
}

