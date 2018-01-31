#pragma once
#include "ruutu.h"

class Siirto {
public:
	Siirto(Ruutu, Ruutu);
	Siirto() {}
	Siirto(bool lyhytLinna, bool pitkaLinna); // Poikkeussiirto linnoitusta varten
	Ruutu getAlkuruutu();
	Ruutu getLoppuruutu();
	bool onkoLyhytLinna();
	bool onkoPitkälinna();
private:
	Ruutu _alkuRuutu;
	Ruutu _loppuRuutu;
	int miksiKorotetaan = 0;
	bool lyhytLinna;
	bool pitkalinna;
};
