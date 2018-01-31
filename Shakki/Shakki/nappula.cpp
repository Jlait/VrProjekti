#include "stdafx.h"
#include <iostream>
#include "nappula.h"
#include <string>

Nappula::Nappula(std::wstring uniKoodi, int koodi, int vari) {
	setKoodi(koodi);
	setUnicode(uniKoodi);
	setVari(vari);
}

void Nappula::setKoodi(int koodi) {
	_koodi = koodi;
	
}

int Nappula::getKoodi() {

	return 0;
}
void Nappula::setUnicode(std::wstring uniKoodi) {
	
	unicode = uniKoodi;
}

std::wstring Nappula::getUnicode() {
	std::wstring testi;
	testi = unicode;
	return testi;
}

void Nappula::setVari(int vari) {
	_vari = vari;
	
}

int Nappula::getVari() {

	return 0;
}