#include <iostream>
#include <iomanip>													//manipulator
#include <fstream> 													//untuk mengeluarkan output program ke file lain
#include <string>													//string
#include <windows.h>												//untuk system cls
using namespace std;

//Kekurangan: 1. Belum bisa menambahkan getline() pada keterangan
//			  2. Belum bisa menambahkan double save, jadi hanya bisa save 1x untuk satu program, ketika udah save trs mengulang program lagi menggunakan dowhile, data ga ke save
//			  3. Masih terjadi error jika merubah int ke float/double pada jenis tipe data dari input pemasukan pengeluaran

	ofstream outdata,outdata2,outdata3;								//untuk save ke exel
	char keterangan[100][100], keterangann[100][100];				//array keterangan
    int pemasukan,pengeluaran;				 						//input pemasukan dan pengeluaran
    int a,b,i,c,d,ket1,ket2,menu3,menu,n=1;							//looping
    int total,tsa=0,tsb=0;											//selisih, total pemasukan, total pengeluaran
    char ulangi = 'y';												//looping do while
    int counter = 0;												//looping do while
    string pass, user;												//input user dan password
	string username ="daspro";										//username
    string password = "daspro";										//password
    string login = "block";											//pembatasan login
	string nm;														//input nama
	string file;													//input nama file untuk di save
	string hari,hari2;												//hari
	int tanggal,tanggal2,bulan,bulan2,tahun,tahun2;					//date

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
    cout<<"            Contoh: (Rabu) (21) (12) (2022)          "<<endl;
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
    cout<<" Masukan Jumlah Pemasukan Hari Ini	: ";cin>>ket1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
        for (a=1; a<=ket1; a++){
        cout<<" pemasukan	: ";cin>>pemasukan;
        cout<<" Keterangan	: ";cin>>keterangan[a];
        tsa+=pemasukan;
    }
     //input pengeluaran
    cout<<"-------------------------------------------------------"<<endl;
     cout<<" Masukan Jumlah Pengeluaran Hari Ini	 : ";cin>>ket2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
        for (b=1; b<=ket2; b++){
        cout<<" pengeluaran	: ";cin>>pengeluaran;
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
    
	if (ket1 < 1){
		cout<<" transaksi kosong ditemukan !! "<<endl;
	}
		else if(ket2 < 1){
		cout<<" transaksi kosong ditemukan !! "<<endl;
	}
	    else if(pemasukan < 1){
		cout<<" transaksi kosong ditemukan !! "<<endl;
	}
	    else if(pengeluaran < 1){
		cout<<" transaksi kosong ditemukan !! "<<endl;
	}
	    else {
		cout<<" tidak ditemukan di transaksi yang kosong "<<endl;
	}
    
    //save file
    cout<<" contoh: laporan.txt | laporan.csv"<<endl;
    cout<<" Masukan Nama File: ";
    cin>>file;
    outdata.open(file, ios::app);
    outdata<<"-------------------------------------------------------"<<endl;
    outdata<<"Nama: "<<nm<<endl;
    outdata<<"Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<endl;
    outdata<<"-------------------------------------------------------"<<endl;
	outdata<<"Total pemasukan: "<<tsa<<endl;
	outdata<<"Total Pengeluaran: "<<tsb<<endl;
	outdata<<"Selisih: "<<total<<endl;
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
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"            Contoh: (Rabu) (21) (12) (2022)          "<<endl;
    cout<<" Masukan hari: ";cin>>hari;
    cout<<" Sampai hari: ";cin>>hari2;
    cout<<" Masukan tanggal: ";cin>>tanggal;
    cout<<" Sampai tanggal: ";cin>>tanggal2;
    cout<<" Masukan bulan: ";cin>>bulan;
    cout<<" Sampai bulan: ";cin>>bulan2;
    cout<<" Masukan tahun: ";cin>>tahun;
    cout<<" Sampai tahun: ";cin>>tahun2;
    //menu 2. mingguan
	for(int c=1; c<z; c++){
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    printf("\t Hari ke: %i\n", c);
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<" Sampai "<<hari2<<","<<tanggal2<<"-"<<bulan2<<"-"<<tahun2<<endl;
    //input pemasukan
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Masukan Jumlah Pemasukan Hari Ini	: ";cin>>ket1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
       for (a=1; a<=ket1; a++){
        cout<<" pemasukan	: ";cin>>arr[c];
        cout<<" Keterangan	: ";cin>>keterangan[c];
        tsa+=arr[c];
    }
     //input pengeluaran
    cout<<"-------------------------------------------------------"<<endl;
     cout<<" Masukan Jumlah Pengeluaran Hari Ini	 : ";cin>>ket2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
        for (b=1; b<=ket2; b++){
        cout<<" pengeluaran	: ";cin>>arr2[c];
        cout<<" Keterangan	: ";cin>>keterangann[c];
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
    outdata2<<"-------------------------------------------------------"<<endl;
    outdata2<<"Nama: "<<nm<<endl;
    outdata2<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<" Sampai "<<hari2<<","<<tanggal2<<"-"<<bulan2<<"-"<<tahun2<<endl;
    outdata2<<"-------------------------------------------------------"<<endl;
	outdata2<<"Total pemasukan: "<<tsa<<endl;
	outdata2<<"Total Pengeluaran: "<<tsb<<endl;
	outdata2<<"Selisih: "<<total<<endl;
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
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Jumlah hari dalam sebulan 30 atau 31 ?	: ";cin>>menu3                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ;
    cout<<"-------------------------------------------------------"<<endl;
    //pemilihan waktu (hari,tanggal,bulan,tahun)
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"            Contoh: (Rabu) (21) (12) (2022)          "<<endl;
    cout<<" Masukan hari: ";cin>>hari;
    cout<<" Sampai hari: ";cin>>hari2;
    cout<<" Masukan tanggal: ";cin>>tanggal;
    cout<<" Sampai tanggal: ";cin>>tanggal2;
    cout<<" Masukan bulan: ";cin>>bulan;
    cout<<" Sampai bulan: ";cin>>bulan2;
    cout<<" Masukan tahun: ";cin>>tahun;
    cout<<" Sampai tahun: ";cin>>tahun2;
	for(int d=1; d<=menu3; d++){
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    printf("\t Hari ke: %d \n", d);
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<" Sampai "<<hari2<<","<<tanggal2<<"-"<<bulan2<<"-"<<tahun2<<endl;
    //input pemasukan
    cout<<"-------------------------------------------------------"<<endl;
    cout<<" Masukan Jumlah Pemasukan Hari Ini	: ";cin>>ket1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
        for (a=1; a<=ket1; a++){
        cout<<" pemasukan	: ";cin>>a3[d];
        cout<<" Keterangan	: ";cin>>keterangan[d];
        tsa+=a3[d];
    }
     //input pengeluaran
    cout<<"-------------------------------------------------------"<<endl;
     cout<<" Masukan Jumlah Pengeluaran Hari Ini	 : ";cin>>ket2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"-------------------------------------------------------"<<endl;
        for (b=1; b<=ket2; b++){
        cout<<" pengeluaran	: ";cin>>a4[d];
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
    outdata3<<"-------------------------------------------------------"<<endl;
    outdata3<<"Nama: "<<nm<<endl;
    outdata3<<" Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<" Sampai "<<hari2<<","<<tanggal2<<"-"<<bulan2<<"-"<<tahun2<<endl;
    outdata3<<"-------------------------------------------------------"<<endl;
	outdata3<<"Total pemasukan: "<<tsa<<endl;
	outdata3<<"Total Pengeluaran: "<<tsb<<endl;
	outdata3<<"Selisih: "<<total<<endl;
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
    for (menu=0; menu>=5; menu++)
    case 1 : //menu 1
    system("cls");
    menu1();
	printf("lanjut atau tidak? (y/t): ");
        cin>>ulangi;
	break;
	case 2 : //menu 2
    //pemilihan waktu (hari,tanggal,bulan,tahun)
    system("cls");
    menu2();
          printf("lanjut atau tidak? (y/t): ");
        cin>>ulangi;
    break;
    case 3 : // menu 3
	system("cls");
    menu_3();
          printf("lanjut atau tidak? (y/t): ");
        cin>>ulangi;
    break;
    }
        // increment counter
        counter++;
} while(ulangi == 'y');
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
       cout<<"Kamu sudah login lebih dari 3x"<<endl;       
       cout<<"Silahkan coba lagi lain waktu untuk login"<<endl;      
	}   
    return 0;
}
