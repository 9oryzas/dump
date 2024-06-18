// tipeEnum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void display();

enum Role { USER, ADMIN };

Role stringToRole(const string& roleStr) {
    if (roleStr == "ADMIN") {
        return ADMIN;
    }
    else {
        return USER;
    }
}

int main() {
    string name, rolex;
    cout << "Masukkan Nama :";
    cin >> name;
    cout << "Tersedia role \n";
    display();

    cout << "Masukkan Role :";
    cin >> rolex;

    Role userRole = stringToRole(rolex);

    if (userRole == ADMIN) {
        cout << "Hallo min " << name << endl;
    }
    else {
        cout << "Haloo " << name << endl;
    }
    return 0;
}

void display() {
    cout << "===============================+\n";
    cout << "| 1. |   ADMIN                 |\n";
    cout << "| 2. |   USER                  |\n";
    cout << "===============================+\n";
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
