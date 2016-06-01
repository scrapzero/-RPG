#pragma once

#include"Suken.h"







class CSaveData{
private:
	int level; //レベル
	int exp;//経験値
	int atc; //攻撃力
	int def; //防御力
	int spd; //素速さ
	int hp; //体力
	int se; //スキルエナジー
	int fire; //風に強い
	int window; //地に強い
	int ground; //水に強い
	int water; //火に強い

	CSaveData();
	void Write();
	

public:
	friend void LoadCSaveData();
	friend void SaveData();
	friend void DeleteCSaveData();

};



