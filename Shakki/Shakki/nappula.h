#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "siirto.h"

#include <list>
// Vakioarvot nappulatyypeille.
enum
{
	VT, VR, VL, VD, VK, VS,
	MT, MR, ML, MD, MK, MS
};

class Asema;
class Nappula {

private:
	std::wstring unicode;
	int _vari; // valkea = 0, musta = 1
	int _koodi; // VT, VR, MT tms.
public:
	// virtual jotta my�h�inen sidonta k�yt�ss�
	virtual void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema*, int vari) = 0;
	Nappula(std::wstring, int, int);
	Nappula() {};
	void setKoodi(int);
	int getKoodi();
	void setUnicode(std::wstring);
	std::wstring getUnicode();
	void setVari(int);
	int getVari();
};
