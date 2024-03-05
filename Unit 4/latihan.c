#include <stdio.h>

int kelilingPersegi(int sisi){
    int keliling = 4*sisi;
    return keliling;
}

int luasPersegi(int sisi){
    int luas = sisi*sisi;
    return luas;
}

int volumeKubus(int sisi){
    int volume = sisi*sisi*sisi;
    return volume;
}

int main() {
    int sisi;
    printf("Masukan panjang sisi: ");
    scanf("%d", &sisi);
    printf("Keliling persegi adalah: %d\nLuas persegi adalah: %d\nVolume kubus adalah: %d\n", kelilingPersegi(sisi), luasPersegi(sisi), volumeKubus(sisi));
}