#pragma once
#include "stdafx.h"
#include "nappula.h"
#include <list>

class Daami :public Nappula {

public:
	Daami() {

	}
	Daami(std::wstring uniKoodi, int koodi, int vari) : Nappula(uniKoodi, vari, koodi) {
	}


	void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema* asema, int vari) {

	}
};