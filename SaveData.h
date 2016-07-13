#pragma once

#include"Suken.h"







class CSaveData{
private:
	int level; //���x��
	int exp;//�o���l
	int atc; //�U����
	int def; //�h���
	int spd; //�f����
	int hp; //�̗�
	int maxhp;//�̗͍ő�l
	int se; //�X�L���G�i�W�[
	int maxse; //�X�L���G�i�W�[�ő�l
	int fire; //���ɋ���
	int wind; //�n�ɋ���
	int earth; //���ɋ���
	int water; //�΂ɋ���

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



