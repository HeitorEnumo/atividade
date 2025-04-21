#include <stdio.h>

int main(){ 
    float ValorConta, porcentagem, gorjeta, totalPagar;
    
    printf("digite o valor da conta em R$");
    scanf("%f",&ValorConta);
    
    printf("digite o valor da porcentagem\n");
    scanf("%f", &porcentagem);
    
    gorjeta = ((porcentagem/100) * ValorConta);
    
    totalPagar = ValorConta + gorjeta;
    
    printf("total : %.2f", totalPagar);
    
}