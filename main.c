#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float num=0,num2=0, res=1;
    int op;
    int enter = 1;

    printf("\nDigite o n�mero: ");
    scanf(" %f", &res);

    do{
        printf("\nDigite a opera��o \n 1-soma  2-Subtra��o\n 4-Divis�o  3-Multiplica��o\n");
        scanf(" %d", &op);
        printf("\nDigite o n�mero: ");
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
                printf("Erro!, divis�o por 0");
            }
            break;
        default:
            printf("Op inv�lido!");
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
