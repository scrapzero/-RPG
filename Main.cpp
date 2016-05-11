#include "Suken.h"
#include"MyScene.h"








//CBulletCircle a(0,0,0,MIDEUM,bRED,RANDOMSTRAIGHT);
//CRay c(40,40,0,MIDEUM,bRED,RANDOMSTRAIGHT);


//CBullet *b[10];
void Awake(){
	
	

		Game.AddChild(&STITLE);
		AwakeScene();
		AwakePicture();

	/*TITLE.input.AddEventListener(Event.EVERY_FRAME,DrawGameTitle);
	TITLE.input.AddEventListener(CheckHitKey(Event.key.RETURN),GoGameMain);
	MAIN.input.AddEventListener(Event.EVERY_FRAME,DrawGameMain);*/



/*
	MAIN.input.AddEventListener(Event.EVERY_FRAME,DrawGameMain);
	b[0]=new CBulletCircle(0,0,0,MIDEUM,bRED,RANDOMSTRAIGHT);
	b[1]=new CRay(40,40,0,MIDEUM,bRED,RANDOMSTRAIGHT);
	b[2]=new CBulletCircle(300,0,0,MIDEUM,bBLUE,RANDOMSTRAIGHT);*/
}


void GameLoopEnter(){
	

	//b[1]->Draw();
	//b[2]->Draw();
}

void GameLoopExit(){

}

//sin(ƒ‰ƒWƒAƒ“,hantaimuki)y
//cos()x
//atan(katamuki)ˆê•ûŒü‚É‚µ‚©s‚©‚È‚¢
