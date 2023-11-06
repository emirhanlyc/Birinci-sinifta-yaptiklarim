#include <stdio.h>
#include <locale.h>

int main (){
	
	
	setlocale(LC_ALL, "Turkish");
	

	
double fah, cel;

for(fah=1; fah<=100; fah++){
	
for(cel=1; cel<=100; cel++){


fah= cel * 1.8 + 32;
	
	
printf("Fahrenheit : %.2lf\t Santigrat : %.2lf\n", fah, cel);	
	
	
}
}

return 0;
}

	








