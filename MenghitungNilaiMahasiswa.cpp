#include <iostream>

using namespace std;

int main(){
	
	//TUGAS LATIHAN 1 PERTEMUAN 3
	//Deklarasi variabel
	float absensi, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	char nama[25];
	
	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	cout<<"----------------------------------------"<<endl;
	
	//input
	cout<<"Masukan Nama Anda : ";
	cin>>nama;
	
	cout<<"Masukan Nilai Absensi : ";
	cin>>absensi;
	
	cout<<"Masukan Nilai Tugas : ";
	cin>>tugas;
	
	cout<<"Masukan Nilai UTS : ";
	cin>>uts;
	
	cout<<"Masukan Nilai UAS : ";
	cin>>uas;
	
	//menghitung sesuai rumus
	nilai_akhir = ((absensi*0.1)+(tugas*0.3)+(uts*0.3)+(uas*0.4));
	
	if (nilai_akhir>=80){
		nilai_huruf='A';
	}else if (nilai_akhir>=70){
		nilai_huruf='B';
	}else if(nilai_akhir>=60){
		nilai_huruf='C';
	}else if (nilai_akhir>=50){
		nilai_huruf='D';
	}else {
		nilai_huruf='E';
	}
	
	
	//output
	system("cls"); //untuk menghapus layar screen
	cout<<endl;
	cout<<"Nama Anda : "<<nama<<endl;
	cout<<"Nilai Akhir : "<<nilai_akhir<<endl;
	cout<<"Nilai Huruf : "<<nilai_huruf<<endl;
	
	
}
