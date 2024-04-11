#pragma once

#include <iostream> 

using namespace std;

class OgrenciS {
private : 
	int ID;
	string Ad;
	double SinavNotu;
public:
	void SetID(int _ID);
	void SetAd(string _Ad);
	void SetSinavNotu(double _SinavNotu);

	int GetID(void);
	string GetAd(void);
	double GetSinavNotu(void);

	OgrenciS(int _ID, string _Ad, double _SinavNotu);

	void BilgileriYaz();
};