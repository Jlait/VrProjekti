#include "stdafx.h"
#include <iostream>
#include "asema.h"



Asema::Asema() {

	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			lauta[x][y] = NULL;
		}
	}

	//Valkoinen Kuningas
	Nappula* vk1 = new Kuningas(L"\u2654", VK, 0);
	lauta[0][4] = vk1;
	
	//Valkoinen Daami
	Nappula* vd1 = new Daami(L"\u2655", VD, 0);
	lauta[0][3] = vd1;

	//Valkoiset Tornit
	Nappula* vt1 = new Torni(L"\u2656", VT, 0);
	lauta[0][0] = vt1;
	lauta[0][7] = vt1;

	//Valkoiset Lähetit
	Nappula* vl1 = new Lahetti(L"\u2657", VL, 0);
	lauta[0][2] = vl1;
	
	lauta[0][5] = vl1;

	//Valkoiset Ratsut
	Nappula* vr1 = new Ratsu(L"\u2658", VR, 0);
	lauta[0][1] = vr1;
	lauta[0][6] = vr1;

	//Valkoiset Sotilaat
	Nappula* vs1 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][0] = vs1;		
	lauta[1][1] = vs1;	
	lauta[1][2] = vs1;
	lauta[1][3] = vs1;
	lauta[1][4] = vs1;
	lauta[1][5] = vs1;	
	lauta[1][6] = vs1;	
	lauta[1][7] = vs1;
		
	//Musta Kuningas
	Nappula* mk1 = new Kuningas(L"\u265A", MK, 1);
	lauta[7][4] = mk1;

	//Musta Daami
	static Nappula* md = new Daami(L"\u265B", MD, 1);
	lauta[7][3] = md;

	//Mustat Tornit
	static Nappula* mt1 = new Torni(L"\u265C", MT, 1);
	lauta[7][0] = mt1;	
	lauta[7][7] = mt1;

	//Mustat Lähetit
	static Nappula* ml1 = new Lahetti(L"\u265D", ML, 1);
	lauta[7][2] = ml1;
	lauta[7][5] = ml1;

	//Mustat Ratsut
	static Nappula* mr1 = new Ratsu(L"\u265E", MR, 1);
	lauta[7][1] = mr1;
	lauta[7][6] = mr1;

	//Mustat Sotilaat
	static Nappula* ms1 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][0] = ms1;
	lauta[6][1] = ms1;	
	lauta[6][2] = ms1;	
	lauta[6][3] = ms1;	
	lauta[6][4] = ms1;	
	lauta[6][5] = ms1;
	lauta[6][6] = ms1;	
	lauta[6][7] = ms1;

}

void Asema::paivitaAsema(Siirto* siirto) {

	Ruutu alkuRuutu; 
	alkuRuutu = siirto->getAlkuruutu();
	Ruutu loppuRuutu;
	loppuRuutu = siirto->getLoppuruutu();

	lauta[loppuRuutu.getRivi()][loppuRuutu.getSarake()] = lauta[alkuRuutu.getRivi()][alkuRuutu.getSarake()];
	lauta[alkuRuutu.getRivi()][alkuRuutu.getSarake()] = NULL;

}
int Asema::getSiirtovuoro() {

	return siirtovuoro;
}
void Asema::setSiirtovuoro(int vari) {

	siirtovuoro = vari;
}
bool Asema::getOnkoValkeaKuningasLiikkunut() {

	return true;
}
bool Asema::getOnkoMustaKuningasLiikkunut() {

	return true;
}
bool Asema::getOnkoValkeaDTliikkunut() {

	return true;
}
bool Asema::getOnkoValkeaKTliikkunut() {
	
	return true;
}
bool Asema::getOnkoMustaDTliikkunut() {

	return true;
}
bool Asema::getOnkoMustaKTliikkunut() {

	return true;
}