#include <stdio.h>
int main () {
    int escolha; //o valor guardado nessa variaavel
    printf("Escolha seu produto: 1 para agua, 2 para suco, 3 para vinho\n");
    scanf("%d", &escolha);
    switch (escolha) { //a variavel é testada
        case 1: 
            printf("Você escolheu água.\n");
            break;
        case 2:
            printf("Você escolheu suco.\n");
            break;
        case 3:
            printf("Você escolheu vinho.\n");
            break;
        default: // a case sempre tem um default, por que o programa para acima, visto que tem break e sempre tem que ter esse padrao, default
            printf("Opção inválida.\n");
            break;

            return 0;
    }
}