#include"SaveData.h"

const std::string _level="eggtabetaina";
const std::string _exp="gohantabetaina";
const std::string _atc="itinisansi";
const std::string _def="seiginokokoro";
const std::string _spd="syunmenogotosi";
const std::string _hp="gasinsyoutan";
const std::string _maxhp="maxgasinsyoutan";
const std::string _se="kokonotori";
const std::string _maxse="maxkokonotori";
const std::string _fire="gensinotikara";
const std::string _wind="natunisuzusi";
const std::string _earth="hiniyakareru";
const std::string _water="inotinominamoto";



CData *data;
CSaveData *savedata;

CSaveData::CSaveData(){

	data=new CData("savedata.txt");
	data->ReadAll();
	level = data->GetInt(_level);
	exp	  = data->GetInt(_exp);
	atc = data->GetInt(_atc);
	def = data->GetInt(_def);
	spd = data->GetInt(_spd);
	hp = data->GetInt(_hp);
	maxhp = data->GetInt(_maxhp);
	se = data->GetInt(_se);
	maxse = data->GetInt(_maxse);
	fire = data->GetInt(_fire);
	wind= data->GetInt(_wind);
	earth = data->GetInt(_earth);
	water = data->GetInt(_water);


	if(level==0){
		level=1;
		exp=0;
		atc=5;
		def=5;
		spd=3;
		hp=20;
		maxhp=20;
		se=10;
		maxse=10;
		fire=3;
		wind=3;
		earth=3;
		water=3;
	}



}


void CSaveData::Write(){
	data->Set(_level,level);
	data->Set(_exp,exp);
	data->Set(_atc,atc);
	data->Set(_def,def);
	data->Set(_spd,spd);
	data->Set(_hp,hp);
	data->Set(_maxhp,maxhp);
	data->Set(_se,se);
	data->Set(_maxse,maxse);
	data->Set(_fire,fire);
	data->Set(_wind,wind);
	data->Set(_earth,earth);
	data->Set(_water,water);
	data->WriteAll();
}


void LoadCSaveData(){
	savedata=new CSaveData();
}

void WriteSaveData(){
	savedata->Write();
}

void DeleteCSaveData(){
	delete savedata;
	savedata=NULL;
}


int GetLevelSaveData(){
	return savedata->level;
}

int GetExpSaveData(){
	return savedata->exp;
}

int GetAtcSaveData(){
	return savedata->atc;
}

int GetDefSaveData(){
	return savedata->def;
}

int GetSpdSaveData(){
	return savedata->spd;
}

int GetHpSaveData(){
	return savedata->hp;
}

int GetMaxHpSaveData(){
	return savedata->maxhp;
}

int GetSeSaveData(){
	return savedata->se;
}

int GetMaxSeSaveData(){
	return savedata->maxse;
}

int GetFireSaveData(){
	return savedata->fire;
}

int GetWindSaveData(){
	return savedata->wind;
}

int GetearthSaveData(){
	return savedata->earth;
}

int GetWaterSaveData(){
	return savedata->water;
}




