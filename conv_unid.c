#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"conv.h" //puxa as macros do arquivo conv.h

float potencia(void){
    system("chcp 65001>null");
    int uni;
    float pot;
    printf("\nEscolha a unidade de entrada: ");
    printf("\n1-Watts\n2-kWatts\n3-Cavalo-vapor(cv)\n");
    scanf("%d",&uni);
    printf("\nDigite a quantidade: ");
    scanf("%f",&pot);
    switch (uni)
    {
    case 1://define watts em kwatts e cv.
        
        printf("\n%.2f Watts = %.2f kWatts",pot,WkW(pot));
        printf("\n%.2f Watts = %.2f CV",pot,WCV(pot));
        break;

    case 2://define kWatts em Watts e CV.
        
        printf("\n%.2f kWatts = %.2f Watts",pot,kWW(pot));
        printf("\n%.2f kWatts = %.2f CV",pot,kWCV(pot));
        break;
    
    case 3://define cv em Watts e kWatts.
        
        printf("\n%.2f CV = %.2f Watts",pot,CVW(pot));
        printf("\n%.2f CV = %.2f kWatts",pot,CVkW(pot));
        break;
    
    default:
        break;
    }
}



