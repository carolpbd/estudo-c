#include <stdio.h>

// Função que utiliza um contador estático

void incrementaContador() {
    //Declarando contador estático
    static int contador = 0; // Variável estática para manter o valor entre chamadas
    //incrementando o contador
    contador++;
    // imprime o valor atual do contador
    printf("Contador: %d\n", contador);
}


int main () {
    // chama a função várias vezes pra demonstrar o contador estatico
    incrementaContador();
    incrementaContador();
    incrementaContador();
    incrementaContador();

    return 0;
}

// toda vez que a função é chamada, ela é incrementada (1,2,3,4), se deixasse só o int o valor seria sempre 1
// variaveis statics sao alocadas na area de dados do programa, otimização não se deve à velocidade de acesso 
// mas sim ao fato de que a variável não precisa ser recriada a cada chamada da função.