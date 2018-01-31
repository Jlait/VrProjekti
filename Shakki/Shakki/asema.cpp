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
	Nappula* vk1 = new Nappula(L"\u2654", VK, 0);
	lauta[0][4] = vk1;
	
	//Valkoinen Daami
	Nappula* vd1 = new Nappula(L"\u2655", VD, 0);
	lauta[0][3] = vd1;
	//Valkoiset Tornit
	Nappula* vt1 = new Nappula(L"\u2656", VT, 0);
	lauta[0][0] = vt1;
	Nappula* vt2 = new Nappula(L"\u2656", VT, 0);
	lauta[0][7] = vt2;
	//Valkoiset Lähetit
	Nappula* vl1 = new Nappula(L"\u2657", VL, 0);
	lauta[0][2] = vl1;
	Nappula* vl2 = new Nappula(L"\u2657", VL, 0);
	lauta[0][5] = vl2;
	//Valkoiset Ratsut
	Nappula* vr1 = new Nappula(L"\u2658", VR, 0);
	lauta[0][1] = vr1;
	Nappula* vr2 = new Nappula(L"\u2658", VR, 0);
	lauta[0][6] = vr2;
	//Valkoiset Sotilaat
	Nappula* vs1 = new Nappula(L"\u2659", VS, 0);
	lauta[1][0] = vs1;
	Nappula* vs2 = new Nappula(L"\u2659", VS, 0);
	lauta[1][1] = vs2;
	Nappula* vs3 = new Nappula(L"\u2659", VS, 0);
	lauta[1][2] = vs3;
	Nappula* vs4 = new Nappula(L"\u2659", VS, 0);
	lauta[1][3] = vs4;
	Nappula* vs5 = new Nappula(L"\u2659", VS, 0);
	lauta[1][4] = vs5;
	Nappula* vs6 = new Nappula(L"\u2659", VS, 0);
	lauta[1][5] = vs6;
	Nappula* vs7 = new Nappula(L"\u2659", VS, 0);
	lauta[1][6] = vs7;
	Nappula* vs8 = new Nappula(L"\u2659", VS, 0);
	lauta[1][7] = vs8;
	//Musta Kuningas
	Nappula* mk1 = new Nappula(L"\u265A", MK, 1);
	lauta[7][4] = mk1;
	//Musta Daami
	Nappula* md = new Nappula(L"\u265B", MD, 1);
	lauta[7][3] = md;
	//Mustat Tornit
	Nappula* mt1 = new Nappula(L"\u265C", MT, 1);
	lauta[7][0] = mt1;
	Nappula* mt2 = new Nappula(L"\u265C", MT, 1);
	lauta[7][7] = mt2;
	//Mustat Lähetit
	Nappula* ml1 = new Nappula(L"\u265D", ML, 1);
	lauta[7][2] = ml1;
	Nappula* ml2 = new Nappula(L"\u265D", ML, 1);
	lauta[7][5] = ml2;
	//Mustat Ratsut
	Nappula* mr1 = new Nappula(L"\u265E", MR, 1);
	lauta[7][1] = mr1;
	Nappula* mr2 = new Nappula(L"\u265E", MR, 1);
	lauta[7][6] = mr2;
	//Mustat Sotilaat
	Nappula* ms1 = new Nappula(L"\u265F", MS, 1);
	lauta[6][0] = ms1;
	Nappula* ms2 = new Nappula(L"\u265F", MS, 1);
	lauta[6][1] = ms2;
	Nappula* ms3 = new Nappula(L"\u265F", MS, 1);
	lauta[6][2] = ms3;
	Nappula* ms4 = new Nappula(L"\u265F", MS, 1);
	lauta[6][3] = ms4;
	Nappula* ms5 = new Nappula(L"\u265F", MS, 1);
	lauta[6][4] = ms5;
	Nappula* ms6 = new Nappula(L"\u265F", MS, 1);
	lauta[6][5] = ms6;
	Nappula* ms7 = new Nappula(L"\u265F", MS, 1);
	lauta[6][6] = ms7;
	Nappula* ms8 = new Nappula(L"\u265F", MS, 1);
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