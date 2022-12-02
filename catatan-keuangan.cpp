#include <iostream>
#include <iomanip>
#include <fstream> 									//untuk mengeluarkan output program ke file lain
#include <string>
#include <windows.h>									//untuk system cls
using namespace std;
int main(){
	ofstream outdata;								//untuk save ke exel
	char keterangan[100][100], keterangann[100][100];				//array keterangan
    int pemasukan,pengeluaran;				 				//input pemasukan dan pengeluaran
    int a,b,i,ket1,ket2,menu,n=1;							//looping
    int total,tsa=0,tsb=0;								//selisih, total pemasukan, total pengeluaran
    char ulangi = 'y';									//looping do while
    int counter = 0;									//looping do while
    string pass, user;									//input user dan password
	string username ="daspro";							//username
    string password = "daspro";								//password
    string login = "block";								//pembatasan login
	string nm;									//input nama
	string file;									//input nama file untuk di save
	i = 1;										//looping
	string hari;									//hari
	int tanggal,bulan,tahun;							//date
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
    case 1 : 
    system("cls");
    //pemilihan waktu (hari,tanggal,bulan,tahun)
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"                   (Contoh: selasa)                    "<<endl;
    cout<<" Masukan hari: ";cin>>hari;
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;	   
    cout<<"                      (Contoh: 21)                     "<<endl;
    cout<<" Masukan tanggal: ";cin>>tanggal;
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;	   
    cout<<"                      (Contoh: 10)                     "<<endl;
    cout<<" Masukan bulan: ";cin>>bulan;
    system("cls");
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######        Selamat Datang di Aplikasi         ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
    cout<<"-------------------------------------------------------"<<endl;	   
    cout<<"                    (Contoh: 2003)                     "<<endl;
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
    //save file
    cout<<"contoh: laporan.txt | laporan.csv"<<endl;
    cout<<"Masukan Nama File: ";
    cin>>file;
    outdata.open(file, ios::app);
    outdata<<"Nama: "<<nm<<endl;
    outdata<<"Date: "<<hari<<","<<tanggal<<"-"<<bulan<<"-"<<tahun<<endl;
    outdata<<"-------------------------------------------------------"<<endl;
	outdata<<"Total pemasukan: "<<tsa<<endl;
	outdata<<"Total Pengeluaran: "<<tsb<<endl;
	outdata<<"Selisih: "<<total<<endl;
	cout<<"data berhasil disimpan!"<<endl;
	printf("lanjut atau tidak? (y/t): ");
        cin>>ulangi;
	break;
	case 2 : 
    cout<<"--------------Coming Soon------------"<<endl;
          printf("lanjut atau tidak? (y/t): ");
        cin>>ulangi;
    break;
    case 3 : 
    cout<<"--------------Coming Soon------------"<<endl;
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
       cout<<"Silahkan coba 9999999 tahun lagi untuk login, hehe canda!"<<endl;      
	}   
    return 0;
}
