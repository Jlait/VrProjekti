#pragma once
#include <iostream>
#include "nappula.h"
#include "siirto.h"
#include <string>
class Asema : public Nappula {

public:
	//Konstruktori luo alkuaseman laudalle
	Asema();
	Nappula* lauta[8][8];

	//Valkoinen Kuningas
	static Nappula* vk1;	
	//Valkoinen Daami
	static Nappula* vd1;	
	//Valkoiset Tornit
	static Nappula* vt1;	
	static Nappula* vt2;	
	//Valkoiset Lähetit
	static Nappula* vl1;
	static Nappula* vl2;	
	//Valkoiset Ratsut
	static Nappula* vr1;
	static Nappula* vr2;
	//Valkoiset Sotilaat
	static Nappula* vs1;
	static Nappula* vs2;
	static Nappula* vs3;
	static Nappula* vs4;
	static Nappula* vs5;
	static Nappula* vs6;
	static Nappula* vs7;
	static Nappula* vs8;
	//Musta Kuningas
	static Nappula* mk1;
	//Musta Daami
	static Nappula* md;
	//Mustat Tornit
	static Nappula* mt1;
	static Nappula* mt2;
	//Mustat Lähetit
	static Nappula* ml1;
	static Nappula* ml2;
	//Mustat Ratsut
	static Nappula* mr1;
	static Nappula* mr2;
	//Mustat Sotilaat
	static Nappula* ms1;
	static Nappula* ms2;
	static Nappula* ms3;
	static Nappula* ms4;
	static Nappula* ms5;
	static Nappula* ms6;
	static Nappula* ms7;
	static Nappula* ms8;

	void paivitaAsema(Siirto* siirto);
	int getSiirtovuoro();
	void setSiirtovuoro(int vari);
	bool getOnkoValkeaKuningasLiikkunut();
	bool getOnkoMustaKuningasLiikkunut();
	bool getOnkoValkeaDTliikkunut();
	bool getOnkoValkeaKTliikkunut();
	bool getOnkoMustaDTliikkunut();
	bool getOnkoMustaKTliikkunut();


private:
	int siirtovuoro;
	bool onkoValkeaKuningasLiikkunut;
	bool onkoMustaKuningasLiikkunut;
	bool onkoValkeaDTliikkunut;
	bool onkoValkeaKTliikkunut;
	bool onkoMustaDTliikkunut;
	bool onkoMustaKTliikkunut;
};



