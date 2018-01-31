#pragma once
#include <iostream>
#include "asema.h"
#include "siirto.h"
#include "ruutu.h"
#include <Windows.h>


class Kayttoliittyma : public Asema{

public:
	Kayttoliittyma(Asema* asema);
	Asema* _asema;
	void piirraLauta();
	Siirto annaVastustajanSiirto();
};
