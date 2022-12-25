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
	cout << "Berikut Tampilan Data yang Tidak Habis Dibagi 3, 5, dan 7 : ";
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
