#include <stdio.h>
#include <locale.h>

int main (){
	
	
	setlocale(LC_ALL, "Turkish");
	

	
int n, i;

	printf("Sayý girin : ");
	scanf("%d", &n);


for(i=0; i<=n; i++)

if(i%2==0)
printf("%d\t", i);
return 0;
}
