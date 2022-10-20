#include <stdio.h>
#include <conio.h>
#include <windows.h>

int opc, n1, n2, flag;
float d1, d2;

int suma (int a, int b), resta (int a, int b), multiplicacion (int a, int b);
float division (float a, float b);

int main (){

do{
system ("cls");

printf ("Bienvenido a la calculadora basica!\n\nMenu de opciones:\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n\nSu opcion: ");
scanf ("%d", &opc);

switch (opc){

case 1: 

printf ("\nIngrese el primer sumando: ");
scanf ("%d", &n1);

printf ("\nIngrese el segundo sumando: ");
scanf ("%d", &n2);

printf ("\nEl resultado de la suma es de: %d", suma (n1, n2));

flag = 0;
break;

case 2:
	
printf ("\nIngrese el minuendo: ");
scanf ("%d", &n1);

printf ("\nIngrese el sustraendo: ");
scanf ("%d", &n2);

printf ("\nLa diferencia de la resta es de: %d", resta (n1, n2));

flag = 0;
break;

case 3:

printf ("\nIngrese el multiplicando: ");
scanf ("%d", &n1);

printf ("\nIngrese el multiplicador: ");
scanf ("%d", &n2);

printf ("\nEl producto de la multiplicacion es de: %d", multiplicacion (n1, n2));

flag = 0;
break;

case 4:

printf ("\nIngrese el dividendo: ");
scanf ("%f", &d1);

printf ("\nIngrese el divisor: ");
scanf ("%f", &d2);

if (d1<d2)
printf ("\nEl cociente de la division es de: %.1f", division (d1, d2));
else
printf ("\nEl cociente de la division es de: %.0f", division (d1, d2));

flag = 0;
break;

default:

printf ("\nSu opcion ingresada no es valida.\n\nPulse una tecla para continuar...");

flag = 1;
getch();

break;	
	
}
}while(flag == 1);
	
	
return 0;	
}

int suma (int a, int b){

int r = a + b;	

return r;	
}

int resta (int a, int b){

int r = a - b;	

return r;	
}

int multiplicacion (int a, int b){

int r = a * b;	

return r;	
}

float division (float a, float b){

float r = a / b;	

return r;	
}
