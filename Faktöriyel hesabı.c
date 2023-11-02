#include <stdio.h>

#include <locale.h> /* Türkçe karakter kullanımı için gereken kod*/

int main() 

{
setlocale(LC_ALL, "Turkish");  /*Türkçe karakter kullanımı için gereken kod*/

int i, sayi, carpim=1;

printf("Faktöriyelini almak istediğiniz sayıyı giriniz : ");
scanf("%d", &sayi);

	for(i=1; i<=sayi; i++)
	carpim=carpim*i;

printf("%d sayısının faktöriyeli : %d", sayi, carpim);

	
	return 0;
}