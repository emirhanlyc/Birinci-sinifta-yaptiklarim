#include <stdio.h>
#include <locale.h>

int main (){
	
	
	setlocale(LC_ALL, "Turkish");
	

	
int n, i, toplam=0;

	printf("Say� girin : ");
	scanf("%d", &n);

for(i=0; i<=n; i=i+2)

toplam=toplam+i;


printf("%d'e kadar olan say�lar�n toplam� = %d", n, toplam);




return 0;
}
