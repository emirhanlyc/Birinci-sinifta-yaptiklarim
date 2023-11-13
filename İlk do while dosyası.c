#include <stdio.h>
#include <locale.h>

int main()
{
		setlocale(LC_ALL, "Turkish");
	int sayi, topla=0;
	
	do{
		
		  printf("Sayý giriniz: ");
		scanf("%d", &sayi);
		topla+=sayi;
	
	
	}
	
	
while(sayi>0); 

      	printf("Sayýlarýn toplamý : %d ", topla-sayi);


	
	
	
	
	return 0;
	
	
}
