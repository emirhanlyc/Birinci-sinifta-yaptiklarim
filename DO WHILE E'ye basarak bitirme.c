#include <stdio.h>
#include <locale.h>

int main()

{
		setlocale(LC_ALL, "Turkish");
	int sayi, i, j;
	prinf("Say� giriniz : ");
	scanf("%d", &sayi);
	
	for(i=0; i<sayi; i++)
	{
		
	for(j=0; j<i; j++)
		
		{
		
		printf("*");
		
	
	}
		printf("\n");
	
	}


	
	
	
}
