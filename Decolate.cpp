#include"Decolate.h"



void DrawBack(int type){
	DrawExtendGraph(16,16,516,584,GetBack(type),true);
}

void DrawBar(int x, int y ,int _x ,int _y ,int type){
	//DrawExtendGraph(x,y,_x,_y,GetBar(type),true);
	DrawGraph(x,y,GetBar(type),true);
}

void DrawGage(int x, int y ,int type){
	//DrawExtendGraph(x,y,x+7,y+26,GetGage(type),true);
	DrawGraph(x,y,GetGage(type),true);
}

