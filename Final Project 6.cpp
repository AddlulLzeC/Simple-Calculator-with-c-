#include <iostream>
#include <stdlib.h>

using namespace std;
int main(int argc, char const *argv[])
{

	int pilihan_menu;
	int daftar_pesanan[10];
	int jumlah_pesanan = 0;
	int total_harga = 0;
	int MEJA;
	int BAYAR_MELALUI;
	int bayar, kembali, total;
	int tampilkan_menu;
	string NAMA;

	cout<<"======================================================="<<endl;
	cout <<"\t== SELAMAT DATANG DI WARUNG SUKA SUKA =="<<endl;
	cout<<"\tJalan. Sambirejo No.28 Depok, Yogyakarta"<<endl;
	cout<<"======================================================="<<endl;
	
	cout<< "MASUKAN NAMA ANDA :";
	cin >> NAMA;
	cout << "SILAHKAN MASUKAN NOMOR MEJA :";
	cin >> MEJA;
	tampilkan_menu:
	system ("cls");
	
	tampilkan_menu;
	
	cout<<"============================================================="<<endl;
	cout << "\t\t\tWARUNG SUKA SUKA"<<endl;
	cout<<"============================================================="<<endl;
	cout << "\t\tSILAHKAN MASUKAN PESANAN ANDA :)"<<endl;
	cout<<"============================================================="<<endl;
	cout<<"NAMA PEMESAN"<<NAMA<<endl;
	cout<<MEJA<<endl;
	cout << "0. Selesai order\n"<<endl;
	cout<<"      Menu Makanan\t\t    Harga"<<endl;
    cout<<"---------------------------\t-----------"<<endl;
	cout << "1. AYAM BAKAR BALI\t\t: Rp.22.000"<<endl;
	cout << "2. NILA BAKAR SAUS BARBEQUE\t: Rp.52.000"<<endl;
	cout << "3. SEA FOOD SAUS SAMYANG\t: Rp.85.000"<<endl;
	cout << "4. PECEL JAMUR\t\t\t: Rp.23.000"<<endl;
	cout << "5. ES TEH\t\t\t: Rp.10.000"<<endl;
	cout << "6. JUS MANGGA\t\t\t: Rp.12.000"<<endl;
	cout << "7. JUS TOMAT\t\t\t: Rp.10.000"<<endl;
	cout << "8. JUS ALPUKAT\t\t\t: Rp.12.000"<<endl;
	cout << "9. JUS JERUK\t\t\t: Rp.12.000"<<endl;
	cout<<"============================================================="<<endl;
	
 	cout << "Masukkan menu: ";
	cin >> pilihan_menu;
	if (pilihan_menu == 0) {
		goto order_selesai;	
	} else if (pilihan_menu == 1) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	} else if (pilihan_menu == 2) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	} else if (pilihan_menu == 3) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	} else if (pilihan_menu == 4) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	}else if (pilihan_menu == 5) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	}else if (pilihan_menu == 6) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	}else if (pilihan_menu == 7) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	}else if (pilihan_menu == 8) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	}else if (pilihan_menu == 9) {
		daftar_pesanan[jumlah_pesanan] = pilihan_menu;
		jumlah_pesanan++;
		goto tampilkan_menu;
	}
	else {
		cout << "Pilihan salah!\n";
		goto tampilkan_menu;
	}

order_selesai:
	
	system ("cls");
	cout<<"NOMOR MEJA KE : "<<MEJA<<endl;
	cout << "Jumlah pesanan Anda adalah " << jumlah_pesanan << " makanan\n";
	cout<<"------------------------------------------------------"<<endl;
	for (int i = 0; i < jumlah_pesanan; ++i) {
		if (daftar_pesanan[i] == 1) {
			cout << (i + 1) << ". AYAM BAKAR BALI\t\t(Rp.22.000)\n";
			total_harga += 22000;
		} else if (daftar_pesanan[i] == 2) {
			cout << (i + 1) << ". NILA BAKAR SAUS BARBEQUE\t(Rp.52.000)\n";
			total_harga += 52000;
		} else if (daftar_pesanan[i] == 3) {
			cout << (i + 1) << ". SEA FOOD SAUS SAMYANG\t(Rp.85.000)\n";
			total_harga += 85000;
		}else if (daftar_pesanan[i] == 4) {
			cout << (i + 1) << ". PECEL JAMUR\t\t\t(Rp.23.000)\n";
			total_harga += 23000;
		}else if (daftar_pesanan[i] == 5) {
			cout << (i + 1) << ". Es Teh\t\t\t(Rp.10.000)\n";
			total_harga += 10000;
		}else if (daftar_pesanan[i] == 6) {
			cout << (i + 1) << ". JUS MANGGA\t\t\t(Rp.12.000)\n";
			total_harga += 12000;
		}else if (daftar_pesanan[i] == 7) {
			cout << (i + 1) << ". JUS TOMAT\t\t\t(Rp.10.000)\n";
			total_harga += 10000;
		}else if (daftar_pesanan[i] == 8) {
			cout << (i + 1) << ". JUS ALPUKAT\t\t\t(Rp.12.000)\n";
			total_harga += 12000;
		}else if (daftar_pesanan[i] == 9) {
			cout << (i + 1) << ". JUS JERUK\t\t(Rp.12.000)\n";
			total_harga += 12000;

		}
	}
	
	
	cout<<" "<<endl;
	cout<< "Total harga :\t\t\t Rp." <<total_harga << "\n";
	cout<<"Uang yang Dibayar :\t Rp. ";
	cin>>bayar;
		kembali=bayar-total_harga;
	cout<<"kembali	:\t\t Rp. "<<kembali<<endl;
	
	cout<<"============================================================="<<endl;
	cout<<" TERIMA KASIH " <<NAMA<< " Atas Kunjungan Anda Di WARUNG SUKA SUKA"<<endl;
	cout<<"============================================================="<<endl;
	
	
}