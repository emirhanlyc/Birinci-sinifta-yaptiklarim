
#include <stdio.h>

int main()
{
    int i, sayi;
    
    printf("Basamak sayısı öğrenmek için sayı giriniz : ");
    scanf("%d", &sayi);
    
    for(i=0; sayi>=9; i++)
    
    sayi=sayi/10;
    
    printf("Sayını %d basamaklıdır", ++i);
    
    
}
