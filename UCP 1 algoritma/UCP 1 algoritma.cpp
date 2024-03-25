//1.sorting data menggunakan bubble sort memiliki pass(langkah) tergantung data yang ada
//misal data yang dimiliki adalah 5 maka langkah yang harus dilakukan adalah n(jumlah data)-1 = 4 langkah
//bubble sort membandingkan data dengan data disampinya
//cara menukar posisi mereka dengan menambahkan variabel baru untuk membantu proses pertukaran 
//pada langkah pertama bandingkan data yang ada, contoh bandingkan data pada index 0 dengan data pada index ke-1
//jika data di index 0>index 1 maka tukar posisi mereka 
//lanjut membandingkan data pada index 1 dengan data index 2
//jika data di index 1< data di index 2 maka mereka tetap pada posisi masing-masing
//ulang proses tersebut sampai data telah dibandingkan semua
//jika pass<= n -1, teruskan ke langkah berikutnya
//sorting by bubble sort ini mengurutkan data dari yang terbesar ke terkecil(dari arah belakang)

//2.shell sort merupakan bentuk sorting untuk data kecil tetapi bisa digunakan untuk data banyak dengan menggunakan hak istimewa dari insertion sort
// menukar data dengan cara memisahkan data-data yang ada menjadi 3 bagian
//kemudian tiga bagian tersebut diurutkan secara terpisah dengan menggunakan metode insertion sort
//setelah diurutkan gabung kembali data-data yang terpisah
//setelah itu pisahkan kembali data menjadi 2 bagian, lalu urutkan
//jika telah urut maka gabungkan kembali data yang terpisah
//lalu urutkan semua data agar terusun 

//3.menggunakan insertion sort karena karena insertion sort adalah jenis sortir yang memiliki efisiensi yang lebih baik dari metode-metode sebelumnya


#include <iostream>
using namespace std;

int syaf[94];
int n;

void input()
{

    while (true)
    {

        cout << "masukan banyaknya elemen pada array : ";
        cin >> n;

        if ( n <= 94)
        {
            break;
        }
        else 
        {
            cout << "\narray dapat mempunyai maksimal 20 elemen.\n" << endl;
        }
    }

    cout << endl;
    cout << "=======================" << endl;
    cout << "masukan elemen array : " << endl;
    cout << "=======================" << endl;

    for ( int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> syaf[i];
    }
}

void selectionsort()
{
    int j, i;
    int min_index = 0;

    for (syaf[j];  syaf[n - 1];)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (syaf[j] > syaf[min_index])
            {
                syaf[min_index] = syaf[j + 1];
                syaf[j + 1] = syaf[j];
            }
        }
    }
}


void display()
{
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << "data ke-" << j + 1 << ":";
        cout << syaf[j] << endl;
    }
    cout << endl;
}
int main()
{
    input();
    selectionsort();
    display();
    return 0;
    
}

