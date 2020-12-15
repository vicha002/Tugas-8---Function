#include <iostream>

using namespace std;

int main ()
{	int pilih, r, t;
	float phi = 3.14, luas, keliling, volume ; 
	string ul;
	
	
	cout <<"----------------------------------------------------"<<endl;
	cout <<"TUGAS 8 PRAKTIKUM ALGORITMA DAN PEMROGRAMAN I"<<endl;
	cout <<"----------------------------------------------------"<<endl;
	cout <<"nama\t\t = Vicha Dorena Br Tarigan"<< endl;
	cout <<"NIM\t\t = 124200031"<< endl;
	cout <<"----------------------------------------------------"<<endl;
	cout <<endl;
	
	cout <<"Hitung Lingkaran===================================="<<endl;
	cout <<"1. Luas Lingkarang \n2. Keliling Lingkaran \n3. Volume Tabung"<<endl;
	
	putaran :
	cout <<endl;
	cout <<"Pilih \t :"; cin >>pilih;
	switch (pilih)
	
	{case (1) ://Luas Lingkaran
		cout <<"Jari-jari \t : "; cin >> r ; 
			
		luas = phi * r *r ;									
		
		cout <<"Luas Lingkaran \t : "<< luas <<endl;
		
	break ;
	
	case (2) ://Keliling Lingkaran
		cout <<"Jari-jari \t   : "; cin >>r ;
			
		keliling = 2 * (phi * r) ;
		
		cout <<"Keliling Lingkaran : "<< keliling <<endl; 
		
	break ;
	
	case (3) ://Volume Tabung
		cout <<"Jari-jari \t : "; cin >>r ;
		cout <<"Tinggi \t\t : "; cin >>t ;
		 
		volume = (phi * r * r ) * t ;						
		 
		cout <<"Volume Tabung : "<< volume <<endl;	
	 
	break ;
	
	default :
	cout <<"Input Salah :)"<<endl; 
	} 
	cout <<endl;
	cout <<"Ulangi Program ? (y/n) : "; cin >> ul ;
		if (ul == "y")
			{goto putaran ;}
			 
		else{ cout <<"Program Selesai, Terimakasih :)"<<endl; }		  
}
