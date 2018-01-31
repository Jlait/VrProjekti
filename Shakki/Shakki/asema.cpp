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
	Kuningas* vk1 = new Kuningas(L"\u2654", VK, 0);
	lauta[0][4] = vk1;
	
	//Valkoinen Daami
	Daami* vd1 = new Daami(L"\u2655", VD, 0);
	lauta[0][3] = vd1;
	//Valkoiset Tornit
	Torni* vt1 = new Torni(L"\u2656", VT, 0);
	lauta[0][0] = vt1;
	Torni* vt2 = new Torni(L"\u2656", VT, 0);
	lauta[0][7] = vt2;
	//Valkoiset Lähetit
	Lahetti* vl1 = new Lahetti(L"\u2657", VL, 0);
	lauta[0][2] = vl1;
	Lahetti* vl2 = new Lahetti(L"\u2657", VL, 0);
	lauta[0][5] = vl2;
	//Valkoiset Ratsut
	Ratsu* vr1 = new Ratsu(L"\u2658", VR, 0);
	lauta[0][1] = vr1;
	Ratsu* vr2 = new Ratsu(L"\u2658", VR, 0);
	lauta[0][6] = vr2;
	//Valkoiset Sotilaat
	Sotilas* vs1 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][0] = vs1;
	Sotilas* vs2 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][1] = vs2;
	Sotilas* vs3 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][2] = vs3;
	Sotilas* vs4 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][3] = vs4;
	Sotilas* vs5 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][4] = vs5;
	Sotilas* vs6 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][5] = vs6;
	Sotilas* vs7 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][6] = vs7;
	Sotilas* vs8 = new Sotilas(L"\u2659", VS, 0);
	lauta[1][7] = vs8;
	//Musta Kuningas
	Kuningas* mk1 = new Kuningas(L"\u265A", MK, 1);
	lauta[7][4] = mk1;
	//Musta Daami
	Daami* md = new Daami(L"\u265B", MD, 1);
	lauta[7][3] = md;
	//Mustat Tornit
	Torni* mt1 = new Torni(L"\u265C", MT, 1);
	lauta[7][0] = mt1;
	Torni* mt2 = new Torni(L"\u265C", MT, 1);
	lauta[7][7] = mt2;
	//Mustat Lähetit
	Lahetti* ml1 = new Lahetti(L"\u265D", ML, 1);
	lauta[7][2] = ml1;
	Lahetti* ml2 = new Lahetti(L"\u265D", ML, 1);
	lauta[7][5] = ml2;
	//Mustat Ratsut
	Ratsu* mr1 = new Ratsu(L"\u265E", MR, 1);
	lauta[7][1] = mr1;
	Ratsu* mr2 = new Ratsu(L"\u265E", MR, 1);
	lauta[7][6] = mr2;
	//Mustat Sotilaat
	Sotilas* ms1 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][0] = ms1;
	Sotilas* ms2 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][1] = ms2;
	Sotilas* ms3 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][2] = ms3;
	Sotilas* ms4 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][3] = ms4;
	Sotilas* ms5 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][4] = ms5;
	Sotilas* ms6 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][5] = ms6;
	Sotilas* ms7 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][6] = ms7;
	Sotilas* ms8 = new Sotilas(L"\u265F", MS, 1);
	lauta[6][7] = ms8;

	
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