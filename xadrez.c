#include <stdio.h>

int main() {

    printf("  \n*************************************");
    printf("\nSeja bem-vindo (a) ao Jogo de Xadrez! ");
    printf("\n*************************************");
   
    // ===========================
    // TORRE (for) – 5 casas à direita
    // ===========================
    printf("\n"); 
    // Digitar a saída
    printf("Movimento da TORRE: \n");
    // Entrada das variáveis     
    for(int i = 1; i <= 5; i++) {
       printf("Direita\n"); // Não incluir o incremento logo após o printf, pois ele já está dentro!
       
   }

    // ===========================
    // BISPO (while) – 5 casas na diagonal (Cima + Direita)
    // ===========================
    // Digitar a saída
    printf("\nMovimento do BISPO:\n");
    // Digitar as variáveis
    int casasB = 5;
    int contadorB = 1;
    // Digitar a condição 
    while(contadorB <= casasB) {
        printf("Cima e Direita\n"); // digitar o incremento logo após o printf;
        contadorB++;
    }

    // ===========================
    // RAINHA (do-while) – 8 casas à esquerda
    // ===========================
    
    // digitar as saídas
    printf("\nMovimento da RAINHA:\n");
    
    // Digitar as variáveis 
    int casasR = 8;
    int contadorR = 1;
    
    do {
        printf("Esquerda\n");
    // incluir o incremento para evitar o loop infinito    
        contadorR++; // Porque o incremento está aqui? pois está dentro do bloco!
        // caso eu coloque o incremento após o while ele entrará em loop infinito, porque ele entra na condição e sai do bloco! 
    }   while(contadorR <= casasR);
    
    // ===========================
    // CAVALO (for) – 2 casas para baixo e 1 casa para a esquerda formando um "L"
    // ===========================
    
    // Digitar as saídas
    
    printf("\nMovimento do CAVALO:\n");
    
    // Digitar o primeiro movimento: duas casas para "BAIXO"

    for(int i = 1; i <= 2; i++) { 
        printf("Baixo\n");
    // Digitar a variável que define a comparação 
    while(i == 2) { 
        printf("Esquerda\n"); //Não esquecer o incremento para evitar o loop infinito;
        i++;
    }
        
    }
    
    printf("\n"); // Para sair!


    return 0;
}
