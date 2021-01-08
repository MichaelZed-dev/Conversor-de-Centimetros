#include <stdio.h>

int main(){
    
    int metros, centimetros;


    printf("Insira o valor em metros a ser convertido em centimetros: ");
    scanf("%d", &metros);

    centimetros = (metros * 100); 

    printf("%d Metros = %d centimetros", metros, centimetros);
}