#include "WoodSword.h"

WoodSword::WoodSword() :Weapon("木刀", WOODSWORD, true, 5, 100, 1, 0, 0) {
	//sound と image が NULL になっている
}

bool WoodSword::effectBattle() {
	return false;
}

bool WoodSword::effectMap() {
	return false;
}

void WoodSword::selectAttack() {

}

void WoodSword::drawAnimation() {

}

void WoodSword::drawAttackableArea() {

}