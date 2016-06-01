#include"SaveData.h"

const std::string _level="eggtabetaina";
const std::string _exp="gohantabetaina";
const std::string _atc="itinisansi";
const std::string _def="seiginokokoro";
const std::string _spd="syunmenogotosi";
const std::string _hp="gasinsyoutan";
const std::string _se="saigonoissen";
const std::string _fire="gensinotikara";
const std::string _window="natunisuzusi";
const std::string _ground="hiniyakareru";
const std::string _water="inotinominamoto";



CData *data;
CSaveData *savedata;

CSaveData::CSaveData(){

	data=new CData("savedata.txt");
	data->ReadAll();
	level = data->GetInt(_level);
	exp	  = data->GetInt(_exp);
	level = data->GetInt(_atc);
	level = data->GetInt(_def);
	level = data->GetInt(_spd);
	level = data->GetInt(_hp);
	level = data->GetInt(_se);
	level = data->GetInt(_window);
	level = data->GetInt(_ground);
	level = data->GetInt(_water);



	if(level<=0){
		level=1;
	}



}


void CSaveData::Write(){
	data->Set(_level,level);
	data->Set(_atc,atc);
	data->Set(_def,def);
	data->Set(_spd,spd);
	data->Set(_hp,hp);
	data->Set(_se,se);
	data->Set(_fire,fire);
	data->Set(_window,window);
	data->Set(_ground,ground);
	data->Set(_water,water);
	data->WriteAll();
}


void LoadCSaveData(){
	savedata=new CSaveData();
}



