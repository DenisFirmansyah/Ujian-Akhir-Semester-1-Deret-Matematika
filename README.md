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
using namespace std;

void garis (){
	cout << "_________________________" << endl;
}

int main (){
	int baris, kolom, i, j;
	int a[20][20];
	
	cout << "Masukkan Jumlah Baris: ";
	cin >> baris;
	cout << "Masukkan Jumlah Kolom: ";
	cin >> kolom;
	garis ();
	cout<<endl;
	
	for (i = 1; i <= baris; i++){
		for (j = 1; j <= kolom; j++){
			cout << "Masukkan Index baris ke " << i << " kolom ke " << j << ": ";
			cin >> a[i][j];
		}
	}
	garis();
	
	cout << endl << "Tampilan Data: " << endl << endl;
	for(i = 1; i <= baris; i++){
		for(j = 1; j <= kolom; j++){
			cout << " " << a[i][j];
		}
		cout << endl;
	}
	garis();
	
	cout << endl << "Tampilan Data Baris dan Kolom Dibalik: " << endl << endl;
	for(i = 1; i <= kolom; i++){
		for(j = 1; j <= baris; j++){
			cout << " " << a[j][i];
		}
		cout << endl;
	}
}
```

## Output
![Deret Matematika](https://user-images.githubusercontent.com/121292416/209460717-b26f6f48-8c35-4e05-8b6f-55400290e5c2.png)
