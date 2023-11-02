#include <stdio.h>

int main() {
    
    int sayi, toplam=0, i;
    
    printf("Sayı giriniz : ");
    scanf("%d", &sayi);
    
    for(i=0; i<=sayi; i++)
    
   if(i%2==0)
   

   toplam=toplam+i; 
    
    printf("%d'e kadar olan çift sayıların toplamı : %d\n",sayi, toplam);

    
    
    
    
    
    
    
    
    
    
}