#include <stdio.h>
#include <locale.h>

int main (){
	
	
	setlocale(LC_ALL, "Turkish");
	

	
double x, a, b;



for(b=1; b<=10; b++){
for(a=1; a<=5; a++){

	
	
	

x=-b/a;

printf("a=%f\t b=%f\t x=%f\n",a, b,x);

}
}
return 0;
}
