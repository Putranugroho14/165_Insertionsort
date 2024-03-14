#include <iostream>
using namespace std;

int arr[20];     //Membuat Array dengan panjang data 20
int n;           //Membuat Variable inputan n

void input() {   // Procedure untuk input
	while (true)
	{  
		cout << "Masukan Jumlah Data pada array : ";  // Membuat inputan jumlah elemen Array 
		cin >> n;                                     // Memanggil variable inputan n

		if (n <= 20) {                                // Mmebuat Kondisi n tidak lebih dari 20
			break;
		}
		else 
		{    
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";   // Menampilkan Pesan jika data lebih dari 20 
		}
	}
	cout << endl;                                // Membuat jarak per baris program
	cout << "====================" << endl;      // Membuat tampilan susunan data element Array
	cout << "Masukan Elemen Array" << endl;     
	cout << "====================" << endl;     

	for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada Array
	{    
		cout << "Data ke-" << (i + 1) << " : ";  // Memasukan nilai data n
		cin >> arr[i];          // Menyimpan nilai data n kedalam array arr
	}
}


int main()
{
    
}
