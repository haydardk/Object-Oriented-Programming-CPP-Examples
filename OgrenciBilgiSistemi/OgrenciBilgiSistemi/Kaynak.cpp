#include <iostream>
#include "Ogrenci.h"
#include <list>

using namespace std;

void Menu(void) {
	cout << "********************"<<endl;
	cout << "1 ->> Yeni Kayit "<<endl;
	cout << "2 ->> Listele "<< endl; 
	cout << "3 ->> ID'ye Gore Kayit Sil"<<endl;
	cout << "4 ->> Ogrenci Ara "<< endl;
	cout << "5 ->> Cikis ;"<<endl;
	cout << "********************"<<endl;
}

void ogrenciEkle(list<OgrenciS>* _OgrenciListesi) {
	int _ID;
	double _SinavNotu;
	string _isim, _Ad_, _Soyad_;
	cout << " ID : ";
	cin >> _ID;
	cout << "Ad :";
	cin >> _Ad_ >> _Soyad_ ;
	_isim = _Ad_ + " " + _Soyad_;
	cout << "Sinav Notu : ";
	cin >> _SinavNotu;
	OgrenciS OgrenciYeni(_ID, _isim, _SinavNotu);
	_OgrenciListesi->push_back(OgrenciYeni);
}
void Showlist(list<OgrenciS> * _OgrenciListesi) {
	cout << "\n OGRENCI LISTESI \n";
	list<OgrenciS>::iterator _iterator;
	for (_iterator = _OgrenciListesi->begin(); _iterator != _OgrenciListesi->end(); _iterator++) {
		_iterator->BilgileriYaz();
	}
	cout << endl;
}
void ID_ileSil(list<OgrenciS> *_OgrenciListesi) {
	int Silinecek_ID_;
	cout << "Silinecek ogrencinin ID'sini giriniz : ";
	cin >> Silinecek_ID_;
	list<OgrenciS>::iterator _itrSil;
	for (_itrSil = _OgrenciListesi->begin(); _itrSil != _OgrenciListesi->end(); _itrSil++) {
		if (_itrSil->GetID() == Silinecek_ID_) {
			break;
		}
	}
	if (_itrSil == _OgrenciListesi->end() ){
		cout << " !!! ID BULUNAMADI !!! "<<endl;
	}
	else {
		_OgrenciListesi->erase(_itrSil);
	}
	

}
void Search(list<OgrenciS> *_OgrenciListesi) {
	int Aranan_ID;
	cout << "Aradiginiz ogrencinin ID'sini girin : ";
	cin >> Aranan_ID;
	list<OgrenciS> ::iterator _itrAra;
	for (_itrAra = _OgrenciListesi->begin(); _itrAra != _OgrenciListesi->end(); _itrAra++) {
		if (_itrAra->GetID() == Aranan_ID) {
			break;
		}
	}
	if (_itrAra == _OgrenciListesi->end()) {
		cout << " ID BULUNAMADI !!! " << endl; 
	}
	else {
		cout << "Aradiginiz ogrenci : " << endl;
		_itrAra->BilgileriYaz(); 
	}
}
int main(){

	list<OgrenciS>* OgrenciListesi = new list<OgrenciS>(); 

	int secim = 0;

	do {
		Menu();
		cout << " Secim yapiniz : ";
		cin >> secim;
		if (secim == 1) {
			ogrenciEkle(OgrenciListesi);
		}
		else if (secim == 2) {
			Showlist(OgrenciListesi);
		}
		else if (secim == 3) {
			ID_ileSil(OgrenciListesi);
		}
		else if (secim == 4) {
			Search(OgrenciListesi);
		}
		else if (secim == 5) {
			break;
		}
		else {
			cout << "ERROR !" << endl << "Try again..."<< endl;
		}


	} while (secim != 5);
}