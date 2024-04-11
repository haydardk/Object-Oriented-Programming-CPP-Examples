#include <iostream> 
#include "Ogrenci.h"

using namespace std;

OgrenciS::OgrenciS(int _ID, string _Ad, double _SinavNotu) {
	ID = _ID;
	Ad = _Ad;
	SinavNotu = _SinavNotu;
}
void OgrenciS::SetID(int _ID) {
	ID = _ID; 
}
void OgrenciS::SetAd(string _Ad) {
	Ad = _Ad;
}
void OgrenciS::SetSinavNotu(double _SinavNotu) {
	SinavNotu = _SinavNotu;
}

int OgrenciS::GetID(void) {
	return ID;
}
string OgrenciS::GetAd(void) {
	return Ad;
}
double OgrenciS::GetSinavNotu(void) {
	return SinavNotu;
}
void OgrenciS::BilgileriYaz(void) {
	cout << "Ogrencinin ID / Ad / Sinav Notu : " << ID << " " << Ad << " " << SinavNotu << endl;
}