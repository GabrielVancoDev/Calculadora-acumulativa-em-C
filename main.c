#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float num=0,num2=0, res=1;
    int op;
    int enter = 1;

    printf("\nDigite o número: ");
    scanf(" %f", &res);

    do{
        printf("\nDigite a operação \n 1-soma  2-Subtração\n 4-Divisão  3-Multiplicação\n");
        scanf(" %d", &op);
        printf("\nDigite o número: ");
        scanf(" %f", &num2);
        switch(op) {
        case 1:
            res +=num2;
            break;
        case 2:
            res -=num2;
            break;
        case 3:
            res *=num2;
            break;
        case 4:
            res /= num2;
            if(num==0){
                printf("Erro!, divisão por 0");
            }
            break;
        default:
            printf("Op inválido!");
            return 0;
            break;
        }
        printf("\nResultado parcial: %.2f", res);
        printf("\nDigite 0 para calcular: ");
        scanf(" %d", &enter);
    } while(enter != 0);

    printf("Resultado: %.2f", res);

    return 0;
}
