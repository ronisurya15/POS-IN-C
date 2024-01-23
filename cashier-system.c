#include <stdio.h>

void selectOption(int selected);
void makanan();
void minuman();
void cemilan();
int hitung(int price, int qty);

int main () {
    // Initialize Variable
    char category[3][10] = {"Makanan", "Minuman", "Cemilan"};
    int totalCategory    = sizeof(category) / sizeof(category[0]);
    int x, y, choose;

    // Initialize Layout
    printf("=== Point Of Sales === \n");
    printf("*** Kategori ***");
    printf("\n");
    printf("\n");
    printf("### Catatan : Setiap pembelian diatas 100k akan mendapatkan diskon 10%% ###");
    printf("\n");
    printf("\n");

    for(x = 0; x < totalCategory; x++) {
        printf("%d. %s \n", x + 1, category[x]);
    }

    printf("\n");
    printf("Pilih Kategori (1 - %d) : ", totalCategory);
    scanf("%d", &choose);

    // Call Function Select Option Logic
    selectOption(choose);

    return 0;
}

void selectOption (selected) {
    switch(selected) {
        case 1 : 
            makanan();
        break;
        case 2 : 
            minuman();
        break;
        case 3 : 
            cemilan();
        break;
        
        default:
            makanan();
        break;
    }
}

void makanan() {
    // Initialize Variable
    char menus[5][20]  = {"Nasi Putih","Nasi Uduk","Nasi Kuning","Nasi Goreng","Nasi Liwet"};
    int prices[]       = {5000,6000,5000,15000,12000};
    int totalMenus     = sizeof(menus) / sizeof(menus[0]);
    int x, y, choose, qty;

    // Initialize Layout
    printf("\n");
    printf("=== Silahkan Pilih Menu Makanan ===");
    printf("\n");
    
    for (x = 0; x < totalMenus; x++)
    {
        printf("%d. %s \n", x + 1, menus[x]);
    }

    // Accommodate Data
    printf("\n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &choose);

    switch (choose)
    {
        case 1:
            printf("Menu : %s \n", menus[0]);
            printf("Harga : %d \n", prices[0]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[0], qty));
        break;
        case 2:
            printf("Menu : %s \n", menus[1]);
            printf("Harga : %d \n", prices[1]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[1], qty));
        break;
        case 3:
            printf("Menu : %s \n", menus[2]);
            printf("Harga : %d \n", prices[2]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[2], qty));
        break;
        case 4:
            printf("Menu : %s \n", menus[3]);
            printf("Harga : %d \n", prices[3]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[3], qty));
        break;
        case 5:
            printf("Menu : %s \n", menus[4]);
            printf("Harga : %d \n", prices[4]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[4], qty));
        break;
    
        default:
        break;
    }

    printf("\n");
    printf("**** Terimakasih Atas Kunjungan Anda! ****");
}

void minuman() {
    // Initialize Variable
    char menus[4][50]  = {"Air Putih (LeMineral Botol)","Teh Kotak","Susu","Kopi"};
    int prices[]       = {3000,6000,4000,3000};
    int totalMenus     = sizeof(menus) / sizeof(menus[0]);
    int x, y, choose, qty;

    // Initialize Layout
    printf("\n");
    printf("=== Silahkan Pilih Menu Minuman ===");
    printf("\n");
    
    for (x = 0; x < totalMenus; x++)
    {
        printf("%d. %s \n", x + 1, menus[x]);
    }

    // Accommodate Data
    printf("\n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &choose);

    switch (choose)
    {
        case 1:
            printf("Menu : %s \n", menus[0]);
            printf("Harga : %d \n", prices[0]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[0], qty));
        break;
        case 2:
            printf("Menu : %s \n", menus[1]);
            printf("Harga : %d \n", prices[1]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[1], qty));
        break;
        case 3:
            printf("Menu : %s \n", menus[2]);
            printf("Harga : %d \n", prices[2]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[2], qty));
        break;
        case 4:
            printf("Menu : %s \n", menus[3]);
            printf("Harga : %d \n", prices[3]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[3], qty));
        break;
        
        default:
        break;
    }

    printf("\n");
    printf("**** Terimakasih Atas Kunjungan Anda! ****");
}

void cemilan() {
    // Initialize Variable
    char menus[4][50]  = {"Kentang Goreng","Mendoan","Basreng","Cilok"};
    int prices[]       = {3000,6000,4000,3000};
    int totalMenus     = sizeof(menus) / sizeof(menus[0]);
    int x, y, choose, qty;

    // Initialize Layout
    printf("\n");
    printf("=== Silahkan Pilih Menu Cemilan ===");
    printf("\n");
    
    for (x = 0; x < totalMenus; x++)
    {
        printf("%d. %s \n", x + 1, menus[x]);
    }

    // Accommodate Data
    printf("\n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &choose);

    switch (choose)
    {
        case 1:
            printf("Menu : %s \n", menus[0]);
            printf("Harga : %d \n", prices[0]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[0], qty));
        break;
        case 2:
            printf("Menu : %s \n", menus[1]);
            printf("Harga : %d \n", prices[1]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[1], qty));
        break;
        case 3:
            printf("Menu : %s \n", menus[2]);
            printf("Harga : %d \n", prices[2]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[2], qty));
        break;
        case 4:
            printf("Menu : %s \n", menus[3]);
            printf("Harga : %d \n", prices[3]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[3], qty));
        break;
        
        default:
            printf("Menu : %s \n", menus[0]);
            printf("Harga : %d \n", prices[0]);
            printf("Masukkan QTY : ");
            scanf("%d", &qty);
            printf("Total Pembayaran : %d \n", hitung(prices[0], qty));
        break;
    }

    printf("\n");
    printf("**** Terimakasih Atas Kunjungan Anda! ****");
}

int hitung (price, qty) {
    int total = (price * qty);

    if (total >= 100000)
    {
        // Discount 10%
        total = price * qty * (1 - (10/100.0));
    }

    return total;
}