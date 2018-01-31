#include "stdafx.h"
#include "siirto.h"
#include <iostream>

Siirto::Siirto(Ruutu alkuRuutu, Ruutu loppuRuutu) {

	_alkuRuutu = alkuRuutu;
	_loppuRuutu = loppuRuutu;

}
Siirto::Siirto(bool lyhytLinna, bool pitkaLinna) {

}

Ruutu Siirto::getAlkuruutu() {
	return _alkuRuutu;
}

Ruutu Siirto::getLoppuruutu() {

	
	return _loppuRuutu;
}

bool Siirto::onkoLyhytLinna(){

	return true;
}

bool Siirto::onkoPitkälinna() {

	return true;
}