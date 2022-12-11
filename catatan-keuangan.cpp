#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;
/*Tugas Kelompok 3, kasir restoran
  Anggota kelompok :
   1. Faizal Azzriel Gibar 2205719
   2. Rofi'ul Himam 2206231
   3. Jovanka Alexandro 2206407
   4. Nadila putri Prihanita 2209757 */
string validasi;
// Fungsi Login
int login() 
{
  string pass, username;
  string usn_true = "kelompok3";
  string pw_true = "restoran";
  int counter = 9;
  
  system("cls");
  cout << "\t\t\t\t===================================================\n";
  cout << "\t\t\t\t========== Selamat Datang di IZEL RESTO ===========\n";
  cout << "\t\t\t\t===================================================\n\n";
  for (int i = 2; i >= 0; --i) 
  {
    cout << "\t\t\t\t                  Silahkan Login                   \n\n";
    cout << "\t\t\t\tUsername: ";
    cin >> username;
    cout << "\t\t\t\tPassword: ";
    cin >> pass;
    system("cls");
    if (pass == pw_true && username == usn_true) 
    {
      validasi = "berhasil";
      break;
    }
    else if (i == 0) 
    {
      while (counter >= 1)
      {
          cout << "\r\t\t\t\tAnda tidak diperkenankan masuk, coba lagi dalam: " << counter << flush;
          sleep(1);
          counter--;
      }
      return login();
      break;
    }
    cout << "\t\t\t\t     Login salah! Kesempatan Anda " << i << " kali lagi!!    \n";
    cout << "\t\t\t\t===================================================\n\n";
  }
}
// Fungsi Pemesanan Makanan
void pesan_makanan() 
{
	ofstream outdata;
  string menu[11] = {"",     "Batagor", "Seblak", "Bakso",  "Rawon", "Soto",
                     "Kopi", "Teh",     "Susu",   "Mojito", "Sprite"};
  int harga[11] = {0,    15000, 10000, 12000, 12500, 17000,
                   6500, 5000,  5000,  8500,  5000};
  string ulang, namaPelanggan;
  int input = 0, total = 1, output, total_pembayaran = 0, uang, kembalian, metodePembayaran;
  int pesanan[100], total_harga[100], qty[100];

  cout << "\t\t\t\tMasukan nama anda: ";
  cin.ignore();
  getline(cin, namaPelanggan);
  cout << "\t\t\t\tPelanggan dengan atas nama: " << namaPelanggan << "\n";
  cout << "\t\t\t\tDaftar Menu: \n";
  for (int i = 1; i < 11; i++) 
  {
    cout << "\t\t\t\t" << i << ". " << menu[i] << " : " << harga[i] << "\n";
  }
  cout << "\n";
  do 
  {
    cout << "\t\t\t\tSilahkan pilih menu: ";
    cin >> pesanan[input];
    if (pesanan[input] > 10) 
    {
      system("cls");
      cout << "\t\t\t\tmenu tidak ditemukan\n";
      return pesan_makanan();
    }
    cout << "\t\t\t\tMasukan jumlah porsi: ";
    cin >> qty[input];
    cout << "\t\t\t\tApakah anda ingin memesan menu lagi?(y/t) ";
    cin >> ulang;
    cout << "\n";
    input++;
    total++;
  }
   while (ulang == "y");
  
  system("cls");
  cout << "\t\t\t\t===================================================\n";
  cout << "\t\t\t\t=================== IZEL RESTO ====================\n";
  cout << "\t\t\t\t===================================================\n\n";
  cout << "\t\t\t\tMenu yang sudah di pesan:\n";
  for (int i = 0; i < total - 1; i++) 
  {
    output = pesanan[i];
    total_harga[i] = harga[output] * qty[i];

    cout << "\t\t\t\tMenu : " << menu[output] << "\n";
    cout << "\t\t\t\tJumlah : " << qty[i] << "\n";
    cout << "\t\t\t\tHarga : " << total_harga[i] << "\n\n";
  }
  for (int i = 0; i < total - 1; i++) 
  {
    total_pembayaran += total_harga[i];
  }
  system("pause");
  system("cls");
  cout << "\t\t\t\t===================================================\n";
  cout << "\t\t\t\t=================== IZEL RESTO ====================\n";
  cout << "\t\t\t\t===================================================\n\n";
  cout << "\t\t\t\tTotal harga yang harus dibayar adalah: Rp" << total_pembayaran << "\n\n";
  cout << "\t\t\t\t1.Dana\n";
  cout << "\t\t\t\t2.Ovo\n";
  cout << "\t\t\t\t3.LinkAja \n";
  cout << "\t\t\t\t4.GoPay \n";
  cout << "\t\t\t\t5.Cash \n";
  cout << "\t\t\t\tPilih metode pembayaran anda: ";
  cin >> metodePembayaran;
  if (metodePembayaran == 1) 
  {
    // Output nama + total pembayaran + metode pembayaran
    cout << "\n";
    cout << "\t\t\t\t===================================================\n";
    cout << "\t\t\t\tNama Pelanggan    : " << namaPelanggan << "\n";
    cout << "\t\t\t\tMetode Pembayaran : Dana \n";
    cout << "\t\t\t\tTotal Harga       : Rp" << total_pembayaran << "\n";
    cout << "\t\t\t\t===================================================\n";
    outdata.open("struk_bayar.txt", ios::ate);
    outdata << "\n";
    outdata << "\t\t\t\t===================================================\n";
    outdata << "\t\t\t\tNama Pelanggan    : " << namaPelanggan << "\n";
    outdata << "\t\t\t\tMetode Pembayaran : Dana \n";
    outdata << "\t\t\t\tTotal Harga       : Rp" << total_pembayaran << "\n";
    outdata << "\t\t\t\t===================================================\n";  
  } 
  else if (metodePembayaran == 2) 
  {
    // Output nama + total pembayaran + metode pembayaran
    cout << "\n";
    cout << "\t\t\t\t===================================================\n";
    cout << "\t\t\t\tNama Pelanggan    : " << namaPelanggan << "\n";
    cout << "\t\t\t\tMetode Pembayaran : Ovo \n";
    cout << "\t\t\t\tTotal Harga       : Rp" << total_pembayaran << "\n";
    cout << "\t\t\t\t===================================================\n";
    outdata.open("struk_bayar.txt", ios::ate);
    outdata << "\n";
    outdata << "\t\t\t\t===================================================\n";
    outdata << "\t\t\t\tNama Pelanggan    : " << namaPelanggan << "\n";
    outdata << "\t\t\t\tMetode Pembayaran : Ovo \n";
    outdata << "\t\t\t\tTotal Harga       : Rp" << total_pembayaran << "\n";
    outdata << "\t\t\t\t===================================================\n";
  } 
  else if (metodePembayaran == 3) 
  {
    // Output nama + total pembayaran + metode pembayaran
    cout << "\n";
    cout << "\t\t\t\t===================================================\n";
    cout << "\t\t\t\tNama Pelanggan    : " << namaPelanggan << "\n";
    cout << "\t\t\t\tMetode Pembayaran : LinkAja \n";
    cout << "\t\t\t\tTotal Harga       : Rp" << total_pembayaran << "\n";
    cout << "\t\t\t\t===================================================\n";
    outdata.open("struk_bayar.txt", ios::ate);
    outdata << "\n";
    outdata << "\t\t\t\t===================================================\n";
    outdata << "\t\t\t\tNama Pelanggan    : " << namaPelanggan << "\n";
    outdata << "\t\t\t\tMetode Pembayaran : LinkAja \n";
    outdata << "\t\t\t\tTotal Harga       : Rp" << total_pembayaran << "\n";
    outdata << "\t\t\t\t===================================================\n";
  } 
  else if (metodePembayaran == 4) 
  {
    // Output nama + total pembayaran + metode pembayaran
    cout << "\n";
    cout << "\t\t\t\t===================================================\n";
    cout << "\t\t\t\tNama Pelanggan    : " << namaPelanggan << "\n";
    cout << "\t\t\t\tMetode Pembayaran : GoPay";
    cout << "\n";
    cout << "\t\t\t\tTotal Harga       : Rp" << total_pembayaran << "\n";
    cout << "\t\t\t\t===================================================\n";
    outdata.open("struk_bayar.txt", ios::ate);
    outdata << "\n";
    outdata << "\t\t\t\t===================================================\n";
    outdata << "\t\t\t\tNama Pelanggan    : " << namaPelanggan << "\n";
    outdata << "\t\t\t\tMetode Pembayaran : GoPay \n";
    outdata << "\t\t\t\tTotal Harga       : Rp" << total_pembayaran << "\n";
    outdata << "\t\t\t\t===================================================\n";
  } 
  else if (metodePembayaran == 5) 
  {
    // Output nama + total pembayaran + metode pembayaran
    cout << "\n";
    cout << "\t\t\t\tUang Tunai: Rp";
    cin >> uang;
    system("cls");
    if (uang < total_pembayaran) 
    {
      cout << "\t\t\t\tMaaf, uang tidak cukup.\n";
      return pesan_makanan();
    }
    cout << "\n";
    kembalian = uang - total_pembayaran;
    cout << "\t\t\t\t===================================================\n";
    cout << "\t\t\t\tNama Pelanggan   : " << namaPelanggan << "\n";
    cout << "\t\t\t\tMetode Pembayaran: Cash";
    cout << "\n";
    cout << "\t\t\t\tTotal Harga      : Rp" << total_pembayaran << "\n";
    cout << "\t\t\t\t--------------------------------\n";
    cout << "\t\t\t\tUang Tunai       : Rp" << uang << "\n";
    cout << "\t\t\t\tKembalian        : Rp" << kembalian << "\n";
    cout << "\t\t\t\t===================================================\n";
    outdata.open("struk_bayar.txt", ios::ate);
    outdata << "\t\t\t\t===================================================\n";
    outdata << "\t\t\t\tNama Pelanggan   : " << namaPelanggan << "\n";
    outdata << "\t\t\t\tMetode Pembayaran: Cash";
    outdata << "\n";
    outdata << "\t\t\t\tTotal Harga      : Rp" << total_pembayaran << "\n";
    outdata << "\t\t\t\t--------------------------------\n";
    outdata << "\t\t\t\tUang Tunai       : Rp" << uang << "\n";
    outdata << "\t\t\t\tKembalian        : Rp" << kembalian << "\n";
    outdata << "\t\t\t\t===================================================\n";
  } 
  else 
  {
    cout << "\t\t\t\tMetode pembayaran tidak tersedia";
    return pesan_makanan();
  }
}

// Fungsi Cari Menu
void cari_menu() 
{
  string pilihMakanan;
  string hasil;
  string lanjut;
  string makanan[10] = {"seblak", "batagor", "bakso",  "rawon", "kopi",
                        "susu",   "sprite",  "mojito", "teh",   "soto"};
  do 
  {
    system("cls");
    cout << "\t\t\t\tInput nama Menu yang ingin dicari: ";
    cin.ignore();
    getline(cin, pilihMakanan);
    // Looping array terlebih dahulu
    for (int i = 0; i < 10; i++) {
      if (pilihMakanan == makanan[i]) {
        // Masukan data makanan yang benar kedalam variable
        hasil = makanan[i];
      }
    }
    // Penkondisian hasil pilih makanan dan hasil data yang benar
    if (pilihMakanan == hasil) 
    {
      for (int i = 1; i < 10; i++) 
      {
        cout << "\t\t\t\t" << i << "." << makanan[i] << "\n";
      }
      // Jika benar
      cout << "\t\t\t\tMenu " << hasil << " di temukan";
      cout << "\n";
    } 
    else 
    {
      // Jika salah
      cout << "\t\t\t\tMenu " << pilihMakanan << " tidak di temukan";
      cout << "\n";
    }
    cout << "\t\t\t\tMau cari lagi? (y/t): ";
    cin >> lanjut;
  } 
  while (lanjut == "y");
}
// Menu Profil
void profil() 
{
  int a;
  string lagi;
  do 
  {
    system("cls");
    cout << "\t\t\t\tTentang karyawan Restoran, kelompok 3\n";
    cout << "\t\t\t\t1.Faizal\n";
    cout << "\t\t\t\t2.Rofi'ul\n";
    cout << "\t\t\t\t3.Jovanka\n";
    cout << "\t\t\t\t4.Nadila\n";
    cout << "\t\t\t\tSilahkan ingin lihat yang mana(1-4) ";
    cin >> a;
    switch (a)
    {
    case 1:
      system("cls");
      cout << "\t\t\t\tNama Lengkap   : Faizal Azzriel Gibar\n";
      cout << "\t\t\t\tNama Panggilan : Paisal\n";
      cout << "\t\t\t\tNIM            : 2205719\n";
      break;
    case 2:
      system("cls");
      cout << "\t\t\t\tNama Lengkap   : Rofi'ul Himam\n";
      cout << "\t\t\t\tNama Panggilan : Rofi\n";
      cout << "\t\t\t\tNIM            : 2206231\n";
      break;
    case 3:
      system("cls");
      cout << "\t\t\t\tNama Lengkap   : Jovanka Alexandro\n";
      cout << "\t\t\t\tnama Panggilan : Jovan\n";
      cout << "\t\t\t\tNIM            : 2206407\n";
      break;
    case 4:
      system("cls");
      cout << "\t\t\t\tNama Lengkap   : Nadila Putri Prihanita\n";
      cout << "\t\t\t\tNama Panggilan : Nadila\n";
      cout << "\t\t\t\tNIM            : 2209757\n";
      break;
    default:
      cout << "\t\t\t\tKaryawan tidak ditemukan\n";
    }
    cout << "\t\t\t\tLagi?(y/n) ";
    cin >> lagi;
  }
   while (lagi == "y");
}
// Program Utama
int main() 
{
  int menu;
  string ulang;
  login();
  if (validasi == "berhasil") 
  {
    do 
    {
      system("cls");
      cout << "\t\t\t\t===================================================\n";
      cout << "\t\t\t\t=================== IZEL RESTO ====================\n";
      cout << "\t\t\t\t===================================================\n\n";
      cout << "\t\t\t\t<--------------------( MENU )--------------------->\n\n";
      cout << "\t\t\t\t1.Pesan makanan dan minuman\n";
      cout << "\t\t\t\t2.Cari menu\n";
      cout << "\t\t\t\t3.Anggota kelompok\n";
      cout << "\t\t\t\t4.Log Out\n";
      cout << "\t\t\t\t5.EXIT\n";
      cout << "\t\t\t\tsilahkan pilih menu(1-5): ";
      cin >> menu;
      switch (menu) 
      {
      case 1:
        system("cls");
        cout << "\t\t\t\t===================================================\n";
        cout << "\t\t\t\t=================== IZEL RESTO ====================\n";
        cout << "\t\t\t\t===================================================\n\n";
        pesan_makanan();
        break;
      case 2:
        system("cls");
        cout << "\t\t\t\t===================================================\n";
        cout << "\t\t\t\t=================== IZEL RESTO ====================\n";
        cout << "\t\t\t\t===================================================\n\n";
        cari_menu();
        break;
      case 3:
        system("cls");
        cout << "\t\t\t\t===================================================\n";
        cout << "\t\t\t\t=================== IZEL RESTO ====================\n";
        cout << "\t\t\t\t===================================================\n\n";
        profil();
        break;
      case 4:
        system("cls");
        cout << "\t\t\t\t===================================================\n";
        cout << "\t\t\t\t=================== IZEL RESTO ====================\n";
        cout << "\t\t\t\t===================================================\n\n";
        cout << "\t\t\t\t<------------( Anda Berhasil Log Out )------------>\n";
        return main();
        break;
      case 5:
        system("cls");
        cout << "\t\t\t\t===================================================\n";
        cout << "\t\t\t\t=================== IZEL RESTO ====================\n";
        cout << "\t\t\t\t===================================================\n\n";
        cout << "Program selesai.....\n";
        return 0;
        break;
      default:
        cout << "\t\t\t\ttidak ada menu\n";
      }
      cout << "\t\t\t\tke menu/log out(y/t) ";
      cin >> ulang;
    } 
    while (ulang == "y");
    system("cls");
    cout << "\t\t\t\t<------------( Anda Berhasil Log Out )------------>\n";
    return main();
  }
}
