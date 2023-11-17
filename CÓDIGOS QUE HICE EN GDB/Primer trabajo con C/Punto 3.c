#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main()
{
  float repri=0; float reseg=0; float impri=0; float imseg=0; int niil=0;; float relto=0; float imato=0; float an=0; float z=0; float res=0;
  printf("Voy a sumarte 2 números complejos en formato rectangular. Pone la parte real del primer numero complejo\n");
  scanf("%f", &repri);
  printf("Ahora la parte imaginaria del primer número complejo\n");
  scanf("%f", &impri);
  printf("Ahora la parte real del segundo número complejo\n");
  scanf("%f", &reseg);
  printf("Listo, ahora la parte imaginaria del segundo número complejo\n");
  scanf("%f", &imseg);
  relto=repri + reseg;
  imato=impri + imseg;
  printf("¿Lo querés en forma binómica (0) o en polar (1)");
  scanf("%i", &niil);
  if (niil==0)
  {
    printf("El resultado es: %fj + %f", relto, imato);
}
  else
  {
    an=(atan2(imato, relto)*180/PI);
    z=sqrt(relto * relto + imato * imato);
    printf("La suma, en polar, quedaría: %fe^j%f", z,an);
}
  printf("\nUn chiste malo: ¿cuál es el colmo de Batman? Que le Robin...");
  return 0;
}




