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
	int se; //�X�L���G�i�W�[
	int fire; //���ɋ���
	int window; //�n�ɋ���
	int ground; //���ɋ���
	int water; //�΂ɋ���

	CSaveData();
	void Write();
	

public:
	friend void LoadCSaveData();
	friend void SaveData();
	friend void DeleteCSaveData();

};



