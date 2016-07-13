#pragma once

#include"Suken.h"
#include"picture.h"
#include"jiki.h"


class CMenue{
private:
	bool open;
	void CMenueDraw();
	CMenue();

public:
	friend void LoadMenue();
	friend void DrawMenue();
	friend void DeleteMenue();
};

