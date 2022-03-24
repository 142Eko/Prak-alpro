#include <iostream>
using namespace std;
 
class GasStation {
  protected:
    const float PERTALITE = 7000;
    const float PERTAMAX = 9000;
  public:
    string nama;
    float liter;
    char tipeBensin;
 
  float totalHarga() {
    float total;
    switch(tipeBensin) {
      case '1':
        total = PERTALITE * liter;
        break;
 
      case '2':
        total = PERTAMAX * liter;
        break;
    }
    return total;
  };
 
  string jenisBensin() {
    string jenis;
 
    switch(tipeBensin) {
      case '1':
        jenis = "Pertalite";
        break;
 
      case '2':
        jenis = "Pertamax";
        break;
    }
 
    return jenis;
  };
 
  string hargarBensin() {
    string jenis;
 
    switch(tipeBensin) {
      case '1':
        jenis = "Rp.7.000";
        break;
 
      case '2':
        jenis = "Rp.9.000";
        break;
    }
 
    return jenis;
  };
};
 
int main() {
  GasStation SPBU;
 
  cout << "Masukan Nama anda : \n";
  cin >> SPBU.nama;
 
  cout << "======================== \n";
 
  cout << "Masukan jenis bensin : \n\n1. Pertalite \n2. Pertamax \n";
  cin >> SPBU.tipeBensin;
 
  cout << "======================== \n";
 
  cout << "Masuk jumnlah liter yang di ingin kan : \n";
  cin >> SPBU.liter;
 
  cout << "\n\n======================== \n";
 
  cout << "SPBU Cita Jaya Abadi \n";
  cout << "-------------------- \n";
  cout << "Jenis BBM      : " << SPBU.jenisBensin() << " \n";
  cout << "Harga/liter    : " << SPBU.hargarBensin() << " \n";
  cout << "Total liter	  : " << SPBU.liter()<<"\n";
  cout << "Total          : Rp." << SPBU.totalHarga() << " \n";
  cout << "-------------------- \n";
  cout << "Terimakasi Selamat Jalan " << SPBU.nama << "\n";
 
  cout << "======================== \n";
}

