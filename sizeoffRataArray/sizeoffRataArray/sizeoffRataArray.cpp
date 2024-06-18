// sizeoffRataArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ratav(float a,float b){
   float k=a/b;  
   cout<<"\nMean 2 :"<<k;
}


int main() {
    // membuat array kosong
    int i, p,sum;
    int nilai[] = { 23,45,21,45,11,99 };
    float rata;
    // mengisi array
    // nilai[0] = 32;
    // nilai[1] = 42;
    // nilai[2] = 76;
    // nilai[3] = 31;
    // nilai[4] = 57;

    p = sizeof(nilai) / sizeof(nilai[0]);
    // mencetak isi array dengan perulangan
    for (int i = 0; i < p; i++) {
        cout << "Nilai ke-" << i << " :" << nilai[i] << endl;
    }
    cout << "\npanjang data :" << p;

    for (int i = 0; i < p; i++) {
        sum += nilai[i];
    }
    cout << "\nJumlah :" << sum;
    rata = (float)sum / (float)p;
    cout << "\nMean :" << rata;

    ratav(sum,p);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
