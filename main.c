#include <stdio.h>

#include <locale.h> /* T�rk�e karakter kullan�m� i�in gereken kod*/

int main() 

{
setlocale(LC_ALL, "Turkish");  /*T�rk�e karakter kullan�m� i�in gereken kod*/



	int i, sayi, toplam=0;
	
	printf("L�tfen �st limit giriniz : ");
	scanf("%d", &sayi);
	
	for(i=1; i<=sayi; i++)
	{
		
		
		
		toplam=toplam+i;
	}
	
	printf("1'den %d'e kadar olan say�lar�n toplam� : %d", sayi, toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
