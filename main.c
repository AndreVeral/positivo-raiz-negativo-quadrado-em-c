#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Dado um número maior ou igual a zero, calcular raiz quadrada, caso contrário, calcular o quadrado desse número*/
int main() {
    double numero;
    double resultado;
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Digite um número diferente de zero\n");
    scanf("%lf", &numero);
if(numero >= 0){
    resultado = sqrt(numero);
    wprintf(L"A raiz quadrada de %f é %f", numero, resultado);
}else{
    resultado = pow(numero, 2);
    wprintf(L"O quadrado de %f é %f", numero, resultado);
}
    return 0;
}