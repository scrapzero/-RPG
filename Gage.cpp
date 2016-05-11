#include"Gage.h"

CGage *cgage;

CGage::CGage(int _type){
	type=_type;
	max=0;
}




void CGage::CDraw(){

	
		for(int i=0;i<max ;i++){
			DrawGage(586+i,142,type);
		}
	

}


void LoadCGage(int type){
	cgage=new CGage(type);
}

void DrawCGage(int _agage){
	cgage->CDraw();
	cgage->max=_agage;
}

void DeleateCGage(){
	delete cgage;
	cgage= NULL;
}

