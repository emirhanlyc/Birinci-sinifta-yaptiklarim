//�K� SAYI ARASINDAK�LER� YAZDIRMA//




#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Turkish");
   int x, y, i;
   
   printf("1.say�y� giriniz : ");
   scanf("%d", &x);
   
   
   printf("2.say�y� giriniz : ");
   scanf("%d", &y);
   
  if(y>x) {
  for(i=x+1; i<y; i++)
  
   {
   if(i%2==0)
   printf("Aradaki say�lar : %d\n", i);}
}

else {
	
	for(i=y+1; i<x; i++)

   if(i%2==0){
   
   printf("Aradaki say�lar : %d\n", i);}
}

    return 0;
}

