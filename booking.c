// Name : ....
// Kelas : ...

#include <stdio.h>

// Methods
int hitung(int price, int tiket, int kelas);

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
    int kelas, jadwal, tiket;
    
    // Initialize Layout
    printf("=== Selamat datang di aplikasi (Booking Dulu) ===\n\n");
    printf("Kelas Kereta");
    printf("\n");
    printf("1. Express (Rp. 150.000) \n");
    printf("2. Bisnis (Rp. 80.000) \n");
    printf("3. Ekonomi (Rp. 5.000) \n");
    printf("\n");

    // Input dari pengguna
    printf("Silahkan masukkan pilihan anda : ");
    scanf("%i", &kelas);

    // Notes :
    // 1. User harus memilih kelas kereta api, kemudian pilih jadwal keberangkatan, dan jumlah tiket yang akan dibeli.
    // 2. Apabila kelas yang dipilih Express dan tiket yang dibeli minimal sebanyak 3 tiket maka akan mendapat potongan harga 10%.
    // 3. Apabila kelas yang dipilih bisnis dan tiket yang dibeli sebanyak 4 tiket maka akan mendapatkan potongan harga 15%.
    // 4. Apabila kelas yang dipilih ekonomi dan tiket yang dibeli 5 tiket maka akan mendpat 1 tiket gratis.
    // 5. Informasi/output yang ditampilkan adalah kelas, harga tiket, jumlah tiket, dan pembayaran.
    // 6. Silahkan tentukan tipe data dan variabel apa yang digunakan didalam pembangunan aplikasi ini.

    // Pengkondisian (IF)
    if (kelas == 1) {
        printf("Jadwal Kelas Express");
        printf("\n");
        printf("1. 06.00 \n");
        printf("2. 13.00 \n");
        printf("3. 18.00 \n");
        printf("\n");
        
        printf("Masukkan Jadwal : ");
        scanf("%i", &jadwal);
        printf("Masukkan Jumlah Tiket : ");
        scanf("%i", &tiket);
        printf("\n");

        // Initialize
        int price          = 150000;
        char times[3][20]  = {"06.00","13.00","18.00"};

        // Style
        printf("\n === Invoice === \n");
        printf("Kelas Tiket : Express \n");
        printf("Jadwal Kereta : %s \n", times[(jadwal - 1)]);
        printf("Jumlah Tiket : %i \n", tiket);
        printf("Harga: %i \n", price);
        printf("Total Pembayaran (%d x %d) : %d \n",price, tiket, hitung(price, tiket, kelas));
        printf("Pembayaran total sudah mencakup potongan. \n\n");
        printf("*** Terdapat potongan sebesar 10%% untuk kelas Express apabila pembelian tiket mencapai 3 tiket *** \n");
    } else if (kelas == 2) {
        printf("Jadwal Kelas Bisnis");
        printf("\n");
        printf("1. 07.00 \n");
        printf("2. 10.00 \n");
        printf("3. 14.00 \n");
        printf("4. 19.00 \n");
        printf("\n");
        
        printf("Masukkan Jadwal : ");
        scanf("%i", &jadwal);
        printf("Masukkan Jumlah Tiket : ");
        scanf("%i", &tiket);
        printf("\n");

        // Initialize
        int price           = 80000;
        char times[4][20]   = {"07.00","10.00","14.00","19.00"};

        // Invoice
        printf("\n === Invoice === \n");
        printf("Kelas Tiket : Bisnis \n");
        printf("Jadwal Kereta : %s \n", times[(jadwal - 1)]);
        printf("Jumlah Tiket : %i \n", tiket);
        printf("Harga: %i \n", price);
        printf("Total Pembayaran (%d x %d) : %d \n",price, tiket, hitung(price, tiket, kelas));
        printf("Pembayaran total sudah mencakup potongan. \n\n");
        printf("*** Terdapat potongan sebesar 15%% untuk kelas Bisnis apabila pembelian tiket mencapai 4 tiket) *** \n");
    } else if (kelas == 3) {
        printf("Jadwal Kelas Bisnis \n");
        printf("\n");
        printf("1. 06.30 \n");
        printf("2. 09.30 \n");
        printf("3. 11.30 \n");
        printf("4. 15.00 \n");
        printf("5. 18.00 \n");
        printf("\n");
        
        printf("Masukkan Jadwal : ");
        scanf("%i", &jadwal);
        printf("Masukkan Jumlah Tiket : ");
        scanf("%i", &tiket);
        printf("\n");

        // Initialize
        int price           = 5000;
        char times[5][20]   = {"06.30","09.30","11.30","15.00","18.00"};

        // Invoice
        printf("\n === Invoice === \n");
        printf("Kelas Tiket : Ekonomi \n");
        printf("Jadwal Kereta : %s \n", times[(jadwal - 1)]);
        
        if (tiket == 5) {
            printf("Jumlah Tiket (Termasuk 1 tiket gratis) : %i \n", (tiket + 1));
        } else {
            printf("Jumlah Tiket : %i \n", tiket);
        }
        
        printf("Harga: %i \n", price);
        
        printf("Total Pembayaran (%d x %d) : %d \n",price, tiket, hitung(price, tiket, kelas));
        printf("Pembayaran total sudah mencakup potongan. \n\n");
        printf("*** Mendapatkan 1 tiket gratis saat memesan 5 tiket ekonomi *** \n");
    } else {
        printf("Kelas Tiket yang dipilih tidak tersedia");
    }

    return 0;
}

int hitung(price, tiket, kelas) {
    // Initialize
    int totals;

    // Notes :
    // 1. Apabila kelas yang dipilih Express dan tiket yang dibeli minimal sebanyak 3 tiket maka akan mendapat potongan harga 10%.
    // 2. Apabila kelas yang dipilih Bisnis dan tiket yang dibeli sebanyak 4 tiket maka akan mendapatkan potongan harga 15%.
    
    int discount = 0;

    if (kelas == 1) { // Express
        if (tiket >= 3) {
            discount = ((price * tiket) * 0.1);
        }

        totals = ((price * tiket) - discount);
    } else if (kelas == 2) { // Bisnis
        if (tiket == 4) {
            discount = ((price * tiket) * 0.15);
        }

        totals = ((price * tiket) - discount);
    } else { // Ekonomi
        totals = ((price * tiket));
    }

    return totals;
}
