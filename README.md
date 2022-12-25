# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemrograman
<br>Nama		: Denis Firmansyah
<br>NIM		:	1227050034
<br>Jurusan		: [Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Pada kesempatan ini kita akan membahas source code untuk membuat array dalam implementasi deret aritmatika menggunakan bahasa C++.<br>
Tujuan utama dari bahasan kali ini adalah untuk mencari bilangan hasil input yang tidak habis dibagi oleh angka 3, 5 atau 7.</br>
Algoritma dari Source code ini yaitu : <br>
<ol>
<li>User menginputkan berapa banyak baris pada array dengan range 0-20.</li>
<li>User menginputkan berapa banyak kolom pada array dengan range 0-20.</li>
<li>User menginputkan satu persatu nilai array yang ingin dicek, dimulai dari baris dan kolom pertama [1]:[1].</li>
<li>Setelah semua terisi, nilai dalam array tersebut ditampilkan sesuai aturan matriks.</li>
<li>Kemudian nilai input tersebut akan divalidasi apakah dapat dibagi oleh 3, 5 atau 7, atau tidak.</li>
<li>Setelahnya akan ditampilkan kembali nilai yang tidak habis dibagi oleh 3, 5 atau 7.</li>
</ol>

## Source Code
```shell
#include <iostream>
#include <iomanip>
using namespace std;

void garis(){
	cout << "______________________________________" << endl << endl;
}

int main(){
	int baris,kolom,i,j;
	
	baris :
	cout << "Masukkan Jumlah Baris (Maksimal 20): ";
	cin >> baris;
	if (baris>20){
		cout << "Baris Terlalu Banyak!" << endl << endl;
		goto baris;
	}
	cout << endl;
	kolom :
	cout << "Masukkan Jumlah Kolom (Maksimal 20): ";
	cin >> kolom;
	if (kolom>20){
		cout << "Kolom Terlalu Banyak!" << endl << endl;
		goto kolom;
	}
	cout << endl;
	garis();

	int a[20][20];
	
	cout << "Masukkan Nilai Pada Array!" << endl;
	garis();
	for (i = 1; i <= baris; i++){
		for (j = 1; j <= kolom; j++){
			cout << "Nilai baris ke-" << i << " kolom ke-" << j << ": ";
			cin >> a[i][j];
		}
		garis();
	}
	
	cout << "Tampilan Nilai yang Telah Diinput: " << endl;
	for (i = 1; i <= baris; i++){
		for (j = 1; j <= kolom; j++){
			cout << setw(3) << a[i][j] << " ";
		}
		cout << endl;
	}
	
	garis();
	
	int hasil[i * j];
	int k = 0;
	cout << "Berikut Tampilan Data yang Tidak Habis Dibagi 3, 5, atau 7 : ";
	for (i = 1; i <= baris; i++){
		for (j = 1; j <= kolom; j++){
			if (a[i][j]%3 != 0 && a[i][j]%5 != 0 && a[i][j]%7 !=0){
			hasil[k] = a[i][j];
			k++;
			}
		}
	}
	
	for (i = 0; i < k; i++){
		cout << hasil[i];
		if (i < k-1){
			cout << ", ";
		}
		else{
			cout << ".";
		}
	}
	cout << endl;
}
```

## Output
![Deret Matematika](https://user-images.githubusercontent.com/121292416/209460717-b26f6f48-8c35-4e05-8b6f-55400290e5c2.png)
