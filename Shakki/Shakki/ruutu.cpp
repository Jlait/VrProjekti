#include "stdafx.h"
#include "ruutu.h"
#include <iostream>

Ruutu::Ruutu(int rivi, int sarake) {
	_rivi = rivi;
	_sarake = sarake;
}

int Ruutu::getRivi() {

	return Ruutu::_rivi;
}
int Ruutu::getSarake() {

	return Ruutu::_sarake;
}