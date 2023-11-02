#include <stdio.h>

#include <locale.h> /* Türkçe karakter kullanımı için gereken kod*/

int main() 

{
setlocale(LC_ALL, "Turkish");  /*Türkçe karakter kullanımı için gereken kod*/



	int dy, sy, yas;
	
	printf("Hesaplamak istediğiniz yılı giriniz ");
	scanf("%d", &sy);
	
	printf("Doğum tarihini giriniz ");
	scanf("%d", &dy);
	
 (yas=sy-dy);
		
		
	if (dy>sy)
	printf("Lütfen geçerli bir tarih giriniz, yaş eksi olamaz. ");
	
	else 
	printf("%d yılına göre yaşı : %d'dir", sy, yas);
	
	return 0;
}