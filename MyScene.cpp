#include"MyScene.h"


CScene	STITLE,
		SMAP,
		SBATTLE;

CSaveData *savedata;

extern CBattleJiki *battlejiki;




void AwakeScene(){
	

	
	STITLE.input.AddEventListener(Event.EVERY_FRAME,DrawGameTitle);

	SMAP.input.AddEventListener(Event.EVERY_FRAME,DrawGameMap);

	SBATTLE.input.AddEventListener(Event.EVERY_FRAME,DrawGameBattle);

	

}



void DrawGameTitle(){

	DrawString(400,100,"TITLE",RED,true);


	if(Event.key.GetPush(Event.key.RETURN)){
			GoGameMap();
	}



}




void DrawGameMap(){
	DrawMap();

	if( GetGoBattle()==true ){
		GoGameBattle();
		DeleteMap();
	}


}





void DrawGameBattle(){

	DrawBack(1);

	DrawBattleJiki();


	if(Event.key.GetPush(Event.key.BACK)){
			GoGameTitle();
			ExitGameBattle();
	}


	DrawGraph(0,0,GetFrame(0),true);

	DrawBar(520,60,795,90,0);

	DrawBar(520,140,795,170,1);

		

	if(battlejiki!=NULL){
		DrawCGage(GetBattleJikiAgage());
		DrawPreBattle();
	}
}







void GoGameTitle(){
	Game.RemoveChild();
	Game.AddChild(&STITLE);
}

void GoGameMap(){
	
	Game.RemoveChild();
	Game.AddChild(&SMAP);
	LoadMap(0 ,-10 ,MTEST);

	
	savedata=new CSaveData();
	
	savedata->Save();
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

