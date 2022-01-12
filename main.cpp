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

void insertion_sort1(string arr1[], int length){
    int i, j;
    string temp;
    
    for(i=0; i<length; i++){
        j=1;
        
        while(j>0 && arr1[j-1] > arr1[j]){
            temp = arr1[j];
            arr1[j] = arr1[j-1];
            arr1[j-1] = temp;
            j--;
        }
    }
}

void bubble_sort1(string arr1[], int length){
    bool not_sorted = true;
    int i, j = 0;
    string temp;

    while(not_sorted){
        not_sorted = false;
        j++;
        
        for(i=0; i<length-1; i++){
            if(arr1[i] < arr1[i+1]){
                temp = arr1[i];
                arr1[i] = arr1[i+1];
                arr1[i+1] = temp;
                not_sorted = true;
            }
        }
    }
}

void print_array1(string arr1[], int length){
    for(int i=0; i<length; i++){
        cout << arr1[i] << "  ";
    }
    cout << endl;
}

void insertion_sort2(double arr2[], int length){
    int i, j;
    double temp;

    for(i=1; i<length; i++){
        j=i;

        while(j>0 && arr2[j-1] > arr2[j]){
            temp = arr2[j];
            arr2[j] = arr2[j-1];
            arr2[j-1] = temp;
            j--;
        }
    }
}

void selection_sort2(double arr2[], int length){
    int pos;
    double temp;
    for(int i=0; i<length-1; i++){
        pos = i;
        for(int j=i+1; j<length; j++){
            if(arr2[j] > arr2[pos])
                pos = j;
        }
        if(pos != i){
            temp = arr2[i];
            arr2[i] = arr2[pos];
            arr2[pos] = temp;
        }
    }
}

void print_array2(double arr2[], int length){
    for(int i=0; i<length; i++){
        cout << arr2[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int pilih;
    menu();
    cout << "Masukkan Pilihan Anda (1-7): "; cin >> pilih;
    cout << endl;
    
    if(pilih == 1){
        
    }else if (pilih == 2){
        
    }else if (pilih == 3){
        
    }else if (pilih == 4){
        
    }else if (pilih == 5){
        int length, pilihan;
        string arr1[100], karakter;
        double arr2[100], angka;
        int i;

        cout << "====== Sorting ======" << endl;
        cout << "1. Nama" << endl;
        cout << "2. Angka" << endl;
        cout << "Masukkan Pilihan : "; cin >> pilihan;
        cout << endl;

        switch(pilihan){
            case 1:
                {
                cout << "1. Nama" << endl;
                cout << "   Berapa nama yang ingin di input : "; cin >> length;

                for(i=0; i<length; i++){
                    cout << "   Nama ke-" << i+1 << " : "; cin >> arr1[i];
                    arr1[length] = karakter;
                }
                cout << endl;

                cout << "   Urutan nama sebelum di sorting:" << endl;
                cout << "   ";
                print_array1(arr1, length);
                insertion_sort1(arr1, length);
                cout << endl;
                cout << "   Uruturan nama setelah ascending sort:" << endl;
                cout << "   ";
                print_array1(arr1, length);
                cout << endl;
                cout << "   Uruturan nama setelah descending sort:" << endl;
                bubble_sort1(arr1, length);
                cout << "   ";
                print_array1(arr1, length);
                break;
                }
            case 2:
                {
                cout << "2. Angka" << endl;
                cout << "   Berapa angka yang ingin di input : "; cin >> length;

                for(i=0; i<length; i++){
                    cout << "   Angka ke-" << i+1 << " : "; cin >> arr2[i];
                    arr2[length] = angka;
                }
                cout << endl;

                cout << "   Urutan angka sebelum di sorting:" << endl;
                cout << "   ";
                print_array2(arr2, length);
                insertion_sort2(arr2, length);
                cout << endl;
                cout << "   Uruturan angka setelah ascending sort:" << endl;
                cout << "   ";
                print_array2(arr2, length);
                cout << endl;
                cout << "   Uruturan angka setelah descending sort:" << endl;
                cout << "   ";
                selection_sort2(arr2, length);
                print_array2(arr2, length);
                break;
                }
            default:
                {
                cout << "Masukkan pilihan yang ada pada menu" << endl;
                }
        }
    }else if (pilih == 6){
        
    }else if (pilih == 7){
        
    }else{
        cout << "Masukkan pilihan yang ada pada menu" << endl;
    }
    return 0;
}
