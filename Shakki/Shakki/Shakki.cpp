// Shakki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "kayttoliittyma.h"
#include "asema.h"


int main()
{
	Asema* asema = new Asema();
	Kayttoliittyma* kayttoliittyma = new Kayttoliittyma(asema);
	
	kayttoliittyma->piirraLauta();
	
	
	while (true) {
		Siirto vastustajanSiirto = kayttoliittyma->annaVastustajanSiirto();
		asema->paivitaAsema(&vastustajanSiirto);
		kayttoliittyma->piirraLauta();
	}
	
    return 0;
}


