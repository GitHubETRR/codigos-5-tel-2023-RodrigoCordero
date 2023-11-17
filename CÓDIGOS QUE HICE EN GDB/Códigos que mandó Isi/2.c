#include <stdio.h>
#define CANT_MAX 5 

int main (void){
    char txt[]={'H','o','l','a',',','.',0};
    int i=0;
    while(txt[i])printf("%c",txt[i++]);    
    return 0;
}


