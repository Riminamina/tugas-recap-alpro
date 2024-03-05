#include <stdio.h>

int v, s, t;
float laju, jarak, waktu;

int main(){
    printf("Masukan nilai jarak: \n");
    scanf("%d", &s);
    printf("Masukan nilai waktu: \n");
    scanf("%d", &t);
    laju = (float) s/t;
    printf("Kecepatannya adalah %.2f\n", laju);
    
    printf("Masukan nilai kecepatan: \n");
    scanf("%d", &v);
    printf("Masukan nilai waktu: \n");
    scanf("%d", &t);
    jarak = (float) v*t;
    printf("Kecepatannya adalah %.2f\n", jarak);
    
    printf("Masukan nilai kecepatan: \n");
    scanf("%d", &v);
    printf("Masukan nilai jarak: \n");
    scanf("%d", &s);
    waktu = (float) s/v;
    printf("Kecepatannya adalah %.2f\n", waktu);
    return 0;
}