#include"SaveData.h"

const std::string _level="eggtabetaina";

CData *data;

CSaveData::CSaveData(){

	data=new CData("savedata.txt");
	data->ReadAll();
	level = data->GetInt(_level);
	if(level<=0){
		level=1;
	}

}


void CSaveData::Save(){
	data->Set(_level,level);
	data->WriteAll();
}





