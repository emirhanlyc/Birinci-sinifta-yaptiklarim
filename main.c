#include <stdio.h>

#include <locale.h> /* Türkçe karakter kullanýmý için gereken kod*/

int main() 

{
setlocale(LC_ALL, "Turkish");  /*Türkçe karakter kullanýmý için gereken kod*/



	int i, sayi, toplam=0;
	
	printf("Lütfen üst limit giriniz : ");
	scanf("%d", &sayi);
	
	for(i=1; i<=sayi; i++)
	{
		
		
		
		toplam=toplam+i;
	}
	
	printf("1'den %d'e kadar olan sayýlarýn toplamý : %d", sayi, toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
