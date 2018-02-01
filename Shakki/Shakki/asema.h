#pragma once
#include <iostream>
#include "siirto.h"
#include "nappula.h"
#include "kuningas.h"
#include "daami.h"
#include "torni.h"
#include "ratsu.h"
#include "lahetti.h"
#include "sotilas.h"
#include <string>



class Asema{

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
	//static Torni* vt2;	
	//Valkoiset L�hetit
	static Nappula* vl1;
	//static Lahetti* vl2;	
	//Valkoiset Ratsut
	static Nappula* vr1;
	//static Ratsu* vr2;
	//Valkoiset Sotilaat
	static Nappula* vs1;
	/*static Sotilas* vs2;
	static Sotilas* vs3;
	static Sotilas* vs4;
	static Sotilas* vs5;
	static Sotilas* vs6;
	static Sotilas* vs7;
	static Sotilas* vs8;
	*/
	//Musta Kuningas
	static Nappula* mk1;
	//Musta Daami
	static Nappula* md;
	//Mustat Tornit
	static Nappula* mt1;
	//static Nappula* mt2;
	//Mustat L�hetit
	static Nappula* ml1;
	//static Lahetti* ml2;
	//Mustat Ratsut
	static Nappula* mr1;
	//static Ratsu* mr2;
	//Mustat Sotilaat
	static Nappula* ms1;
	/*static Sotilas* ms2;
	static Sotilas* ms3;
	static Sotilas* ms4;
	static Sotilas* ms5;
	static Sotilas* ms6;
	static Sotilas* ms7;
	static Sotilas* ms8;
	*/

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



