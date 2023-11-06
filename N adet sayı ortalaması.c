#include <stdio.h>
#include <locale.h>

int main (){
	
	
	setlocale(LC_ALL, "Turkish");
	
int n, i;
double top=0, sayi;

printf("Sayý adedi girin : ");
scanf("%d", &n);


for(i=1; i<=n; i++) {


printf("Sayý girin : ");
scanf("%lf", &sayi);
top=top+sayi;


}

printf("Sayýlarýn ortalamasý %f", top/n);
	
	
	
}
