//�K� SAYI ARASINDAK�LER� YAZDIRMA//




#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Turkish");
   int x, y, i, toplam=0;
   
   printf("1.say�y� giriniz : ");
   scanf("%d", &x);
   
   
   printf("2.say�y� giriniz : ");
   scanf("%d", &y);
   
for(i=x+1; i<y; i++)

toplam=toplam+i;
 printf("%d ile %d ile aras�ndaki say�lar�n toplam� = %d", x,y,toplam);

    return 0;
}

