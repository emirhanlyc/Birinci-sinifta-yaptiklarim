#include <stdio.h>   //Klavyeden girilen sayıyı 7
#include <locale.h>
int main() {
setlocale(LC_ALL, "Turkish");

int sayi,i, ters, sert;

printf("Sayı gir : ");
scanf("%d", &sayi);

while(sayi>0){

ters= sayi %10;

printf("%d", ters);
sayi= sayi/10;



}





	
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
}