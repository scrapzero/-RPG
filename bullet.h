#pragma once
#include"picture.h"
#include"Move.h"

enum MType{
 RANDOMSTRAIGHT,


};


enum Large{
 SMALL,
 MIDEUM,
 LARGE
 
};

enum BType{
	
	bRED,
	bORANGE,
	bYERROW,
	bGREEN,
	bEGREEN,
	bBLUE,
	bBPURPLE,
	bRPURPLE,
	bCHERRY,
	bBRACK,
	bHIDE
	

};




class CBullet{
private:
protected:
	int x;
	int y;
	int v;
	char btype;
	char mtype;
	char large;
	unsigned int count;
	CBullet(int _x ,int _y ,int _v ,char _large , char _btype ,char _mtype );
	virtual void Draw();
	virtual void Judge();
	virtual void Move();

public:
	friend void LoadBullet();
	
};

//CBullet *bullet[2000];

class CBulletCircle :public CBullet{
	private:
	
	CBulletCircle(int _x ,int _y ,int _v ,char _large , char _btype ,char _mtype );
	void Draw();
	void Judge();
	void Move();

	public:
		
};
class CRay : public CBullet{
	public:
	CRay(int _x ,int _y ,int _v ,char _large , char _btype ,char _mtype );
	void Draw();

};

