/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float baseuno=0; float basedos=0; float altura=0; float resul=0;
    printf("Hola, dame la longitud de la primer base de tu trapecio.");
scanf("%f",&baseuno);   
printf("Ahora de la segunda base o lado, luego la altura.");
scanf("%f",&basedos);
scanf("%f",&altura);
resul = ((baseuno+basedos)*altura)/2;
printf("El resultado es: %f", resul);



    return 0;
}

