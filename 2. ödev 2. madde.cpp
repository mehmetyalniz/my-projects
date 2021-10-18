

#include<stdio.h>


int main() {
    int sayi;
    printf("Mutlak degeri hesaplanacak sayi giriniz: ");
    scanf("%d", &sayi);
 
    if (sayi > 0) {
        printf("Girdiginiz sayi pozitiftir : %d", sayi);
    } else if (sayi == 0) {
        printf("Girdiginiz sayi 0'dýr pozitif ve negatiflikten soz edemeyiz");
    } else {
        printf("Girdiginiz sayi negatiftir. Mutlak degeri = %d ", (-sayi));
    }
 
    return 0;
}
