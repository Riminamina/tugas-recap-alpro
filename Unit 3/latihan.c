#include <stdio.h>

int main() {
    int array[4];
    int hasil;
    
    printf("Masukan integer:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &array[i]);
    }

    printf("Value di dalam array adalah: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        hasil=hasil+array[i];
    }
    printf("Jumlah seluruh elemen array adalah: %d", hasil);
    
    return 0;
}