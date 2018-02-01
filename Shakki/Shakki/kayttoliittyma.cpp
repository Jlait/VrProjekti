#include "stdafx.h"
#include <iostream>
#include "kayttoliittyma.h"
#include <Windows.h>
#include <io.h>
#include <fcntl.h>
#include "asema.h"


Kayttoliittyma::Kayttoliittyma(Asema* asema) {
	_asema = asema;
	
	
}

void Kayttoliittyma::piirraLauta() {
	//std::wcout << _asema->lauta[3][3]->getUnicode();
	bool every_other = true;
	_setmode(_fileno(stdout), _O_U16TEXT);

	for (int x = 0; x < 8; x++) {	
		if (every_other == true) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED);
			every_other = false;
		}
		else if (every_other == false) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE);
			every_other = true;
		}
		std::wcout << " " << x + 1 << " ";
		for (int y = 0; y < 8; y++) {		

			if (every_other == true) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED);
				every_other = false;
			}
			else if (every_other == false) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE);
				every_other = true;
			}

			if (_asema->lauta[x][y] != nullptr) {
				std::wcout <<" " <<_asema->lauta[x][y]->getUnicode()<< " ";
			}
			else if(_asema->lauta[x][y] == nullptr) {
				
				std::wcout << L"   ";
			}
			if (y == 7) {

			
				std::wcout << "\n";
			
			}
			
			
		}
	}
	std::wcout << L"    a  b  c  d  e  f  g  h \n";
	
}

Siirto Kayttoliittyma::annaVastustajanSiirto() {
	std::wstring vastustajanSiirto;

	int siirtovuoro;

	if (_asema->getSiirtovuoro() == NULL) {
		
		siirtovuoro = 0;
		_asema->setSiirtovuoro(siirtovuoro);
	}
	else if (_asema->getSiirtovuoro() == 0) {
		siirtovuoro = 1;
		_asema->setSiirtovuoro(siirtovuoro);
	}
	else if (_asema->getSiirtovuoro() == 1) {
		siirtovuoro = 0;
		_asema->setSiirtovuoro(siirtovuoro);
	}
	
	int alkuSarake;
	int loppuSarake;

	
	std::wcout << L"Anna vastustajan siirto, esim Rg1-f3: \n";
	std::wcin >> vastustajanSiirto;

	int alkuRivi = std::stoi(vastustajanSiirto.substr(2, 1)) - 1;
	int loppuRivi = std::stoi(vastustajanSiirto.substr(5, 1)) - 1;
	
	if (vastustajanSiirto.substr(1, 1) == L"a") {
		alkuSarake = 0;
		
	}
	if (vastustajanSiirto.substr(1, 1) == L"b") {
		alkuSarake = 1;
	}
	if (vastustajanSiirto.substr(1, 1) == L"c") {
		alkuSarake = 2;

	}
	if (vastustajanSiirto.substr(1, 1) == L"d") {
		alkuSarake = 3;
	}
	if (vastustajanSiirto.substr(1, 1) == L"e") {
		alkuSarake = 4;

	}
	if (vastustajanSiirto.substr(1, 1) == L"f") {
		alkuSarake = 5;
	}
	if (vastustajanSiirto.substr(1, 1) == L"g") {
		alkuSarake = 6;

	}
	if (vastustajanSiirto.substr(1, 1) == L"h") {
		alkuSarake = 7;
	}
	if (vastustajanSiirto.substr(4, 1) == L"a") {
		loppuSarake = 0;

	}
	if (vastustajanSiirto.substr(4, 1) == L"b") {
		loppuSarake = 1;
	}
	if (vastustajanSiirto.substr(4, 1) == L"c") {
		loppuSarake = 2;

	}
	if (vastustajanSiirto.substr(4, 1) == L"d") {
		loppuSarake = 3;
	}
	if (vastustajanSiirto.substr(4, 1) == L"e") {
		loppuSarake = 4;

	}
	if (vastustajanSiirto.substr(4, 1) == L"f") {
		loppuSarake = 5;
	}
	if (vastustajanSiirto.substr(4, 1) == L"g") {
		loppuSarake = 6;

	}
	if (vastustajanSiirto.substr(4, 1) == L"h") {
		loppuSarake = 7;
	}
	
	
	
	Ruutu alkuRuutu(alkuRivi, alkuSarake);
	Ruutu loppuRuutu(loppuRivi, loppuSarake);

	Siirto siirto(alkuRuutu, loppuRuutu);
	

	return siirto;
}