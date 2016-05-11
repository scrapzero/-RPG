#include"Suken.h"
#include"bullet.h"



CBullet::CBullet(int _x ,int _y ,int _v ,char _large , char _btype ,char _mtype ){
	x=_x;	
	y=_y;
	v=_v;
	large=_large;
	btype=_btype;
	mtype=_mtype;
	count =0;
}

void CBullet::Draw(){}
void CBullet::Judge(){}
void CBullet::Move(){}


CBulletCircle::CBulletCircle(int _x ,int _y ,int _v,char _large , char _btype ,char _mtype ):
	CBullet(_x,_y,_v,_large,_btype,_mtype)
{}


void CBulletCircle::Draw(){
	DrawGraph(x,y,GetCircle(large,btype),true);
	DrawGraph(x,y,GetCCenter(large,count % 4),true);
	count++;
}

void CBulletCircle::Move(){
	

}



void CBulletCircle::Judge(){}





CRay::CRay(int _x ,int _y ,int _v,char _large , char _btype ,char _mtype ):
	CBullet(_x,_y,_v,_large,_btype,_mtype)
{}


void CRay::Draw(){
	DrawBox(x,y,x+20,y+300,RED,1);
}




