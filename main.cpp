#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

//PROSEDUR UNTUK KEMBALI KE MENU UTAMA
void back_to_menu(){
    cout << "\nTap any key to return to the menu...";
    getch();
    system("cls");
}

//UNTUK CASE 1
void case_1(){
    string nama, nim, jurusan, kelas, nomor, alamat;

    cout << "------------------------------------------\n";
    cout << "           Masukan Data Berikut           \n";
    cout << "------------------------------------------\n\n";

    cout << "Nama            : ";
    getline(cin >> ws,nama);

    cout << "NIM             : " ;
    cin >> nim;

    cout << "Jurusan         : ";
    getline(cin >> ws,jurusan);

    cout << "Kelas           : ";
    getline(cin >> ws,kelas);

    cout << "Alamat          : ";
    getline(cin >> ws,alamat);

    cout << "Nomor HP        : ";
    cin >> nomor;

    system("cls");
    cout <<endl;
    cout << "------------------------------------------"<<endl;
    cout << "              DATA MAHASISWA              "<<endl;
    cout << "------------------------------------------"<<endl;

    cout << "Nama       : " << nama << endl;
    cout << "NIM        : " << nim << endl;
    cout << "Jurusan    : " << jurusan << endl;
    cout << "Kelas      : " << kelas << endl;
    cout << "Alamat     : " << alamat << endl;
    cout << "Nomor HP   : " << nomor << endl;
}

//UNTUK CASE 5 SORTING

//SORTING BUBBLE SORT
void bubble_sort(string arr[], int length){
    bool not_sorted = true;
    int j=0;
    string tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

//SORTING SELECTION SORT 1
void selection_sort1(string arr[], int length){
    int pos;
    string temp;
    for(int i=0; i<length-1; i++){
        pos = i;
        for(int j=i+1; j<length; j++){
            if(arr[j] > arr[pos])
                pos = j;
        }
        if(pos != i){
            temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }
    }
}

//CETAK ISI ARRAY 1
void print_array1(string arr1[], int length){
    for(int i=0; i<length; i++){
        cout << arr1[i] << "  ";
    }
    cout << endl;
}

//SORTING INSERTION SORT 2
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

//SORTING SELECTION SORT 2
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

//CETAK ISI ARRAY 2
void print_array2(double arr2[], int length){
    for(int i=0; i<length; i++){
        cout << arr2[i] << "  ";
    }
    cout << endl;
}

//UNTUK CASE 6 : FUNGSI BINARY SEARCH DAN PROSEDUR BUBBLE SORT

//BINARY SEARCH
int case6_binary_search (double data[], int index, int n, double k) {
    n = n - 1;

    while (index <= n) {
        int tengah = (index + n)/2;

        if(k == data[tengah]) {
            index = tengah;
            return index;
        }

        else if(k < data[tengah]){ n = tengah - 1;}
        else if(k > data[tengah]){ index = tengah + 1;}
    }
    index = -1;
    return index;

}

//SORTING DATA SEBELUM KE BINARY SEARCH
void case6_bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

//UNTUK CASE 7 : FUNGSI FACTORIAL
int factorial(int n){
    if (n > 1){
        return n * factorial(n - 1);
    }
    else {
        return 1;
    }
}

//FUNGSI UTAMA
int main()
{
    int pilih;
    do
    {
        //TAMPILAN MENU
        cout << "================================\n";
        cout << "======== MENU MODUL C++ ========\n";
        cout << "================================\n" << endl;
        cout << "1. Input dan Output\n";
        cout << "2. Percabangan\n";
        cout << "3. Perulangan\n";
        cout << "4. Array\n";
        cout << "5. Sorting\n";
        cout << "6. Searching\n";
        cout << "7. Rekursif\n";
        cout << "8. Exit\n\n";
        cout << "Masukkan Pilihan Anda: "; cin >> pilih;
        system("cls");

    //CASE 1: Input dan Output
    if (pilih == 1){
            case_1();
            back_to_menu();
    }

    //CASE 2: Percabangan
    else if (pilih == 2){

            //VARIABEL
            int nilai;
            string password, grade;

            //LOGIN INPUT
            cout << "========= Login =========" << endl;
            cout << "Masukan password (kota asal ITTP) : ";
            cin >> password;

            //PERCABANGAN IF dan ELSE
            if (password == "purwokerto" || "Purwokerto" || "PURWOKERTO"){
                cout << "Selamat datang!" << endl << endl;

                cout << "=== Program Grade Nilai ===" << endl;
                cout << "Inputkan nilai Anda : ";
                cin >> nilai;
                if (nilai >= 90) {
                    grade = "A";
                } else if (nilai >= 80) {
                    grade = "B+";
                } else if (nilai >= 70) {
                    grade = "B";
                } else if (nilai >= 60) {
                    grade = "C+";
                } else if (nilai >= 50) {
                    grade = "C";
                } else if (nilai >= 40) {
                    grade = "D";
                } else if (nilai >= 30) {
                    grade = "E";
                } else {
                    grade = "F";
                }

                //MENAMPILKAN TINGKAT BERDASARKAN NILAI INPUT
                cout << "Grade anda: " << grade << endl << endl;

                //TIPS
                char tips;
                cout << "Ingin tau tips mendapatkan nilai bagus? (Y/N) : \n";
                cin >> tips;

                //PERCABANGAN SWITCH
                switch (toupper(tips)){
                    case 'Y':
                        cout << "\nTipsnya adalah Belajar dan berdoa" << endl << endl;
                        break;
                    case 'N':
                        cout << "Oke" << endl;
                        break;
                    default:
                        cout << "Input Salah!" << endl;
                }
            }

            else {
                cout << "Password salah, coba lagi!"  << endl;
            }

            cout << "Terimakasih sudah menggunakan aplikasi ini!" << endl;

            back_to_menu();
    }

    //CASE 3: PERULANGAN
    else if (pilih == 3){

            //VARIABEL
            int angka, pilihOperasi;

            //PENJELASAN TENTANG PROGRAM
            cout << "Program ini akan melakukan penjumlahan, pengurangan, dan perkalian ^^\n";
            cout << "Program akan melakukan perhitungan dari bilangan yang diinput dengan angka 1-10 ^^\n";
            cout << "\nAyo, masukkan bilangan yang akan dihitung : ";
            cin >> angka;

            //PILIH OPERASI PERHITUNGAN
            cout << "\nDaftar operasi perhitungan\n";
            cout << "1. Penjumlahan\n";
            cout << "2. Pengurangan\n";
            cout << "3. Perkalian\n";

            cout << "Pilih Operasi perhitungan : ";
            cin >> pilihOperasi;

            if ( pilihOperasi == 1 ){
                cout << "\nPENJUMLAHAN\n";
                for (int i = 0; i<10; i++){
                    cout << angka << " + " << i+1 << " = " << angka+(i+1)<< endl;
                }
            }

            else if ( pilihOperasi == 2 ){
                cout << "\nPENGURANGAN\n";
                for (int i = 0; i<10; i++){
                    cout << angka << " - " << i+1 << " = " << angka - (i + 1)<< endl;
                }
            }

            else {
                cout << "\nPERKALIAN\n";
                for (int i = 0; i<10; i++){
                    cout << angka << " x " << i+1 << " = " << angka * (i + 1)<< endl;
                }
            }
            back_to_menu();
    }

    //CASE 4: ARRAY (PENERAPAN ARRAY DALAM GAME MINESWEEPER SEDERHANA)
    else if (pilih == 4){

            //PROGRAM MINESWEPER
            //ARRAY UNTUK MENAMPUNG TEBAKAN PEMAIN
            string A[5][5] ={{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "}};

            //KUNCI JAWABAN GAME
            string B[5][5] ={{"1","1","1","_","_"},{"1","*","2","1","1"},{"1","1","3","*","2"},{"_","_","2","*","2"},{"_","_","1","1","1"}};
            string C[5][5] ={{"1","1","1","_","_"},{"1","*","2","1","1"},{"1","1","3","*","2"},{"_","_","2","*","2"},{"_","_","1","1","1"}};

            //VARIABEL PARAMETER
            int x,y;
            int z=0;
            string a,b,c;

            //TAMPILAN AWAL
            do{
                cout<<"\t *MINESWEEPER*";
                cout<<"\n===============================\n";
                for (x=0;x<=4;x++){
                    cout<<"|  ";
                    for (y=0;y<=4;y++){
                        cout<<A[x][y]<<"  |  ";
                    }
                    cout<<endl;
                    cout<<"===============================\n";
                }

                cout<<"\nMasukkan Kolom [1-5]: ";
                cin>>y;
                cout<<"Masukkan Baris [1-5]: ";
                cin>>x;

                //JIKA KONDISI SALAH DAN PEMAIN KALAH
                if( B[x-1][y-1] == "*" ){
                    A[x-1][y-1] = "*" ;

                    cout<<"\n\n\t *MINESWEEPER*";
                    cout<<"\n===============================\n";

                    for (x = 0; x <= 4; x++){
                        cout<<"|  ";
                        for (y = 0; y <= 4; y++){
                            cout<<A[x][y]<<"  |  ";
                        }
                        cout<<endl;
                        cout<<"===============================\n";
                    }

                    cout<<"\n\t  Anda kalah\n";
                    break;

                }

                //JIKA KONDISI BENAR
                else{
                    a=A[x-1][y-1];
                    b=B[x-1][y-1];
                    c=C[x-1][y-1];

                    if(b==c && b!=a){
                        A[x-1][y-1]=B[x-1][y-1];
                        B[x-1][y-1]="";
                        z++;
                    }
                }

                cout<<"\n\n\n";

            } while (z != 22);

            //JIKA PEMAIN MENANG
            if (z == 22){
                cout<<"\t  Anda menang\n";
            }

        back_to_menu();
    }

    //CASE 5: Sorting
    else if (pilih == 5){

        //VARIABEL
        int length1, length2;
        int pilihan, i;

        //MENU SORTING NAMA ATAU ANGKA
        cout << "====== Sorting ======" << endl;
        cout << "1. Nama" << endl;
        cout << "2. Angka" << endl;
        cout << "Masukkan Pilihan [1-2]: "; cin >> pilihan;

        //JIKA PILIHAN MENSORTING NAMA
        if (pilihan == 1){
                cout << "1. Nama" << endl;
                cout << "   Berapa nama yang ingin di input : "; cin >> length1;
                string arr1[length1];

                //LOOPING INPUT NAMA
                for(i=0; i<length1; i++){
                    cout << "   Nama ke-" << i+1 << " : "; cin >> arr1[i];
                }

                //HASIL SEBELUM SORTING
                cout << endl;
                cout << "   Urutan nama sebelum di sorting:" << endl;
                cout << "   ";
                print_array1(arr1, length1);

                //PENSORTINGAN DATA
                bubble_sort(arr1, length1);

                //HASIL ASCENDING SORTING
                cout << endl;
                cout << "   Uruturan nama setelah ascending sort:" << endl;
                cout << "   ";
                print_array1(arr1, length1);

                //HASIL DESCENDING SORTING
                cout << endl;
                cout << "   Uruturan nama setelah descending sort:" << endl;
                selection_sort1(arr1, length1);
                cout << "   ";
                print_array1(arr1, length1);
        }

        //JIKA PILIHAN MENSORTING ANGKA
        else if(pilihan == 2){
                cout << "2. Angka" << endl;
                cout << "   Berapa angka yang ingin di input : "; cin >> length2;
                double arr2[length2];

                //LOOPING INPUT ANGKA
                for(i = 0; i < length2; i++){
                    cout << "   Angka ke-" << i+1 << " : "; cin >> arr2[i];
                }

                //HASIL SEBELUM SORTING
                cout << endl;
                cout << "   Urutan angka sebelum di sorting:" << endl;
                cout << "   ";
                print_array2(arr2, length2);

                //PENSORTINGAN DATA
                insertion_sort2(arr2, length2);

                //HASIL ASCENDING SORTING
                cout << endl;
                cout << "   Uruturan angka setelah ascending sort:" << endl;
                cout << "   ";
                print_array2(arr2, length2);

                //HASIL DESCENDING SORTING
                cout << endl;
                cout << "   Uruturan angka setelah descending sort:" << endl;
                cout << "   ";
                selection_sort2(arr2, length2);
                print_array2(arr2, length2);
        }

        back_to_menu();

    }

    //CASE 6: SEARCHING
    else if (pilih == 6){

            //BANNER CASE 6
            cout << "Selamat Datang di Pemrograman Searching" << endl;
            cout << "                              " << endl << endl;

            //VARIABEL
            double case6_cari;
            int case6_arr_length;

            //INPUT BANYAKNYA DATA
            cout << " Masukkan Banyaknya Data : "; cin >> case6_arr_length;
            double case6_arr[case6_arr_length];

            //LOOPING INPUT DATA KE ARRAY
            cout << " Masukkan Data Bilangan " << endl;
            for(int i = 0; i < case6_arr_length; i++)
            {
                cout << " Data ke-" << i+1 <<" = "; cin >> case6_arr[i];
            }
            cout<<endl;

            //SORTING DATA
            case6_bubble_sort(case6_arr, case6_arr_length);

            //INPUT DATA YANG INGIN DICARI
            cout<<"Yuk input bilangan yang kamu cari : "; cin >> case6_cari;
            cout<<endl;

            //PENCARIAN DATA
            int case6_result = case6_binary_search(case6_arr, 0, case6_arr_length, case6_cari);
            if (case6_result != -1){
                    cout << "Data yang kamu cari ditemukan pada indeks ke-" << case6_result << endl;
            }
            else {
                cout << "Yah, sayang sekali data yang kamu cari tidak ditemukan" << endl;
                cout << "                              " << endl;
            }

            back_to_menu();
    }

    //CASE 7: RECURSIVE (IMPLEMENTASI RECURSIVE ALGORITHM DI PENGHITUNGAN FAKTORIAL)
    else if (pilih == 7){

            //VARIABEL
            int case7_factorial_number;

            //INPUT BILANGAN FAKTORIAL
            cout << "====== Rekursif ======\n" << endl;
            cout << "Masukkan bilangan Faktorial : ";
            cin >> case7_factorial_number;

            //HASIL FAKTORIAL
            cout << "Hasil Faktorial dari " << case7_factorial_number << " adalah : " << factorial(case7_factorial_number) << endl;

            back_to_menu();
    }

    //JIKA PILIH MENGAKHIRI PROGRAM
    else if (pilih == 8){
            cout << "\nTap any key to Exit...";
            getch();
            cout << endl;
    }

    else {
            cout << "tidak ada pilihan ke-" << pilih << endl;
            back_to_menu();
        }
    }

    while (pilih !=8);
    return 0;
}
