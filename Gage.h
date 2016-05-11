#pragma once

#include"Suken.h"
#include"picture.h"
#include"Decolate.h"

class CGage{
	private:
		int type,max;
		CGage(int _type);
		void CDraw();
	public:
	friend void LoadCGage(int type);
	friend void DrawCGage(int _agage);
	friend void DeleateCGage();
	friend void DrawJiki();
};



