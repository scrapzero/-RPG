#pragma once

#include"Suken.h"
#include"bullet.h"
#include"Manager.h"
#include"picture.h"
#include"Decolate.h"
#include"Map.h"
#include"jiki.h"
#include"SaveData.h"






extern CScene	STITLE,
				SMAP,
				SBATTLE;


void AwakeScene();

void DrawGameTitle();

void DrawGameMap();

void DrawGameBattle();

void GoGameTitle();

void GoGameMap();

void GoGameBattle();

void ExitGameBattle();