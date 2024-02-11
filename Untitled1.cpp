#include <iostream>
#include <fstream>
using namespace std;
void bukaTulisIsiFile(char nFile[]);
void tambahIsiFile(char nFile[], char isi[]);
void periksaFile(char nFile[]);
void cetakIsiFilePerKarakter(char nFile[]);
void isiFilePerKarakter(char nFile[]);
int cariJumlahHurufA(char nFile[]);
int main(){
 char namaFile[]="algoritma operasi file.txt";
 char isi[]="Motto : Hari esok harus lebih baik dari hari ini ";
 bukaTulisIsiFile(namaFile);
 tambahIsiFile(namaFile,isi);
 periksaFile(namaFile);
 // isiFilePerKarakter(namaFile);
 cetakIsiFilePerKarakter(namaFile);
  cout << "Jumlah huruf A = " <<cariJumlahHurufA(namaFile);
}
void bukaTulisIsiFile(char nFile[]){
 ofstream fileteks;
 fileteks.open(nFile);
 fileteks << "Selamat Datang Mahasiswa Informatika "<< endl;
 fileteks << "dalam Praktikum Algoritma dan Pemrograman"<< endl;
 fileteks << "Tahun Akademik 2022/2023" << endl;
 fileteks << "Selamat Belajar dan Semoga Sukses " << endl;
 fileteks.close();
}
void tambahIsiFile(char nFile[], char isi[]){
 ofstream fileteks;
 fileteks.open(nFile, ios::app);
 fileteks << endl;
 fileteks << "Oleh: nama_mahasiswa NPM"<< endl;
 fileteks << isi << endl;
 fileteks.close();
}
void periksaFile(char nFile[]){
 ifstream fileteks; // u/ membaca file
 fileteks.open(nFile);
 if (fileteks.fail())
 cout<< "File tak dapat dibuka / tidak ditemukan";
 else
 cout << "File ditemukan " << endl;
 fileteks.close();
}
void isiFilePerKarakter(char nFile[]){
 ofstream fileteks;
 fileteks.open(nFile);
 fileteks.put('A');
 fileteks.put('B');
 fileteks.put('C');
 fileteks.close();
}
void cetakIsiFilePerKarakter(char nFile[]){
 char karakter;
 ifstream fileteks;
 fileteks.open(nFile);
 while(!fileteks.eof()) {
 fileteks.get(karakter);
 cout << karakter;
 }
 fileteks.close();
}
int cariJumlahHurufA(char nFile[]){
 char karakter;
 int jumlahA=0;
 ifstream fileteks;
 fileteks.open(nFile);
 while(!fileteks.eof()) {
 fileteks.get(karakter);
 if (karakter == 'A' || karakter == 'a')
 jumlahA=jumlahA+1;
 }
 fileteks.close();
 return jumlahA;
}
