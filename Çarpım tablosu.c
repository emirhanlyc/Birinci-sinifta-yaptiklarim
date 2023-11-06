#include <stdio.h>
#include <locale.h>

int main (){
	
	
	setlocale(LC_ALL, "Turkish");
	

	
int a, b, carpim;

for(a=1; a<=10; a++)
{
	
for(b=1; b<=10; b++)	{


carpim=a*b;
printf("%d x %d = %d\n",a,b,carpim);
	
	
}
	printf("\n");
}


return 0;
}

	








