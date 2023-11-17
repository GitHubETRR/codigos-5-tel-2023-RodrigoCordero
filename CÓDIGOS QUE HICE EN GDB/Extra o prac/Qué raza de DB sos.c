
#include <stdio.h>

int main ()
{
    float comer, persona, especial, publi, ego, pro, destiny, discri, puntaje=0;
  printf ("Acá te vamos a decir qué raza de Dragon Ball Z sos.");
  printf ("\n¿Te gusta comer mucho y no tenes obesidad? 1: no. 2:sí");
  scanf("%f", &comer);
    if (comer==1)
    {
        puntaje=0;
        printf("Sumas 0 puntos");
    }
    else if(comer==2)
    {
        puntaje==33;
        printf("Sumas 33 puntos");
    }
    printf("\n1: te sentís buena persona desde chico. 2: sentís que eras mala persona antes.\n");
    scanf("%f", &persona);
        if (persona==1)
    {
        printf("Sumas 0 puntos");
    }
    else if(persona=2)
    {
        puntaje+33;
        printf("Sumas 33 puntos");
    }
    printf("\n¿Sentiste algún día que tenías algo especial? 1: no y 2: sí.");
    scanf("%f", &especial);
            if (especial==1)
    {
        printf("Sumas 0 puntos");
    }
    else if(especial==2)
    {
        puntaje+33;
        printf("Sumas 33 puntos");
    }
    printf("\n¿Te incomodan los lugares públicos? 1: no. 2: sí");
    scanf("%f", &publi);
                if (publi==1)
    {
        printf("Sumas 0 puntos");
    }
    else if(publi==2)
    {
        puntaje+33;
        printf("Sumas 33 puntos");
    }
    printf("¿Tenés ego e instinto de batallas y disfrutas pelear? 1: no. 2: sí.");
    scanf("%f", &ego);
                if (ego==1)
    {
        printf("Sumas 0 puntos");
    }
    else if(ego==2)
    {
        puntaje+33;
        printf("Sumas 33 puntos");
    }
    printf("1: sos verde. 2: sos blanco y quizás hasta cornudo. 3: sos color piel.");
    scanf("%f", &discri);
                if (discri==1)
    {
        printf("Sumas 0 puntos");
    }
    else if(discri==2)
    {
        puntaje+33;
        printf("Sumas 33 puntos");
    }
    else if(discri==3);
    {
        puntaje+69;
        printf("Sumas 69 puntos.");
    }
    printf("¿Sos pro vida  o pro aborto");
    scanf("%f", &pro);
                if (pro==1)
    {
    
        printf("Sumas 0 puntos");
    }
    else if(pro==2)
    {
        puntaje+33;
        printf("Sumas 33 puntos");
    }
    printf("Elegí. 1: sos humano. 2: sos saiyajin. 3: sos de la raza de Freezer. 4: sos Namekuseín.");
    scanf("%f", &destiny);
                if (destiny==1)
    {
        printf("Sumas 0 puntos");
        printf("Sos humano. Tu puntaje es: %f", puntaje);
    }
    else if(destiny==2)
    {
        puntaje+33;
        printf("Sumas 33 puntos");
        printf("Sos saiyajin. Tu puntaje es: %f", puntaje);
    }
      else if(destiny==3)
    {
        puntaje+1967;
        printf("Sumas 1967 puntos");
        printf("Sos de la raza de Freezer. Tu puntaje es: %f", puntaje);
    }
      else if(destiny==4)
    {
        puntaje+2006;
        printf("Sumas 2006 puntos");
        printf("Sos namekuseín. Tu puntaje es: %f", puntaje);
    }
    
    return 0;
}

