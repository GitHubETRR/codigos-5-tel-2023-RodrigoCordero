#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main()
{
    float modten, angten=0; float modcor, angcor=0; float modR, angR, frectraba=0; float ω, XC, XL=0; float Ril, Ima=0;
    printf("Dame el módulo y el ángulo de tu tensión, primero el módulo.\n");
    scanf("%f", &modten);
    scanf("%f", &angten);
    printf("Ahora módulo de la corriente y luego su ángulo.\n");
    scanf("%f", &modcor);
    scanf("%f", &angcor);
    printf("\nAhora poné la frecuencia de trabajo.");
    scanf("%f", &frectraba);
    modR=modten/modcor;
    angR=angten/angcor;
    Ril= modR * cos(angR);
    Ima = modR * sin(angR);
    printf("En binómica, sería: %f+j%f", Ril, Ima);
    if (Ima==0)
    {
        printf("La resistencia es de %f", Ril);
        printf("\nNo es inductor ni capacitor, es totalmente resistivo.");
        
    }
    else if(Ima<0)
    {
        printf("La resistencia es de %f", Ril);
        ω=2*PI*frectraba;
        XC=1/(ω*Ima);
        printf("\nEs capacitivo y su capacitancia es: %f", XC);
    }
    else if(Ima>0)
    {
        printf("La resistencia es de %f", Ril);
        ω=2*PI*frectraba;
        XL=ω*Ima;
        printf("\nEs inductivo y su inductancia es: %f", XL);
    }
    return 0;
}


