//ÝKÝ SAYI ARASINDAKÝLERÝ YAZDIRMA//




#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Turkish");
   int x, y, i;
   
   printf("1.sayýyý giriniz : ");
   scanf("%d", &x);
   
   
   printf("2.sayýyý giriniz : ");
   scanf("%d", &y);
   
  if(y>x) {
  for(i=x+1; i<y; i++)
  
   {
   if(i%2==0)
   printf("Aradaki sayýlar : %d\n", i);}
}

else {
	
	for(i=y+1; i<x; i++)

   if(i%2==0){
   
   printf("Aradaki sayýlar : %d\n", i);}
}

    return 0;
}

