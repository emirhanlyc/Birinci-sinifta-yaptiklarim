#include <stdio.h>
#include <locale.h>

int main()

{
		setlocale(LC_ALL, "Turkish");
	int i=0,  sayi, topla=0;
	char dvm;
	do{
		
		  printf("Sayý giriniz: ");
		scanf("%d", &sayi);
		topla+=sayi;
	printf("Devam etmek ister misiniz ?\n ");
	
	do{
		scanf("%c", &dvm);
	} while(dvm=='\n');
	i++;
	}
	
	
while(dvm=='e' || dvm=='E'); 

      	printf("Sayýlarýn toplamý : %d ", topla);


	
	
	
	
	return 0;
	
	
}
