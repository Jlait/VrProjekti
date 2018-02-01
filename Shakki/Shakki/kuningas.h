#pragma once
#include "stdafx.h"
#include "nappula.h"
#include <list>



class Kuningas :public Nappula {

public:
	Kuningas() {

	}
	Kuningas(std::wstring uniKoodi, int koodi, int vari) : Nappula(uniKoodi, vari, koodi) {
	}

	void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema* asema, int vari) {

	}	
	
};
