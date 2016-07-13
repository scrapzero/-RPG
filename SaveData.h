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
	int maxhp;//体力最大値
	int se; //スキルエナジー
	int maxse; //スキルエナジー最大値
	int fire; //風に強い
	int wind; //地に強い
	int earth; //水に強い
	int water; //火に強い

	CSaveData();
	void Write();
	
public:
	friend void LoadCSaveData();
	friend void WriteSaveData();
	friend void DeleteCSaveData();

	friend int GetLevelSaveData();
	friend int GetExpSaveData();
	friend int GetAtcSaveData();
	friend int GetDefSaveData();
	friend int GetSpdSaveData();
	friend int GetHpSaveData();
	friend int GetMaxHpSaveData();
	friend int GetSeSaveData();
	friend int GetMaxSeSaveData();
	friend int GetFireSaveData();
	friend int GetWindSaveData();
	friend int GetearthSaveData();
	friend int GetWaterSaveData();
};



