#include <stdio.h>
#include <locale.h>

int main()
{
		setlocale(LC_ALL, "Turkish");
	int sayi, topla=0;
	
	do{
		
		  printf("Say� giriniz: ");
		scanf("%d", &sayi);
		topla+=sayi;
	
	
	}
	
	
while(sayi>0); 

      	printf("Say�lar�n toplam� : %d ", topla-sayi);


	
	
	
	
	return 0;
	
	
}
