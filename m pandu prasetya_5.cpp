#include<iostream>
using namespace std;
int main()
{
int kehadiran, tugas, uts, uas, ntugas, nuts, nuas, NA, nkehadiran;
cout<<endl<<endl;

cout<<"Masukkan Kehadiran : "; cin>>kehadiran;
cout<<"Masukkan Nilai Tugas : "; cin>>tugas;
cout<<"Masukkan Nilai uts : "; cin>>uts;
cout<<"Masukkan Nilai uas : "; cin>>uas;

nkehadiran = kehadiran*10/100;
ntugas = tugas*20/100;
nuts = uts*30/100;
nuas = uas*40/100;
NA = nkehadiran+ntugas+nuts+nuas;

cout<<"nilai akhir"<<NA<<endl<<endl;

}