#pragma once

#include"Suken.h"
#include"picture.h"
#include"Gage.h"
#include"math.h"

#define radian 0.01744//�P�x



enum {
	BATTLE
};

enum{
	SOAD
};




class CBattleJiki{
	private:

		bool sflag ,judge;	//�����Ă���r��,����������
		bool center_f ;//�ᑬ���[�h���̒��S�\��
		bool stopf;
		int atype ,anumber ;
		float x , y, vx, vy;
		float center ,agage;
		float max_dx ,max_dy;
		double kaiten;

		CBattleJiki(float _x ,float _y ,int atype);
		void CPreBattle();
		void CDraw();
		void CMove();
		void CAtack();


	public:

		friend void LoadBattleJiki();
		friend void DrawPreBattle();
		friend void DrawBattleJiki();
		friend void DeleteBattleJiki();
		friend float GetBattleJikiAgage();
		friend void JudgeBattleJiki(float _x,float _y,int _r);
};




class CJikiAtack{
	private:
		int type ;
		float x , y, vx, vy;
		CJikiAtack(float _x ,float _y,int _type);
		void CDraw();
		void CMove();

	public:
		friend void LoadJikiAtack(int number,float x,float y,int type);
		friend void DrawJikiAtack(int number);
		friend void DeleteJikiAtack(int number);
};


class CJikiStatus{
private:
	int revel ,exp ;
	int hp ,mp ,atc ,dfe ,spd ; //��{�X�e�[�^�X
	int fire ,window,ground ,water  ; //�����l


public:

};


