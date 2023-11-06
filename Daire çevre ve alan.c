#include <stdio.h>
#include <locale.h>

int main (){
	
	
	setlocale(LC_ALL, "Turkish");
	

	
double r, pi=3.14, a, c;


for(r=1; r<=10; r++){

 a=pi*r*r;
c=2*pi*r;
printf("r=%lf\t Alan = %.2lf\t  Çevre = %.2lf\n  ", r,a,c);	
	
	
	
}
	



return 0;
}

	








