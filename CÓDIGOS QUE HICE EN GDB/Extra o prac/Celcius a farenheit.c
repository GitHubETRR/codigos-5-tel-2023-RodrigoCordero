#include <stdio.h>

int main()
{
   int grados, resultado = 0;
   printf("Ponga los grados celcius que pasará a farenheit: ");
   scanf("%i",&grados);
   resultado = grados * 1.8 + 32;
   printf("El resultado en farenheits es: %i", resultado);
   
   return 0;
}


