#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
    

int main()
{
    float relcia, imacia, frectraba=0; float XC, XL=0; float  ω=0;
    printf("Dame la parte real y la imaginaria de tu impedancia. Primero la real\n");
scanf("%f", &relcia);
scanf("%f", &imacia);
printf("\nAhora dame la frecuencia de trabajo.\n");
scanf("%f", &frectraba);
 
if (imacia==0)
{
    printf("La resistencia es de %f", relcia);
    printf("\nNo es inductor ni capacitor, es totalmente resistivo.");
    
}else if(imacia<0)
{
    printf("La resistencia es de %f", relcia);
 ω=2*PI*frectraba;
    XC=1/(ω*imacia);
    printf("\nEs capacitivo y su capacitancia es: %f", XC);
}else if(imacia>0){
    printf("La resistencia es de %f", relcia);
 ω=2*PI*frectraba;
    XL=ω*imacia;
    printf("\nEs inductivo y su inductancia es: %f", XL);
}
    return 0;
}



