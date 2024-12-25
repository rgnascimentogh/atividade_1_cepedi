#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float potencia(void){
    system("chcp 65001>null");
    int uni;
    float watts, kwatts, cv, pot;
    printf("\nEscolha a unidade de entrada: ");
    printf("\n1-Watts\n2-kWatts\n3-Cavalo-vapor(cv)\n");
    scanf("%d",&uni);
    printf("\nDigite a quantidade: ");
    scanf("%f",&pot);
    switch (uni)
    {
    case 1://define watts em kwatts e cv.
        kwatts = pot*1/1000;
        cv = pot*1/735.5;
        printf("\n%.2f kWatts",kwatts);
        printf("\n%.2f cv",cv);
        break;

    case 2://define kWatts em Watts e CV.
        watts = pot*1000;
        cv = pot/0.7355;
        printf("\n%.2f Watts",watts);
        printf("\n%.2f cv",cv);
        break;
    
    case 3://define cv em Watts e kWatts.
        watts = pot*735.5;
        kwatts = watts/1000;
        printf("\n%.2f Watts",watts);
        printf("\n%.2f cv",kwatts);
        break;
    
    default:
        break;
    }
}

void main(void){

    potencia();


    return 0;
}
