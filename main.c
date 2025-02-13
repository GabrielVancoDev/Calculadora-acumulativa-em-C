#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float num2 = 0, res = 1;
    int op, continuar = 1;
    
    printf("\nDigite o número inicial: ");
    scanf("%f", &res);
    
    do {
        printf("\nEscolha a operação:\n");
        printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
        printf("Opção: ");
        scanf("%d", &op);
        
        printf("\nDigite o próximo número: ");
        scanf("%f", &num2);
        
        switch (op) {
            case 1:
                res += num2;
                break;
            case 2:
                res -= num2;
                break;
            case 3:
                res *= num2;
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro! Divisão por 0 não permitida.\n");
                    continue; // Volta ao início do loop
                }
                res /= num2;
                break;
            default:
                printf("Opção inválida!\n");
                continue;
        }
        
        printf("\nResultado parcial: %.2f\n", res);
        printf("Digite 0 para finalizar ou outro número para continuar: ");
        scanf("%d", &continuar);
    } while (continuar != 0);
    
    printf("\nResultado final: %.2f\n", res);
    return 0;
}
