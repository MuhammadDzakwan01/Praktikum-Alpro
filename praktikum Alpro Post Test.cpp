#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	string jenisBBM;
	float hargaPerliter, jumlahliter, totalharga;
	
	cout<<"Masukkan jenis BBM (Pertalite/Pertamax): ";
	cin>>jenisBBM;
	
	if(jenisBBM == "Pertalite" || jenisBBM == "Pertalite"){
		hargaPerliter =7000;
	}else if(jenisBBM == "Pertamax" || jenisBBM == "Pertamax"){
		hargaPerliter =9000;
	}else{
		cout<<"Jenis BBM tidak valid"<<endl;
		return 1;
	}
	cout<<"Masukkan jumlah liter: ";
	cin>>jumlahliter;
	
	totalharga= hargaPerliter*jumlahliter;
	
	 cout << "\n===================== STRUK BELANJA =====================\n";
	 cout << "Jenis BBM		: "<<jenisBBM<<endl;
	 cout << "Jumlah Liter	: "<<fixed<<setprecision(2)<<jumlahliter<<endl;
	 cout<<"Harga Per Liter	: "<<fixed<<setprecision(0)<<hargaPerliter<<endl;
	 cout<<"Total Harga		: "<<fixed<<setprecision(0)<<totalharga<<endl;
	  cout << "=========================================================\n";
	  
	  return 0;
	 
}
