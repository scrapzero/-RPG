#include"Menue.h"

CMenue *menue;

CMenue::CMenue(){
	open=false;
}

void CMenue::CMenueDraw(){
	if(Event.key.GetDown(Event.key.SPACE)){
		menue->open=true;
	}

	if(Event.key.GetDown(Event.key.BACK)){
		menue->open=false;
	}


	if(menue->open==true){
		DrawJikiStatus();
	}

}


void LoadMenue(){
	menue=new CMenue();
}

void DrawMenue(){

		menue->CMenueDraw();

}

void DeleteMenue(){
	if(menue!=NULL){
		delete menue;
		menue=NULL;
	}
}

