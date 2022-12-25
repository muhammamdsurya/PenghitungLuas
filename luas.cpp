/*===PROGRAM Meghitung bangun datar dan bangun ruang===
    Daftar Anggota
        Muhammad Surya Rusfauzi
        Cahyo Tri Atmojo
        Nur Halizah alfajr
        Deri Gilang Sumudra
        Deri Gilang Sumudra */

#include<iostream>
#include<windows.h>

using namespace std;

int pilihan;
float Lsegitiga, Ksegitiga, Lpersegi, Kpersegi, Lpersegipanjang, Kpersegipanjang, Llingkaran, Klingkaran, Vkubus, LPkubus, Vbalok, LPbalok, Vbola, LPbola, Vlimassegiempat, LPlimassegiempat, Vtabung, LPtabung;
float a, t, s, p, l, r, phi, sAB, sBC, sCA;
string ulang;

void anggota(){
    system("cls");
    system("color 2");
	cout<<"\t _____________________"<<endl;
	cout<<"\t|                          DIBUAT OLEH                        |"<<endl;
	cout<<"\t|_____________________|"<<endl;
    cout<<"\t|     NAMA:                        |                NIM:      |"<<endl;
    cout<<"\t|___________|_________|"<<endl;
    cout<<"\t||1.Muhammad Surya Rusfauzi        |             2110631170084|"<<endl;
    cout<<"\t|2.Cahyo Tri Atmojo                |             2110631170005|"<<endl;
    cout<<"\t|3.Nur Halizah alfajr              |             2110631170088|"<<endl;
    cout<<"\t|4.Taufik Faturokhman              |             2110631170110|"<<endl;
    cout<<"\t|5.Deri Gilang Sumudra             |             2110631170008|"<<endl;
	cout<<"\t|___________|_________|"<<endl;
}

void segitiga () {
    system("cls");
    system("color 3");
  	cout <<"\t============= Menghitung Luas Segitiga ================" << endl << endl;
  	cout <<"\tMasukkan alas segitiga : ";
    cin >> a;
    cout <<"\tMasukkan tinggi segitiga : ";
    cin >> t;
    Lsegitiga = 0.5 * a * t;
    cout << "\tLuas segitiga adalah : " << Lsegitiga << endl << endl;
    cout << "\t============= Menghitung Keliling Segitiga ============" << endl << endl;
    cout << "\tMasukkan sisi AB segitiga : ";
    cin >> sAB;
    cout <<"\tMasukkan sisi BC segitiga : ";
    cin >> sBC;
    cout <<"\tMasukkan sisi CA segitiga : ";
    cin >> sCA;
    Ksegitiga = sAB + sBC + sCA;
    cout <<"\tKeliling segitiga adalah : " << Ksegitiga << endl <<endl;
  }

void bujur(){
    system("cls");
    system("color 2");
	cout << "\t============== Menghitung Luas Bujursangkar ===========" << endl << endl;
	cout << "\tMasukkan sisi persegi : ";
    cin >> s;
    Lpersegi = s * s;
    cout << "\tLuas bujursangkar : " << Lpersegi << endl <<endl;
    cout << "\t============ Menghitung Keliling Bujursangkar =========" << endl;
    Kpersegi = 4 * s;
    cout << "\tKeliling bujursangkar : " << Kpersegi << endl<<endl;
}

void persegiPanjang() {
    system("cls");
    system("color 3");
	cout << "\t============= Menghitung Luas Persegipanjang ===========" << endl<<endl;
	cout << "\tMasukkan panjang : ";
    cin >> p;
    cout << "\tMasukkan lebar : ";
    cin >> l;
    Lpersegipanjang = p * l;
    cout << "\tLuas Persegipnjng: " << Lpersegipanjang << endl<<endl;
    cout << "\t======= Menghitung Keliling Persegipanjang =============" << endl;
    Kpersegipanjang = (p + l) * 2;
    cout << "\tKeliling Persegipnjng: " << Kpersegipanjang << endl<<endl;
}

void lingkaran(){
    system("cls");
    system("color 2");
	cout << "\t========== Menghitung Luas Lingkaran ==========" << endl<<endl;
	cout << "\tMasukkan jari-jari lingkaran : ";
    cin >> r;
    phi = 3.14;
    Llingkaran = phi * r * r;
    cout << "\tLuas lingkaran adalah : " << Llingkaran << endl<<endl;
    cout << "\t========== Menghitung Keliling Lingkaran =========" << endl;
    Klingkaran = phi * (r + r);
    cout << "\tKeliling lingkaran adalah : " << Klingkaran << endl<<endl;
}

void kubus(){
    system("cls");
    system("color 3");
  	cout << "\t========= Menghitung Volum Kubus =======" << endl;
  	 cout << "\tMasukkan sisi kubus : ";
    cin >> s;
    Vkubus = s * s * s;
    cout << "\tVolum kubus adalah : " << Vkubus << endl<<endl;
    cout << "\t====== Menghitung Luas Permukaan Kubus =======" << endl;
    LPkubus = 6 * s;
    cout << "\tLuas permukaan kubus adalah : " << LPkubus << endl<<endl;
  }

void balok(){
    system("cls");
    system("color 2");
	cout << "\t===== Menghitung Volum Balok ======" << endl;
	cout << "\tMasukkan panjang balok : ";
    cin >> p;
    cout << "\tMasukkan lebar balok : ";
    cin >> l;
    cout << "\tMasukkan tinggi balok : ";
    cin >> t;
    Vbalok = p * l * t;
    cout << "\tVolum balok adalah : " << Vbalok << endl<<endl;
    cout << "\t===== Menghitung Luas Permukaan Balok ======" << endl;
    LPbalok = (2 * p * l) + (2 * p * t) + (2 * l * t);
    cout << "\tLuas permukaan balok adalah : " << LPbalok << endl<<endl;
}

void bola(){
    system("cls");
    system("color 3");
	cout << "\t==== Menghitung Volum Bola ======" << endl;
	phi = 3.14;
	cout << "\tMasukkan jari jari bola : ";
    cin >> r;
    cout << "\tMasukkan tinggi bola : ";
    cin >> t;
    Vbola = 4 / 3 * phi * r * t * t * t;
    cout << "\tVolum bola adalah : " << Vbola << endl<<endl;
    cout << "\t====== Menghitung Luas Permukaan Bola =======" << endl;
    LPbola = 4 * phi * r * r;
    cout << "\tLuas permukaan bola adalah : " << LPbola << endl <<endl;
}

void limas(){
    system("cls");
    system("color 2");
	cout << "\t======= Menghitung Volum Limas Segi Empat =======" << endl;
	cout << "\tMasukkan panjang limas segi empat : ";
    cin >> p;
    cout << "\tMasukkan lebar limas segi empat : ";
    cin >> l;
    cout << "\tMasukkan tinggi limas segi empat : ";
    cin >> t;
    Vlimassegiempat = (p * l * t) * 1 / 3;
    cout << "\tVolum limas segi empat adalah : " << Vlimassegiempat << endl<<endl;
    cout << "\t======= Menghitung Luas Permukaan Limas Segi Empat ======" << endl;
    LPlimassegiempat = ((p + l) * t) + (p * l);
    cout << "\tLuas permukaan limas segi empat adalah :"<<LPlimassegiempat<<endl<<endl;
}

void tabung(){
    system("cls");
    system("color 3");
	cout << "\t========== Menghitung Volum Tabung ==========" << endl;
	phi = 3.14;
	cout << "\tMasukkan jari jari tabung : ";
    cin >> r;
    cout << "\tMasukkan tinggi tabung : ";
    cin >> t;
    Vtabung = phi * r * r * t;
    cout << "\tVolum tabung adalah : " << Vtabung << endl<<endl;
    cout << "\t=========== Menghitung Luas Permukaan Tabung ========" << endl;
    LPtabung = (2 * phi * r) * (r * t);
    cout << "\tLuas permukaan tabung adalah : " << LPtabung << endl<<endl;
}

void exit(){
        system("cls");
        system("color 2");
        cout<<"\t====================================================="<<endl;
        cout<<"\t|                                                   |"<<endl;
        cout<<"\t|  PROGRAM Meghitung bangun datar dan bangun ruang  |"<<endl;
        cout<<"\t|                                                   |"<<endl;
        cout<<"\t====================================================="<<endl;
        cout<<"\t**** PROGRAMMED BY KELOMPOK 5 ****"<<endl;
        cout<<endl;
        cout<<"\t--- Terima Kasih Atas Kunjungan Anda! ---"<<endl;
        cout<<endl;
}

int main() {

do {
  system("cls");
  system("color 3");
  cout << "\t======================================================" << endl;
  cout << "\t===PROGRAM Meghitung bangun datar dan bangun ruang===" << endl;
  cout << "\t======================================================" << endl;
  cout << "\t1.  Menghitung Luas & Keliling Segitiga" << endl;
  cout << "\t2.  Menghitung Luas & Keliling Bujursangkar" << endl;
  cout << "\t3.  Menghitung Luas & Keliling Persegipanjang" << endl;
  cout << "\t4.  Menghitung Luas & Keliling Lingkaran" << endl;
  cout << "\t5.  Menghitung Volume & Luas Permukaan Kubus" << endl;
  cout << "\t6.  Menghitung Volume & Luas Permukaan Balok" << endl;
  cout << "\t7.  Menghitung Volum & Luas Permukaan Bola" << endl;
  cout << "\t8.  Menghitung Volum & Luas Permukaan Limas Segi Empat "<<endl;
  cout << "\t9.  Menghitung Volum & Luas Permukaan Tabung" << endl;
  cout << "\t10. Anggota" <<endl;
  cout << "\t11. Exit" << endl;
  cout << endl << endl;
  cout << "\tPilihan anda : ";
  cin >> pilihan;

  if (pilihan == 1){
  	segitiga();
  }
  else if (pilihan == 2) {
  	bujur();
  }
  else if (pilihan == 3){
  	persegiPanjang();
  }
  else if (pilihan == 4){
  	lingkaran();
  }
  else if (pilihan == 5){
  	kubus();
  }
  else if (pilihan == 6){
  	balok();
  }
  else if (pilihan == 7){
  	bola();
  }
  else if (pilihan == 8){
  	limas();
  }
  else if (pilihan == 9){
  	tabung();
  }
  else if (pilihan == 10){
  	anggota();
  }
  else if (pilihan == 11) {
  	exit();
  	break;
  }
  else {
  	cout<<"MASUKAN PILIHAN YANG BENAR!"<<endl;
  }

  cout << "Kembali ke Menu Utama (y/n)?";
  cin >> ulang;
  while (ulang !="y" and ulang !="n"){
	
  	cout<<"MASUKAN PILIHAN YANG BENAR!"<<endl;
  	cout << "Kembali ke Menu Utama (y/n)?";
  	cin >> ulang;
  }

} while (ulang == "y");

if (ulang == "n"){
		exit();
	}
	return 0;

}
