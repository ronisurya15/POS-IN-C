// Name : 
// Kelas :
#include <stdio.h>

// Init
void express();

// Mengembalikan nilai
int main () {
    // Buat aplikasi booking kerat api
    /*
        Notes :
        1. Terdapat 3 kelas (Bisnis, Ekonomi, Express)
        2. Memilik jadwal masing-masing
            a. Express (06.00, 13.00, 18.00)
            b. Bisnis: 07.00, 10.00, 14.00, 17.00, 19.00
            c. Ekonomi: 06.30, 09.30, 11.30, 15.00, 18.00
        3. Harga Tiket
            a. Express: Rp. 150.000
            b. Bisnis: Rp. 80.000
            c. Ekonomi: Rp. 5.000
    */

    // Initialize Variable
    // Notes : Variable = tipe data (char, int, float, dst)
    int kelas;
    
    // Initialize Layout
    printf("=== Selamat datang di booking aplikasi ===\n");
    printf("Kelas Kereta");
    printf("\n");
    printf("1. Express \n");
    printf("2. Bisnis \n");
    printf("3. Ekonomi \n");
    printf("\n");

    // Input dari pengguna
    printf("Silahkan masukkan pilihan anda : ");
    scanf("%i", &kelas);

    // Pengkondisian (IF / Switch Case)
    switch (kelas)
    {
        case 1:
            express();
        break;
        case 2:
            // busniess();
        break;
        case 3:
            // ekonomi();
        break;
        
        default:
            express();
        break;
    }

    return 0;
}

void express() {
    printf("testing");
}

// Tidak mengembalikan nilai atau cetak nilai ke layar
// void kelas() {
//     printf("Saya kelas IF1A");
// }