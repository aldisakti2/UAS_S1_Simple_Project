#include <iostream>

using namespace std;

void menu(){
    cout << "================================\n";
    cout << "======== MENU MODUL C++ ========\n";
    cout << "================================\n" << endl;
    cout << "1. Input dan Output\n";
    cout << "2. Percabangan\n";
    cout << "3. Perulangan\n";
    cout << "4. Array\n";
    cout << "5. Sorting\n";
    cout << "6. Searching\n";
    cout << "7. Rekursif\n\n";
}

int main()
{
    int pilih;
    menu();
    cout << "Masukkan Pilihan Anda (1-7): "; cin >> pilih;
    return 0;
}
