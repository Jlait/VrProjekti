#pragma once
#include "stdafx.h"
#include "nappula.h"

class Kuningas :public Nappula {

public:
	Kuningas() {

	}
	Kuningas(std::wstring uniKoodi, int koodi, int vari) {

		setKoodi(koodi);
		setUnicode(uniKoodi);
		setVari(vari);
	}

	void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema*, int vari) {

	}
};