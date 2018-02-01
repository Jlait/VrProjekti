#pragma once
#include "stdafx.h"
#include "nappula.h"
#include <list>


class Lahetti :public Nappula {

public:
	Lahetti() {

	}

	Lahetti(std::wstring uniKoodi, int koodi, int vari) : Nappula(uniKoodi, vari, koodi) {
	}
	void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema*, int vari) {

	}
};