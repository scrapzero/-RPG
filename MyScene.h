#pragma once

#include"Suken.h"
#include"bullet.h"
#include"Manager.h"
#include"picture.h"
#include"Decolate.h"
#include"Map.h"
#include"jiki.h"
#include"SaveData.h"
#include"Menue.h"






extern CScene	STITLE,
				SMAP,
				SBATTLE;


void AwakeScene();


void DrawGameTitle();

void GoGameTitle();

void ExitGameTitle();


void DrawGameMap();

void GoGameMap();


void DrawGameBattle();

void GoGameBattle();

void ExitGameBattle();