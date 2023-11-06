//ÝKÝ SAYI ARASINDAKÝLERÝ YAZDIRMA//




#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Turkish");
   int x, y, i, toplam=0;
   
   printf("1.sayýyý giriniz : ");
   scanf("%d", &x);
   
   
   printf("2.sayýyý giriniz : ");
   scanf("%d", &y);
   
for(i=x+1; i<y; i++)

toplam=toplam+i;
 printf("%d ile %d ile arasýndaki sayýlarýn toplamý = %d", x,y,toplam);

    return 0;
}

