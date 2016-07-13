#pragma once
#include"Suken.h"
#include"picture.h"



int map[10];
int chip[10];
int tama[3][10];
int jiki[4];
int jikicenter[2];
int back[10];
int frame[3];
int bar[3];
int gage[4];
int jikiatack[3];
int panel;
int window[6];




void AwakePicture(){

	jiki[0]=LoadGraph("zero/jiki.png");
	
	jikicenter[0]=LoadGraph("zero/jikicenter.png");
	jikicenter[1]=LoadGraph("zero/jikicenter2.png");

	map[0]=LoadGraph("zero/map0.png");
	
	LoadDivGraph("zero/practice.png",10,5,2,20,20,chip);
	
	LoadDivGraph("zero/circle.png",15,5,3,20,20,tama[1]);
	
	LoadDivGraph("zero/largecircle.png",15,5,3,20,20,tama[2]);

	back[0]=LoadGraph("zero/BattleBack0.png");
	back[1]=LoadGraph("zero/sougen.png");

	frame[0]=LoadGraph("zero/BattleFrame.png"); //ïù500,çÇÇ≥568

	bar[0]=LoadGraph("zero/LifeBar.png");
	bar[1]=LoadGraph("zero/AtackBar.png");

	gage[0]=LoadGraph("zero/LifeGage.png");
	gage[1]=LoadGraph("zero/AtackGage.png");
	gage[2]=LoadGraph("zero/MPGage.png");
	gage[3]=LoadGraph("zero/TensionGage.png");

	jikiatack[0]=LoadGraph("zero/soadatack.png");

	panel=LoadGraph("zero/panel.png");

	window[0]=LoadGraph("zero/StatusWindow.png");

}






int GetMap(int type){
	return map[type];
}
int GetChip(int type){
	return chip[type];
}

int GetCircle(char large, char color){
	return tama[large][color];
}

int GetCCenter(char large,char frame){
	return tama[large][frame+11];
}

int GetJiki(int type){
	return jiki[type];
}


int GetJikiCenter(int num){
	return jikicenter[num];
}

int  GetBack(int type){
	return back[type];
}

int  GetFrame(int type){
	return frame[type];
}

int GetBar(int type){
	return bar[type];
}

int GetGage(int type){
	return gage[type];
}

int GetJikiAtack(int type){
		return jikiatack[type];
}

int GetPanel(){
	return panel;
}

int GetWindow(int type){
	return window[type];
}
