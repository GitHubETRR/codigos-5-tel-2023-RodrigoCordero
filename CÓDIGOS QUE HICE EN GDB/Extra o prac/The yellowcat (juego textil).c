#include <stdio.h>
#include <math.h>

int main()
{
    float yellowcat, caminopared, brillo=0;
printf("Esto es: JUEGAZO TEXTIL, situaciones reales donde podes elegir qué hacer, solo acciones que alguien normal haría.");
printf("\nCaminas por un bosque y ves un gato amarillo, dice que va a contarte tu pasado, el cual no sabes.");
printf(" ¿Qué hacés? 1:te lo comes, andás con hambre. \n2: le decis que te lo cuente.");
scanf("%f", &yellowcat);
if (yellowcat==1)
{
    printf("¡FELICIDADES! Muy rico aunque pastoso, te volves asiático y te volves amarillo como el gato");
    printf("\nAhora, seguis caminando y ves 2 caminos, uno peligroso con 10 tiburones, uno seguro con agua de almendras y uno con una pared, sin salida.");
    printf("\n¿Qué camino elegís? 1, 2 o 3.");
    scanf("%f", &caminopared);
    
        if (caminopared==1)
    {
       printf("Te mata un tiburón... Inútil.");
    }
    else if(caminopared==2)
    {
       printf("Tomás agua de almendras sin sospechar de su color sangre y moris... Inútil");
    }
    else if(caminopared==3)
    {
       printf("Estrellas tu cabeza con la pared y se rompe, felicidades. La hemorragia es curada por la alegría.");
       printf("\nQueda tu destino final. ¿Qué elegís? 1: terminar la escuela. 2: matar un gato amarillo. 3: hacer música");
        scanf("%f", &brillo);   
           if (brillo==1)
    {
        printf("\nBien, lástima que es un mundo postapocalíptico. Decidis tirarte de un puente y no hay, sos un inútil.");
    }
    else if(brillo==2)
    {
      printf("No debes ser muy inteligente... El gato te come, ni eso podes hacer. Sos un INÚTIL");
    }
    else if(brillo==3)
    {
      printf("Bien. Aunque no hay instrumentos en un mundo postapocalíptico, decidís tirarte de un puente y no hay, sos un inútil.");
    }
    }
}
else if(yellowcat==2)
{
    printf("¡FELICIDADES! El gato te dice que eras chef y paso seguido te come, era obvio que iba a pasar. Mala decisión.");
}
    return 0;
}


