#include "Suken.h"
#include"MyScene.h"








//CBulletCircle a(0,0,0,MIDEUM,bRED,RANDOMSTRAIGHT);
//CRay c(40,40,0,MIDEUM,bRED,RANDOMSTRAIGHT);


//CBullet *b[10];
void suken::Awake(){
	
	

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


void suken::GameLoopEnter(){
	

	//b[1]->Draw();
	//b[2]->Draw();
}

void suken::GameLoopExit(){

}

//sin(ラジアン,hantaimuki)y
//cos()x
//atan(katamuki)一方向にしか行かない
