#include <iostream>
#include <windows.h> //untuk system cls
using namespace std;
int main(){
    char keterangan[100][100], keterangann[100][100];				                        //array keterangan
    double pemasukan,pengeluaran;									//input pemasukan dan pengeluaran
    int a,b,i,ket1,ket2,menu;										//looping
    double total,tsa,tsb;										//selisih, total pemasukan, total pengeluaran
    char ulangi = 'y';										        //looping do while
    int counter = 0;											//looping do while
    string pass, user;											//input user dan password
    string username ="daspro";										//username
    string password = "daspro";										//password
    string login = "block";										//pembatasan login
	string nm;											//input nama
	i = 1;
    cout<<"#######################################################"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"######             Login di Aplikasi             ######"<<endl;
	cout<<"######             Catatan Keuangan              ######"<<endl;
	cout<<"######                                           ######"<<endl;
	cout<<"#######################################################"<<endl;
	cout<<" "<<endl;
//perulangan login
do{        
       cout << "Username: "; cin>>user;        
       cout << "Password: "; cin>>pass;        
       if (user == username && pass == password) {    
	       system("cls");	   
    cout<<" Nama Depan : ";
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
    cout<<"----------------------------------------"<<endl;
    cout<<"1. skala harian"<<endl;
    cout<<"2. skala mingguan"<<endl;
    cout<<"3. skala bulanan"<<endl;
    cout<<"masukan menu: ";
    cin>>menu;
    //switch case
    switch (menu) {	
    for (menu=0; menu>=5; menu++)
    case 1 : 
    //input pemasukan
     cout<<"----------------------------------------"<<endl;
     cout<<" Masukan Jumlah Pemasukan Hari Ini	: ";cin>>ket1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
     cout<<"----------------------------------------"<<endl;
        for (a=1; a<=ket1; a++){
        cout<<" pemasukan	: ";cin>>pemasukan;
        cout<<" Keterangan	: ";cin>>keterangan[a];
        //tsa+=pemasukan;
    }
     //input pengeluaran
     cout<<"----------------------------------------"<<endl;
     cout<<" Masukan Jumlah Pengeluaran Hari Ini	 : ";cin>>ket2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
     cout<<"----------------------------------------"<<endl;
        for (b=1; b<=ket2; b++){
        cout<<" pengeluaran	: ";cin>>pengeluaran;
        cout<<" Keterangan	: ";cin>>keterangann[b];
        //tsb+=pengeluaran;   
    }
    system("cls");
    //output data
    //total=tsa-tsb;
    total=pemasukan-pengeluaran;
    cout<<" history keterangan "<<endl;
		//output pemasukan
    for (a=1; a<=ket1; a++){
    	cout<<"----------------------------------------"<<endl;
        cout<<" keterangan   : "<<keterangan[a]<<endl;
        cout<<endl;
        }
        //output pengeluaran
    for (b=1; b<=ket2; b++){
        cout<<endl<<" keterangan   : "<<keterangann[b]<<endl;
        cout<<endl;
        }
    //hasil nya
    cout<<"----------------------------------------"<<endl;
    cout<<" Total Pemasukan    : ";cout<<pemasukan<<endl;
    cout<<" Total Pengeluaran  : ";cout<<pengeluaran<<endl;
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
    cout<<"----------------------------------------"<<endl;
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
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
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
