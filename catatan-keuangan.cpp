#include <iostream>
#include <iomanip>													//manipulator
#include <fstream> 													//untuk mengeluarkan output program ke file lain
#include <string>													//string
#include <windows.h>													//untuk system cls
#include <chrono>
#include <thread>
#include <ctime>
#include <map>

using namespace std;

    ofstream outdata,outdata2,outdata3;						//untuk save ke txt
    char keterangan[100][100], keterangann[100][100],menu;			//array keterangan
    int pemasukan,pengeluaran;				 			//input pemasukan dan pengeluaran
    int a,b,i,c,d,ket1,ket2,menu3,n=1;						//looping
    int total,tsa=0,tsb=0;							//selisih, total pemasukan, total pengeluaran
    char ulangi = 'y';								//looping do while
    int counter = 0;								//looping do while
    string pass, user;								//input user dan password
    string username ="daspro";							//username
    string password = "daspro";							//password
    string login = "block";							//pembatasan login
    string nm;									//input nama
    string file;								//input nama file untuk di save
    string hari,hari2,bulan,bulan2;						//hari
    int tanggal,tanggal2,tahun,tahun2;						//date
    int minimal = 0;

int sequent(int arr[], int z, int x){
	for (int c=0; c<z; c++){
		if (arr[c]==x){
	return c;
		}		
	}
return -1;
} //end fungsi sequent search menu 2 bagian pemasukan

int sequent2(int arr2[], int z2, int x){
	for (int c=0; c<z2; c++){
		if (arr2[c]==x){
	return c;
		}		
	}
return -1;
} //end fungsi sequent search menu 2 bagian pengeluaran

int s3(int a3[], int y, int x){
	for (int d=0; d<y; d++){
		if (a3[d]==x){
	return d;
		}		
	}
return -1;
} //end fungsi sequent search menu 3 bagian pemasukan

int s4(int a4[], int y2, int x){
	for (int d=0; d<y2; d++){
		if (a4[d]==x){
	return d;
		}		
	}
return -1;
} //end fungsi sequent search menu 3 bagian pengeluaran


void menu1(){
    //pemilihan waktu (hari,tanggal,bulan,tahun)
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"            Contoh: (Rabu) (21) (12) (2022)            "<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Masukan hari: ";cin>>hari;
    cout<<" Masukan tanggal: ";cin>>tanggal;
    cout<<" Masukan bulan: ";cin>>bulan;
    cout<<" Masukan tahun: ";cin>>tahun;
    system("cls");
    //menu 1. harian
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<endl;
    //input pemasukan
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Masukan Jumlah Data Pemasukan Hari Ini	: ";cin>>ket1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
        for (a=1; a<=ket1; a++){
        cout<<" Nilai pemasukan	: ";cin>>pemasukan;
        while (pemasukan < minimal){
		    system("cls");
		    cout<<"-----------------------------------------------------------------------------"<<endl;
        	cout<<" !! input yang Anda masukan tidak valid, tolong masukan bilangan positif !!"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
        	system("pause");
        	system("cls");
		    cout<<"#######################################################"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
			cout<<"######             Catatan Keuangan              ######"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"#######################################################"<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
		    cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	        cout<<" Nilai pemasukan	: ";cin>>pemasukan;
		}
        cout<<" Keterangan	: ";cin>>keterangan[a];
        tsa+=pemasukan;
    }
     //input pengeluaran
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Masukan Jumlah Data Pengeluaran Hari Ini	 : ";cin>>ket2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
        for (b=1; b<=ket2; b++){
        cout<<" Nilai pengeluaran	: ";cin>>pengeluaran;
        while (pengeluaran < minimal){
		    system("cls");
		    cout<<"-----------------------------------------------------------------------------"<<endl;
        	cout<<"!!  input yang Anda masukan tidak valid, tolong masukan bilangan positif   !!"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
        	system("pause");
        	system("cls");
		    cout<<"#######################################################"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
			cout<<"######             Catatan Keuangan              ######"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"#######################################################"<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
		    cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	        cout<<" Nilai pengeluaran	: ";cin>>pengeluaran;
		}
        cout<<" Keterangan	: ";cin>>keterangann[b];
		tsb+=pengeluaran;  
    }
    system("cls");
    //output data
    total=tsa-tsb;
    cout<<" history keterangan "<<endl;
		//output pemasukan
    for (a=1; a<=ket1; a++){
        cout<<"-------------------------------------------------------"<<endl;
        cout<<" keterangan   : "<<keterangan[a]<<endl;
        cout<<endl;
        }
        //output pengeluaran
    for (b=1; b<=ket2; b++){
        cout<<"-------------------------------------------------------"<<endl;
        cout<<endl<<" keterangan   : "<<keterangann[b]<<endl;
        cout<<endl;
        }
    //hasil nya
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Total Pemasukan    : ";cout<<tsa<<endl;
    cout<<" Total Pengeluaran  : ";cout<<tsb<<endl;
    cout<<" Selisih            : ";cout<<total<<endl;
	if (total>0){
		cout<<" bagus "<<nm; cout<<" sudah hebat"<<endl;
	}                                                            
	else if (total<0){
		cout<<" semangat!! "<<nm; cout<<" harus belajar berhemat dan manajemen uang!! "<<endl;
	} 
	else{
		cout<<" mohon tingkatkan lagi, "<<nm; cout<<" harus berhemat!!"<<endl;
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;
    cout<<"-------------------------------------------------------"<<endl;
    
	if (pemasukan == 0){
		cout<<" transaksi kosong ditemukan !! "<<endl;
	}
		else if(pengeluaran == 0){
		cout<<" transaksi kosong ditemukan !! "<<endl;
	}
	    else {
		cout<<" "<<endl;
	}
    
    //save file
    cout<<" contoh: laporan.txt | laporan.csv"<<endl;
    cout<<" Masukan Nama File: ";
    cin>>file;
    outdata.open(file, ios::app);
    outdata<<endl;
    outdata<<"-------------------------------------------------------"<<endl;
    outdata<<"						Menu Harian						"<<endl;
    outdata<<"-------------------------------------------------------"<<endl;
    outdata<<"Nama: "<<nm<<endl;
    outdata<<"Date: "<<hari<<" / "<<tanggal<<"-"<<bulan<<"-"<<tahun<<endl;
    outdata<<"-------------------------------------------------------"<<endl;
	outdata<<"Total pemasukan: "<<tsa<<endl;
	outdata<<"Total Pengeluaran: "<<tsb<<endl;
	outdata<<"Selisih: "<<total<<endl;
	if (total>0){
		outdata<<" bagus "<<nm<<" sudah hebat"<<endl;
	}                                                            
	else if (total<0){
		outdata<<" semangat!! "<<nm<<" harus belajar berhemat dan manajemen uang!! "<<endl;
	} 
	else{
		outdata<<" mohon tingkatkan lagi, "<<nm<<" harus berhemat!!"<<endl;
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;
    outdata<<"-------------------------------------------------------"<<endl;
	cout<<"data berhasil disimpan!"<<endl;
} //end fungsi menu1

void menu2(){
  int c;
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
  int arr2[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
  int z = sizeof(arr) / sizeof(arr[0]);
  int z2 = sizeof(arr2) / sizeof(arr2[0]);
  z=8;
  z2=8;
  int x = 0;
  string hari;
  int tanggal,  bulan, tahun;
  
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"            Contoh: (Rabu) (20) (12) (2022)          "<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Masukan hari (Rabu): ";cin>>hari;
    cout<<" Masukan tanggal (20): ";cin>>tanggal;
    cout<<" Masukan bulan (12): ";cin>>bulan;
    cout<<" Masukan tahun (2022): ";cin>>tahun;
	// Menentukan indeks hari berdasarkan input hari
	map<string, int> indeks_hari = {{"Senin", 1}, {"Selasa", 2}, {"Rabu", 3}, {"Kamis", 4}, {"Jumat", 5}, {"Sabtu", 6}, {"Minggu", 0}};
	int indeks = indeks_hari[hari];
	tm waktu;
	waktu.tm_mday = tanggal;
	waktu.tm_mon = bulan - 1; // indeks bulan dimulai dari 0
	waktu.tm_year = tahun - 1900; // tahun 1900 adalah tahun dasar dari struktur waktu
	waktu.tm_wday = indeks; // indeks hari dimulai dari 0
	waktu.tm_hour = 0;
	waktu.tm_min = 0;
	waktu.tm_sec = 0;
    // Menambahkan 7 hari ke waktu yang diberikan
    time_t waktu_unix = mktime(&waktu);
    waktu_unix += 60 * 60 * 24 * 6;
    // Mengubah kembali waktu menjadi struktur waktu
    tm *waktu_baru = localtime(&waktu_unix);
    //menu 2. mingguan
	for(int c=1; c<z; c++){
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    printf("\t Menu 2 \n");
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Date: " <<hari<<"/"<<tanggal<<"-";
  if(bulan==1){
  cout<<"Januari";
}
  else if(bulan==2){
  cout<<"Februari";
}
  else if(bulan==3){
  cout<<"Maret";
}
  else if(bulan==4){
  cout<<"April";
}
  else if(bulan==5){
  cout<<"Mei";
}
  else if(bulan==6){
  cout<<"Juni";
}
  else if(bulan==7){
  cout<<"Juli";
}
  else if (bulan==8){
  cout<<"Agustus";
}
  else if (bulan==9){
  cout<<"September";
}
  else if (bulan==10){
  cout<<"Oktober";
}
  else if (bulan==11){
  cout<<"November";
}
  else if (bulan==12){
  cout<<"Desember";
}
else{
	cout<<"input bulan tidak valid";
}
	cout<<"-"<<tahun<<" Sampai ";
      // Menampilkan hasil
  if(indeks==1){
  cout<<"Minggu";
}
  else if(indeks==2){
  cout<<"Senin";
}
  else if(indeks==3){
  cout<<"Selasa";
}
  else if(indeks==4){
  cout<<"Rabu";
}
  else if(indeks==5){
  cout<<"Kamis";
}
  else if(indeks==6){
  cout<<"Jumat";
}
  else if(indeks==0){
  cout<<"Sabtu";
}
else{
	cout<<"input hari tidak valid";
}
    cout<<"/"<< waktu_baru->tm_mday << "-";
    
if (waktu_baru->tm_mon + 1 == 1) {
cout << "Januari";
} else if (waktu_baru->tm_mon + 1 == 2) {
cout << "Februari";
} else if (waktu_baru->tm_mon + 1 == 3) {
cout << "Maret";
} else if (waktu_baru->tm_mon + 1 == 4) {
cout << "April";
} else if (waktu_baru->tm_mon + 1 == 5) {
cout << "Mei";
} else if (waktu_baru->tm_mon + 1 == 6) {
cout << "Juni";
} else if (waktu_baru->tm_mon + 1 == 7) {
cout << "Juli";
} else if (waktu_baru->tm_mon + 1 == 8) {
cout << "Agustus";
} else if (waktu_baru->tm_mon + 1 == 9) {
cout << "September";
} else if (waktu_baru->tm_mon + 1 == 10) {
cout << "Oktober";
} else if (waktu_baru->tm_mon + 1 == 11) {
cout << "November";
} else if (waktu_baru->tm_mon + 1 == 12) {
cout << "Desember";
}
       //<< waktu_baru->tm_mon + 1 
   cout << "-" << waktu_baru->tm_year + 1900 << endl;
    //input pemasukan
    cout<<"-------------------------------------------------------"<<endl;
    printf(" Masukan Jumlah Data Pemasukan Hari ke %i	: ", c);cin>>ket1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
       for (a=1; a<=ket1; a++){
        cout<<" Nilai pemasukan	: ";cin>>arr[c];
        while (arr[c] < minimal){
		    system("cls");
		    cout<<"-----------------------------------------------------------------------------"<<endl;
        	cout<<" !! input yang Anda masukan tidak valid, tolong masukan bilangan positif !!"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
        	system("pause");
        	system("cls");
		    cout<<"#######################################################"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
			cout<<"######             Catatan Keuangan              ######"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"#######################################################"<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
  			cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<" Sampai ";
			      // Menampilkan hasil
  if(indeks==1){
  cout<<"Minggu";
}
  else if(indeks==2){
  cout<<"Senin";
}
  else if(indeks==3){
  cout<<"Selasa";
}
  else if(indeks==4){
  cout<<"Rabu";
}
  else if(indeks==5){
  cout<<"Kamis";
}
  else if(indeks==6){
  cout<<"Jumat";
}
  else if(indeks==0){
  cout<<"Sabtu";
}
else{
	cout<<"input hari tidak valid";
}
    cout<<"/"<< waktu_baru->tm_mday << "-";
    
if (waktu_baru->tm_mon + 1 == 1) {
cout << "Januari";
} else if (waktu_baru->tm_mon + 1 == 2) {
cout << "Februari";
} else if (waktu_baru->tm_mon + 1 == 3) {
cout << "Maret";
} else if (waktu_baru->tm_mon + 1 == 4) {
cout << "April";
} else if (waktu_baru->tm_mon + 1 == 5) {
cout << "Mei";
} else if (waktu_baru->tm_mon + 1 == 6) {
cout << "Juni";
} else if (waktu_baru->tm_mon + 1 == 7) {
cout << "Juli";
} else if (waktu_baru->tm_mon + 1 == 8) {
cout << "Agustus";
} else if (waktu_baru->tm_mon + 1 == 9) {
cout << "September";
} else if (waktu_baru->tm_mon + 1 == 10) {
cout << "Oktober";
} else if (waktu_baru->tm_mon + 1 == 11) {
cout << "November";
} else if (waktu_baru->tm_mon + 1 == 12) {
cout << "Desember";
}
       //<< waktu_baru->tm_mon + 1 
   cout << "-" << waktu_baru->tm_year + 1900<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	        cout<<" pemasukan	: ";cin>>arr[c];
		}
        cout<<" Keterangan		: ";cin>>keterangan[c];
        tsa+=arr[c];
    }
     //input pengeluaran
    cout<<"-------------------------------------------------------"<<endl;
    printf(" Masukan Jumlah Data Pengeluaran Hari ke %i	 : ", c);cin>>ket2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
        for (b=1; b<=ket2; b++){
        cout<<" Nilai pengeluaran	: ";cin>>arr2[c];
        while (arr2[c] < minimal){
		    system("cls");
		    cout<<"-----------------------------------------------------------------------------"<<endl;
        	cout<<"!!  input yang Anda masukan tidak valid, tolong masukan bilangan positif   !!"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
        	system("pause");
        	system("cls");
		    cout<<"#######################################################"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
			cout<<"######             Catatan Keuangan              ######"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"#######################################################"<<endl;
		  	cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<" Sampai ";
			      // Menampilkan hasil
  if(indeks==1){
  cout<<"Minggu";
}
  else if(indeks==2){
  cout<<"Senin";
}
  else if(indeks==3){
  cout<<"Selasa";
}
  else if(indeks==4){
  cout<<"Rabu";
}
  else if(indeks==5){
  cout<<"Kamis";
}
  else if(indeks==6){
  cout<<"Jumat";
}
  else if(indeks==0){
  cout<<"Sabtu";
}
else{
	cout<<"input hari tidak valid";
}
    cout<<"/"<< waktu_baru->tm_mday << "-";
    
if (waktu_baru->tm_mon + 1 == 1) {
cout << "Januari";
} else if (waktu_baru->tm_mon + 1 == 2) {
cout << "Februari";
} else if (waktu_baru->tm_mon + 1 == 3) {
cout << "Maret";
} else if (waktu_baru->tm_mon + 1 == 4) {
cout << "April";
} else if (waktu_baru->tm_mon + 1 == 5) {
cout << "Mei";
} else if (waktu_baru->tm_mon + 1 == 6) {
cout << "Juni";
} else if (waktu_baru->tm_mon + 1 == 7) {
cout << "Juli";
} else if (waktu_baru->tm_mon + 1 == 8) {
cout << "Agustus";
} else if (waktu_baru->tm_mon + 1 == 9) {
cout << "September";
} else if (waktu_baru->tm_mon + 1 == 10) {
cout << "Oktober";
} else if (waktu_baru->tm_mon + 1 == 11) {
cout << "November";
} else if (waktu_baru->tm_mon + 1 == 12) {
cout << "Desember";
}
       //<< waktu_baru->tm_mon + 1 
   cout << "-" << waktu_baru->tm_year + 1900<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	        cout<<" pengeluaran	: ";cin>>arr2[c];
		}
        cout<<" Keterangan			: ";cin>>keterangann[c];
		tsb+=arr2[c];  
    }
    system("cls");
    //output data
    total=tsa-tsb;
    //hasil nya
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Total Pemasukan    : ";cout<<tsa<<endl;
    cout<<" Total Pengeluaran  : ";cout<<tsb<<endl;
    cout<<" Selisih            : ";cout<<total<<endl;
	if (total>0){
		cout<<" bagus "<<nm; cout<<" sudah hebat"<<endl;
	}                                                            
	else if (total<0){
		cout<<" semangat!! "<<nm; cout<<" harus belajar berhemat dan manajemen uang!! "<<endl;
	} 
	else{
		cout<<" mohon tingkatkan lagi, "<<nm; cout<<" harus berhemat!!"<<endl;
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;
    cout<<"-------------------------------------------------------"<<endl;
	} //end perulangan for
	
    int result = sequent(arr , z, x);			//sequent pemasukan
   	if (result != -1){
		cout<<"pemasukan 0 ditemukan di hari ke: "<<result<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	}else {
		cout<<" "<<endl;
	}

	int result2 = sequent2(arr2 , z2, x);		//sequent pengeluaran
   	if (result2 != -1){
		cout<<"Pengeluaran 0 ditemukan di hari ke: "<<result2<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	}else {
		cout<<" "<<endl;
	}
	cout<<"contoh: laporan.txt | laporan.csv"<<endl;
    cout<<"Masukan Nama File: ";
    cin>>file;
    outdata2.open(file, ios::app);
    outdata2<<endl;
    outdata2<<"-------------------------------------------------------"<<endl;
    outdata2<<"						Menu Mingguan				 	  "<<endl;
    outdata2<<"-------------------------------------------------------"<<endl;
    outdata2<<" Nama: "<<nm<<endl;
    outdata2<<" Date: " <<hari<<"/"<<tanggal<<"-";
  if(bulan==1){
  outdata2<<"Januari";
}
  else if(bulan==2){
  outdata2<<"Februari";
}
  else if(bulan==3){
  outdata2<<"Maret";
}
  else if(bulan==4){
  outdata2<<"April";
}
  else if(bulan==5){
  outdata2<<"Mei";
}
  else if(bulan==6){
  outdata2<<"Juni";
}
  else if(bulan==7){
  outdata2<<"Juli";
}
  else if (bulan==8){
  outdata2<<"Agustus";
}
  else if (bulan==9){
  outdata2<<"September";
}
  else if (bulan==10){
  outdata2<<"Oktober";
}
  else if (bulan==11){
  outdata2<<"November";
}
  else if (bulan==12){
  outdata2<<"Desember";
}
else{
	outdata2<<"input bulan tidak valid";
}
	outdata2<<"-"<<tahun<<" Sampai ";
      // Menampilkan hasil
  if(indeks==1){
  outdata2<<"Minggu";
}
  else if(indeks==2){
  outdata2<<"Senin";
}
  else if(indeks==3){
  outdata2<<"Selasa";
}
  else if(indeks==4){
  outdata2<<"Rabu";
}
  else if(indeks==5){
  outdata2<<"Kamis";
}
  else if(indeks==6){
  outdata2<<"Jumat";
}
  else if(indeks==0){
  outdata2<<"Sabtu";
}
else{
outdata2<<"input hari tidak valid";
}
    outdata2<<"/"<< waktu_baru->tm_mday << "-";
    
if (waktu_baru->tm_mon + 1 == 1) {
outdata2<< "Januari";
} else if (waktu_baru->tm_mon + 1 == 2) {
outdata2<< "Februari";
} else if (waktu_baru->tm_mon + 1 == 3) {
outdata2<< "Maret";
} else if (waktu_baru->tm_mon + 1 == 4) {
outdata2<< "April";
} else if (waktu_baru->tm_mon + 1 == 5) {
outdata2<< "Mei";
} else if (waktu_baru->tm_mon + 1 == 6) {
outdata2<< "Juni";
} else if (waktu_baru->tm_mon + 1 == 7) {
outdata2<< "Juli";
} else if (waktu_baru->tm_mon + 1 == 8) {
outdata2<< "Agustus";
} else if (waktu_baru->tm_mon + 1 == 9) {
outdata2<< "September";
} else if (waktu_baru->tm_mon + 1 == 10) {
outdata2<< "Oktober";
} else if (waktu_baru->tm_mon + 1 == 11) {
outdata2<< "November";
} else if (waktu_baru->tm_mon + 1 == 12) {
outdata2<< "Desember";
}
       //<< waktu_baru->tm_mon + 1 
   outdata2<< "-" << waktu_baru->tm_year + 1900 << endl;
    outdata2<<"-------------------------------------------------------"<<endl;
	outdata2<<" Total pemasukan: "<<tsa<<endl;
	outdata2<<" Total Pengeluaran: "<<tsb<<endl;
	outdata2<<" Selisih: "<<total<<endl;
	if (total>0){
		outdata2<<" bagus "<<nm<<" sudah hebat"<<endl;
	}                                                            
	else if (total<0){
		outdata2<<" semangat!! "<<nm<<" harus belajar berhemat dan manajemen uang!! "<<endl;
	} 
	else{
		outdata2<<" mohon tingkatkan lagi, "<<nm<<" harus berhemat!!"<<endl;
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;
    outdata2<<"-------------------------------------------------------"<<endl;
	cout<<"data berhasil disimpan!"<<endl;
} //end fungsi menu2

void menu_3(){
  int d;
  int a3[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
  int a4[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
  int y = sizeof(a3) / sizeof(a3[0]);
  int y2 = sizeof(a4) / sizeof(a4[0]);
  y+=menu3;
  y2+=menu3;
  int x = 0;
    string hari;
  int tanggal,  bulan, tahun;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Jumlah hari dalam sebulan 30 atau 31 ?	: ";cin>>menu3                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ;
    cout<<"-------------------------------------------------------"<<endl;
    while(menu3 > 31){
    	cout<<"Jumlah Hari error"<<endl;
    	system("pause");
    	system("cls");
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Jumlah hari dalam sebulan 30 atau 31 ?	: ";cin>>menu3                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ;
    cout<<"-------------------------------------------------------"<<endl;
	}
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"            Contoh: (Rabu) (20) (12) (2022)          "<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Masukan hari (Rabu): ";cin>>hari;
    cout<<" Masukan tanggal (20): ";cin>>tanggal;
    cout<<" Masukan bulan (12): ";cin>>bulan;
    cout<<" Masukan tahun (2022): ";cin>>tahun;
	// Menentukan indeks hari berdasarkan input hari
	map<string, int> indeks_hari = {{"Senin", 1}, {"Selasa", 2}, {"Rabu", 3}, {"Kamis", 4}, {"Jumat", 5}, {"Sabtu", 6}, {"Minggu", 0}};
	int indeks = indeks_hari[hari];
	tm waktu;
	waktu.tm_mday = tanggal;
	waktu.tm_mon = bulan - 1; // indeks bulan dimulai dari 0
	waktu.tm_year = tahun - 1900; // tahun 1900 adalah tahun dasar dari struktur waktu
	waktu.tm_wday = indeks; // indeks hari dimulai dari 0
	waktu.tm_hour = 0;
	waktu.tm_min = 0;
	waktu.tm_sec = 0;
    // Menambahkan 7 hari ke waktu yang diberikan
    time_t waktu_unix = mktime(&waktu);
    waktu_unix += 60 * 60 * 24 * menu3-1;
    // Mengubah kembali waktu menjadi struktur waktu
    tm *waktu_baru = localtime(&waktu_unix);
	for(int d=1; d<=menu3; d++){
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    printf("\t Menu 3 \n");
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Date: " <<hari<<"/"<<tanggal<<"-";
  if(bulan==1){
  cout<<"Januari";
}
  else if(bulan==2){
  cout<<"Februari";
}
  else if(bulan==3){
  cout<<"Maret";
}
  else if(bulan==4){
  cout<<"April";
}
  else if(bulan==5){
  cout<<"Mei";
}
  else if(bulan==6){
  cout<<"Juni";
}
  else if(bulan==7){
  cout<<"Juli";
}
  else if (bulan==8){
  cout<<"Agustus";
}
  else if (bulan==9){
  cout<<"September";
}
  else if (bulan==10){
  cout<<"Oktober";
}
  else if (bulan==11){
  cout<<"November";
}
  else if (bulan==12){
  cout<<"Desember";
}
else{
	cout<<"input bulan tidak valid";
}
	cout<<"-"<<tahun<<" Sampai ";
      // Menampilkan hasil
  if(indeks==1){
  cout<<"Minggu";
}
  else if(indeks==2){
  cout<<"Senin";
}
  else if(indeks==3){
  cout<<"Selasa";
}
  else if(indeks==4){
  cout<<"Rabu";
}
  else if(indeks==5){
  cout<<"Kamis";
}
  else if(indeks==6){
  cout<<"Jumat";
}
  else if(indeks==0){
  cout<<"Sabtu";
}
else{
	cout<<"input hari tidak valid";
}
    cout<<"/"<< waktu_baru->tm_mday << "-";
    
if (waktu_baru->tm_mon + 1 == 1) {
cout << "Januari";
} else if (waktu_baru->tm_mon + 1 == 2) {
cout << "Februari";
} else if (waktu_baru->tm_mon + 1 == 3) {
cout << "Maret";
} else if (waktu_baru->tm_mon + 1 == 4) {
cout << "April";
} else if (waktu_baru->tm_mon + 1 == 5) {
cout << "Mei";
} else if (waktu_baru->tm_mon + 1 == 6) {
cout << "Juni";
} else if (waktu_baru->tm_mon + 1 == 7) {
cout << "Juli";
} else if (waktu_baru->tm_mon + 1 == 8) {
cout << "Agustus";
} else if (waktu_baru->tm_mon + 1 == 9) {
cout << "September";
} else if (waktu_baru->tm_mon + 1 == 10) {
cout << "Oktober";
} else if (waktu_baru->tm_mon + 1 == 11) {
cout << "November";
} else if (waktu_baru->tm_mon + 1 == 12) {
cout << "Desember";
}
       //<< waktu_baru->tm_mon + 1 
   cout << "-" << waktu_baru->tm_year + 1900 << endl;
    //input pemasukan
    cout<<"-------------------------------------------------------"<<endl;
    printf(" Masukan Jumlah Data Pemasukan Hari ke %d	 : ", d);cin>>ket1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;
    cout<<"-------------------------------------------------------"<<endl;
        for (a=1; a<=ket1; a++){
        cout<<" Nilai pemasukan	: ";cin>>a3[d];
        while (a3[d] < minimal){
		    system("cls");
		    cout<<"-----------------------------------------------------------------------------"<<endl;
        	cout<<" !! input yang Anda masukan tidak valid, tolong masukan bilangan positif !!"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
        	system("pause");
        	system("cls");
		    cout<<"#######################################################"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
			cout<<"######             Catatan Keuangan              ######"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"#######################################################"<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
  			cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<" Sampai ";
			      // Menampilkan hasil
  if(indeks==1){
  cout<<"Minggu";
}
  else if(indeks==2){
  cout<<"Senin";
}
  else if(indeks==3){
  cout<<"Selasa";
}
  else if(indeks==4){
  cout<<"Rabu";
}
  else if(indeks==5){
  cout<<"Kamis";
}
  else if(indeks==6){
  cout<<"Jumat";
}
  else if(indeks==0){
  cout<<"Sabtu";
}
else{
	cout<<"input hari tidak valid";
}
    cout<<"/"<< waktu_baru->tm_mday << "-";
    
if (waktu_baru->tm_mon + 1 == 1) {
cout << "Januari";
} else if (waktu_baru->tm_mon + 1 == 2) {
cout << "Februari";
} else if (waktu_baru->tm_mon + 1 == 3) {
cout << "Maret";
} else if (waktu_baru->tm_mon + 1 == 4) {
cout << "April";
} else if (waktu_baru->tm_mon + 1 == 5) {
cout << "Mei";
} else if (waktu_baru->tm_mon + 1 == 6) {
cout << "Juni";
} else if (waktu_baru->tm_mon + 1 == 7) {
cout << "Juli";
} else if (waktu_baru->tm_mon + 1 == 8) {
cout << "Agustus";
} else if (waktu_baru->tm_mon + 1 == 9) {
cout << "September";
} else if (waktu_baru->tm_mon + 1 == 10) {
cout << "Oktober";
} else if (waktu_baru->tm_mon + 1 == 11) {
cout << "November";
} else if (waktu_baru->tm_mon + 1 == 12) {
cout << "Desember";
}
       //<< waktu_baru->tm_mon + 1 
   cout << "-" << waktu_baru->tm_year + 1900<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	        cout<<" pemasukan	: ";cin>>a3[d];
		}
        cout<<" Keterangan	: ";cin>>keterangan[d];
        tsa+=a3[d];
    }
     //input pengeluaran
    cout<<"-------------------------------------------------------"<<endl;
    printf(" Masukan Jumlah Data Pengeluaran Hari ke %d	 : ", d);cin>>ket2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ;
    cout<<"-------------------------------------------------------"<<endl;
        for (b=1; b<=ket2; b++){
        cout<<" Nilai pengeluaran	: ";cin>>a4[d];
        while (a4[d] < minimal){
		    system("cls");
		    cout<<"-----------------------------------------------------------------------------"<<endl;
        	cout<<"!!  input yang Anda masukan tidak valid, tolong masukan bilangan positif   !!"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
        	system("pause");
        	system("cls");
		    cout<<"#######################################################"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
			cout<<"######             Catatan Keuangan              ######"<<endl;
			cout<<"######                                           ######"<<endl;
			cout<<"#######################################################"<<endl;
		  	cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<" Sampai ";
			      // Menampilkan hasil
  if(indeks==1){
  cout<<"Minggu";
}
  else if(indeks==2){
  cout<<"Senin";
}
  else if(indeks==3){
  cout<<"Selasa";
}
  else if(indeks==4){
  cout<<"Rabu";
}
  else if(indeks==5){
  cout<<"Kamis";
}
  else if(indeks==6){
  cout<<"Jumat";
}
  else if(indeks==0){
  cout<<"Sabtu";
}
else{
	cout<<"input hari tidak valid";
}
    cout<<"/"<< waktu_baru->tm_mday << "-";
    
if (waktu_baru->tm_mon + 1 == 1) {
cout << "Januari";
} else if (waktu_baru->tm_mon + 1 == 2) {
cout << "Februari";
} else if (waktu_baru->tm_mon + 1 == 3) {
cout << "Maret";
} else if (waktu_baru->tm_mon + 1 == 4) {
cout << "April";
} else if (waktu_baru->tm_mon + 1 == 5) {
cout << "Mei";
} else if (waktu_baru->tm_mon + 1 == 6) {
cout << "Juni";
} else if (waktu_baru->tm_mon + 1 == 7) {
cout << "Juli";
} else if (waktu_baru->tm_mon + 1 == 8) {
cout << "Agustus";
} else if (waktu_baru->tm_mon + 1 == 9) {
cout << "September";
} else if (waktu_baru->tm_mon + 1 == 10) {
cout << "Oktober";
} else if (waktu_baru->tm_mon + 1 == 11) {
cout << "November";
} else if (waktu_baru->tm_mon + 1 == 12) {
cout << "Desember";
}
       //<< waktu_baru->tm_mon + 1 
   cout << "-" << waktu_baru->tm_year + 1900<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	        cout<<" pengeluaran	: ";cin>>a4[d];
		}
        cout<<" Keterangan	: ";cin>>keterangann[d];
		tsb+=a4[d];  
    }
    system("cls");
    //output data
    total=tsa-tsb;
    //hasil nya
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Total Pemasukan    : ";cout<<tsa<<endl;
    cout<<" Total Pengeluaran  : ";cout<<tsb<<endl;
    cout<<" Selisih            : ";cout<<total<<endl;
	if (total>0){
		cout<<" bagus "<<nm; cout<<" sudah hebat"<<endl;
	}                                                            
	else if (total<0){
		cout<<" semangat!! "<<nm; cout<<" harus belajar berhemat dan manajemen uang!! "<<endl;
	} 
	else{
		cout<<" mohon tingkatkan lagi, "<<nm; cout<<" harus berhemat!!"<<endl;
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;
    cout<<"-------------------------------------------------------"<<endl;
	} //end perulangan for
	
    int res3 = s3(a3, y, x);			//sequent pemasukan
   	if (res3 != -1){
		cout<<"pemasukan 0 ditemukan di hari ke: "<<res3<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	}else {
		cout<<" "<<endl;
	}

	int res4 = s4(a4 , y2, x);		//sequent pengeluaran
   	if (res4 != -1){
		cout<<"Pengeluaran 0 ditemukan di hari ke: "<<res4<<endl;
		    cout<<"-------------------------------------------------------"<<endl;
	}else {
		cout<<" "<<endl;
	}
	cout<<"contoh: laporan.txt | laporan.csv"<<endl;
    cout<<"Masukan Nama File: ";
    cin>>file;
    outdata3.open(file, ios::app);
    outdata3<<endl;
    outdata3<<"-------------------------------------------------------"<<endl;
    outdata3<<"						Menu Bulanan						"<<endl;
    outdata3<<"-------------------------------------------------------"<<endl;
    outdata3<<" Nama: "<<nm<<endl;
    outdata3<<" Date: " <<hari<<"/"<<tanggal<<"-";
  if(bulan==1){
  outdata3<<"Januari";
}
  else if(bulan==2){
  outdata3<<"Februari";
}
  else if(bulan==3){
  outdata3<<"Maret";
}
  else if(bulan==4){
  outdata3<<"April";
}
  else if(bulan==5){
  outdata3<<"Mei";
}
  else if(bulan==6){
  outdata3<<"Juni";
}
  else if(bulan==7){
  outdata3<<"Juli";
}
  else if (bulan==8){
  outdata3<<"Agustus";
}
  else if (bulan==9){
  outdata3<<"September";
}
  else if (bulan==10){
  outdata3<<"Oktober";
}
  else if (bulan==11){
  outdata3<<"November";
}
  else if (bulan==12){
  outdata3<<"Desember";
}
else{
	outdata3<<"input bulan tidak valid";
}
	outdata3<<"-"<<tahun<<" Sampai ";
      // Menampilkan hasil
  if(indeks==1){
  outdata3<<"Minggu";
}
  else if(indeks==2){
  outdata3<<"Senin";
}
  else if(indeks==3){
  outdata3<<"Selasa";
}
  else if(indeks==4){
  outdata3<<"Rabu";
}
  else if(indeks==5){
  outdata3<<"Kamis";
}
  else if(indeks==6){
  outdata3<<"Jumat";
}
  else if(indeks==0){
  outdata3<<"Sabtu";
}
else{
outdata3<<"input hari tidak valid";
}
    outdata3<<"/"<< waktu_baru->tm_mday << "-";
    
if (waktu_baru->tm_mon + 1 == 1) {
outdata3<< "Januari";
} else if (waktu_baru->tm_mon + 1 == 2) {
outdata3<< "Februari";
} else if (waktu_baru->tm_mon + 1 == 3) {
outdata3<< "Maret";
} else if (waktu_baru->tm_mon + 1 == 4) {
outdata3<< "April";
} else if (waktu_baru->tm_mon + 1 == 5) {
outdata3<< "Mei";
} else if (waktu_baru->tm_mon + 1 == 6) {
outdata3<< "Juni";
} else if (waktu_baru->tm_mon + 1 == 7) {
outdata3<< "Juli";
} else if (waktu_baru->tm_mon + 1 == 8) {
outdata3<< "Agustus";
} else if (waktu_baru->tm_mon + 1 == 9) {
outdata3<< "September";
} else if (waktu_baru->tm_mon + 1 == 10) {
outdata3<< "Oktober";
} else if (waktu_baru->tm_mon + 1 == 11) {
outdata3<< "November";
} else if (waktu_baru->tm_mon + 1 == 12) {
outdata3<< "Desember";
}
       //<< waktu_baru->tm_mon + 1 
    outdata3<< "-" << waktu_baru->tm_year + 1900 << endl;
    outdata3<<"-------------------------------------------------------"<<endl;
	outdata3<<" Total pemasukan: "<<tsa<<endl;
	outdata3<<" Total Pengeluaran: "<<tsb<<endl;
	outdata3<<" Selisih: "<<total<<endl;
	if (total>0){
		outdata3<<" bagus "<<nm<<" sudah hebat"<<endl;
	}                                                            
	else if (total<0){
		outdata3<<" semangat!! "<<nm<<" harus belajar berhemat dan manajemen uang!! "<<endl;
	} 
	else{
		outdata3<<" mohon tingkatkan lagi, "<<nm<<" harus berhemat!!"<<endl;
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;
    outdata3<<"-------------------------------------------------------"<<endl;
	cout<<"data berhasil disimpan!"<<endl;
} //end fungsi menu3

int main(){
	i = 1;															//looping
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######             Login di Aplikasi             ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;	   
//perulangan login
do{        
       cout << " Username: "; cin>>user;        
       cout << " Password: "; cin>>pass;        
       if (user == username && pass == password) {    
	       system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;	   
    cout<<" Nama : ";
    cin.ignore();
    getline(cin, nm);
//perulangan menu
do {
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;	   
    cout<<"1. skala harian"<<endl;
    cout<<"2. skala mingguan"<<endl;
    cout<<"3. skala bulanan"<<endl;
    cout<<"masukan menu: ";
    cin>>menu;
    //switch case
    switch (menu) {	
    //for (menu=0; menu>=3; menu++)
    case '1': //menu 1
    system("cls");
    menu1();
	printf("lanjut atau tidak? (y/t): ");
        cin>>ulangi;
	break;
	case '2': //menu 2
    //pemilihan waktu (hari,tanggal,bulan,tahun)
    system("cls");
    menu2();
          printf("lanjut atau tidak? (y/t): ");
        cin>>ulangi;
    break;
    case '3': // menu 3
	system("cls");
    menu_3();
          printf("lanjut atau tidak? (y/t): ");
        cin>>ulangi;
    break;
    default :
    	cout<<"Maaf input yang Anda masukan keliru"<<endl;
    }
        // increment counter
        counter++;
} while(ulangi == 'y' || ulangi == 'Y');
    printf("\n\n----------\n");
    printf("Data Berhasil di simpan!\n");
    printf("File data anda berada di folder yang sama dengan file aplikasi ini\n", counter);
    i = 4;
           login = "berhasil";        } 
       else {
	       system("cls");            
           cout<<"#################################################"<<endl;            
           cout<<"#      Username atau Password salah!! ("<<i<<"x)      #"<<endl;
           cout<<"#################################################"<<endl;           
           i = i +1; 
       }
} while (i <= 3);
    if(login != "berhasil"){
       cout<<" "<<endl;     
	   for (int i = 15; i >= 1; i--) {
	system("cls");
    cout<<"Kamu sudah login lebih dari 3x"<<endl;       
    cout<<"Silahkan coba lagi tunggu beberapa saat: "<<i<<endl;
    this_thread::sleep_for(chrono::seconds(1));
  } 
      system("cls");
      main();
	}   
    return 0;
}
