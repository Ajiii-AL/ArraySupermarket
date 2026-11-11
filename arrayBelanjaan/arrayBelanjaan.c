#include <stdio.h>

int main(){

    int belanjaan[5];
    int total = 0;
    int hargaTertinggi;
    int i;

    printf("=== KASIR MINIMARKET ===\n");
    
    for(i = 0; i < 5; i++) {
        printf("Masukkan harga barang ke-%d: ", i + 1);
        scanf("%d", &belanjaan[i]);
        total += belanjaan[i];
    }

    printf("\n=== DAFTAR Barang ===\n");
    for(i = 0; i < 5; i++) {
        printf("Barang ke-%d: %d\n", i + 1, belanjaan[i]);
    }

    hargaTertinggi = belanjaan[0];
    for(i = 1; i < 5; i++) {
        if(hargaTertinggi < belanjaan[i] ) {
            hargaTertinggi = belanjaan[i];
        }
    }

    printf("Total belanjaan: %d\n", total);
    printf("Harga barang tertinggi: %d\n", hargaTertinggi);

    return 0;
}