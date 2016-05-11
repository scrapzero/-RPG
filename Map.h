#pragma once

#include"Suken.h"
#include"picture.h"

enum{
	MTEST
};


class CMapJiki{
	private:
	float jikix ,jikiy ;

	float soguritsu; //‘˜‹ö—¦
	float max_dx ,max_dy ; //ƒV[ƒ“Ø‚è‘Ö‚¦‚Ìü‚è‚Ì‚½‚ß
	bool pregobattle ,gobattle;	//‘˜‹öŒn“

	bool stop ,movecontrol ,right ,left,up ,down ; //ˆÚ“®Œn
	CMapJiki(float _x ,float _y );
	void CDraw();
	void CMove();
	void CPreGoBattle();
	
	
	public:
		friend void LoadMap(float x ,float y ,int type);
		friend void DrawMap();
		friend void DeleteMap();
		friend bool GetGoBattle();
};


class CMap{
	private:
		int type;
		CMap(int _type);
		void CDraw();


	public:
		friend void LoadMap(float x ,float y ,int type);
		friend void DrawMap();
		friend void DeleteMap();
};














