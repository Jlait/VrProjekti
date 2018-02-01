#pragma once
#include "stdafx.h"
#include "nappula.h"
#include <list>


class Torni : public Nappula {

public:
	Torni() {

	}
	Torni(std::wstring uniKoodi, int koodi, int vari) : Nappula(uniKoodi, vari, koodi) {
	}
	void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema* asema, int vari) {

	}
};