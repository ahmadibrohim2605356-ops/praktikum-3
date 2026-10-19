#include <iostream>
using namespace std;

int main() {
    
    cout << "====================================\n";
    cout << "    Rata-Rata suhu harian          \n";
    cout << "====================================\n";

    
    float suhu[5];
    float total = 0; 

    
    cout << "suhu hari ke 1 :";
    cin >> suhu[0];

    cout << "suhu hari ke 2 :";
    cin >> suhu[1];

    cout << "suhu hari ke 3 :";
    cin >> suhu[2];

    cout << "suhu hari ke 4 :";
    cin >> suhu[3];

    cout << "suhu hari ke 5 :";
    cin >> suhu[4];
    
    total = suhu[0] + suhu[1] + suhu[2] + suhu[3] + suhu[4];

    float rata_rata_suhu_harian = total / 5;

    cout << "------------------------------------\n";
    cout << "Rata-rata suhu harian : " << rata_rata_suhu_harian << endl;

    
    if (rata_rata_suhu_harian > 30) {
        cout << "Kategori            : Panas\n";
    } else if (rata_rata_suhu_harian >= 20) {
        cout << "Kategori            : Normal\n";
    } else {
        cout << "Kategori            : Dingin\n";
    }
    cout << "====================================\n";

    return 0;
}