#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
  float modulo=0; float angulo=0; float a=0; float b=0; float polobin=0; float real=0; float falso=0; float AN=0; float z=0; float pescadoSymbol=0;
  printf("Hola capo, segui mis pasos y te doy un premio.\n");
  printf("Si queres pasar un numero de polar a binomica, ingresa 1. sino, cualquier otro numero");
  scanf("%f",&polobin);
  if (polobin==1)
  {
    printf("Ingrese módulo");
    scanf("%f",&modulo); 
    printf("Ahora el angulo"); 
    scanf("%f",&angulo);
    a = modulo * cos(angulo);
    b = modulo * sin(angulo);
    printf("Tu numero complejo en forma binomica es: %f + %fi", a, b);
  }
    
  else
  { 
    printf("Ingrese su parte real");
    scanf("%f", &real);
    printf("Ingrese la parte falsa/imaginaria");
    scanf("%f", &falso);
    AN=(atan2(falso, real)*180/PI);
    z=sqrt(real * real + falso * falso);
    printf("Tu número complejo en forma polar quedaría: %fe^j%f", z,AN);
    printf("Tu premio es... UN CHISTE MALO:\n ¿Cuál es el animal más tonto de la selva? El oso polar... ");
  }
  return 0;
}
