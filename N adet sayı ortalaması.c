#include <stdio.h>
#include <locale.h>

int main (){
	
	
	setlocale(LC_ALL, "Turkish");
	
int n, i;
double top=0, sayi;

printf("Say� adedi girin : ");
scanf("%d", &n);


for(i=1; i<=n; i++) {


printf("Say� girin : ");
scanf("%lf", &sayi);
top=top+sayi;


}

printf("Say�lar�n ortalamas� %f", top/n);
	
	
	
}
