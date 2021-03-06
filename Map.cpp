#include "Map.h"
#include "DxLib.h"

// コンストラクタ
Map::Map() {

}

Map::Map(int data, bool is_event, bool is_npc, int table, NPC npc) {
	// データによって制御
	this->encount_rate = 0;
	this->encount_table = table;

	switch (data) {
	case 0: // 草原
		this->is_move = true;
		this->is_encount = true;
		this->encount_rate = 0.1;
		break;
	case 1: // 地面
		this->is_move = true;
		this->is_encount = true;
		this->encount_rate = 0.1;
		break;
	case 2: //森
		this->is_move = true;
		this->is_encount = true;
		this->encount_rate = 0.3;
		break;
	case 3: //山岳
		this->is_move = false;
		this->is_encount = false;
		this->encount_rate = 0.3;
		break;
	case 4: //海
		this->is_move = false;
		this->is_encount = false;
		break;
	case 5: //小さい町
		this->is_move = true;
		this->is_encount = false;
		break;
	case 6: //大きな町
		this->is_move = true;
		this->is_encount = false;
		break;
	case 7: //城
		this->is_move = true;
		this->is_encount = false;
		break;
	case 8: //橋
		this->is_move = true;
		this->is_encount = false;
		break;
	}
	this->is_event = is_event;
	this->is_npc = is_npc;
	if (is_npc) {
		this->npc = npc;
	}
}

//取得メソッド
bool Map::getIsMove() {
	return this->is_move;
}

bool Map::getIsEvent() {
	return this->is_event;
}

bool Map::getIsNpc() {
	return this->is_npc;
}

bool Map::getIsEncount() {
	return this->is_encount;
}

double Map::getRate() {
	return this->encount_rate;
}

int Map::getTable() {
	return this->encount_table;
}

void Map::setData(int data) {
	switch (data) {
	case 0: // 草原
		this->is_move = true;
		this->is_encount = true;
		this->encount_rate = 0.1;
		break;
	case 1: // 地面
		this->is_move = true;
		this->is_encount = true;
		this->encount_rate = 0.1;
		break;
	case 2: //森
		this->is_move = true;
		this->is_encount = true;
		this->encount_rate = 0.3;
		break;
	case 3: //山岳
		this->is_move = false;
		this->is_encount = false;
		this->encount_rate = 0.3;
		break;
	case 4: //海
		this->is_move = false;
		this->is_encount = false;
		break;
	case 5: //小さい町
		this->is_move = true;
		this->is_encount = false;
		break;
	case 6: //大きな町
		this->is_move = true;
		this->is_encount = false;
		break;
	case 7: //城
		this->is_move = true;
		this->is_encount = false;
		break;
	case 8: //橋
		this->is_move = true;
		this->is_encount = false;
		break;
	}
}

void Map::setIsEvent(bool is) {
	this->is_event = is;
}

void Map::setNpc(bool isnt) {
	this->is_npc = isnt;
}

void Map::setNpc(NPC* npc) {
	this->is_npc = true;
	this->npc = *npc;
}

void Map::setTable(int table) {
	this->encount_table = table;
}