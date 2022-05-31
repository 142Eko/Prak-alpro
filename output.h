#include <iostream>
#include <fstream>
using namespace std;
class output{
	private:
		p;
	public:
		void invoice(){
			ofstream txt("invoice.txt");
			txt<<"+-----------------------------------------------+\n";
			txt<<"|\t\tBukti Pembayaran\t\t|\n";
			txt<<"+-----------------------------------------------+\n";
			txt<<"| Nama Pelanggan	: EKO\t\t\t|\n";
			txt<<"| Alamat tujuan 	: alamat\t\t|\n";
			txt<<"| Asuransi produk	: ya\t\t\t|\n";
			txt<<"| Ekspedisi		: JNE\t\t\t|\n";
			txt<<"+-----------------------------------------------+\n";
			txt<<"| Nama barang	: alpro\t\t\t\t|\n";
			txt<<"| Jumlah barang	: 0\t\t\t\t|\n";
			txt<<"+-----------------------------------------------+\n";
			txt<<"| Diskon	: Rp.0\t\t\t\t|\n";
			txt<<"| Total bayar	: p\t\t\t\t|\n";
			txt<<"+-----------------------------------------------+\n";
			txt<<"|\tHarap simpan bukti pembayaran\t\t|\n";
			txt<<"|\t\tTerimakasih\t\t\t|\n";
			txt<<"+-----------------------------------------------+\n";
			txt.close();
		}
};

