#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {

    //definindo constantes
    #define LINHAS 10 
    #define COLUNAS 10

    int tabuleiro[LINHAS][COLUNAS]; //matriz do tabuleiro

    int n1[3] = {3, 3, 3}; //navio horizontal
    int n2[3] = {3, 3, 3}; //navio vertical
    int n3[3] = {3, 3, 3}; //navio diagonal direita
    int n4[3] = {3, 3, 3}; //navio diagonal esquerda

    //vetor com as letras da coluna, eixo y
    char colunas[11] = {' ','A','B','C','D','E','F','G','H','I','J'};

    printf("\n\n*** JOGO: BATALHA NAVAL ***\n\n");
    
    //cria um loop para mostrar as colunas de letras 
    for(int letras = 0; letras < 11; letras++){
        printf(" %c ", colunas[letras]);
    }
        printf("\n"); //pula uma linha apos as letras

    //inicializando as posições do tabuleiro com o valor 0
    for(int i = 0; i < LINHAS; i ++){ //faz o loop e preenche as linhas com i
        for(int j = 0; j < COLUNAS; j ++){//faz o loop e preenche as colunas com j
        tabuleiro[i][j] = 0; // i e j valem 0
        }
    }

    //criando a posição do navio 1 (horizontal)
    for(int posicaoN1 = 0; posicaoN1 < 3; posicaoN1 ++){
        tabuleiro[1][posicaoN1 + 6] = n1[posicaoN1]; //indice[2,G] [2,H] [2,I]
    }

    //criando a posição do navio 2 (vertical)
    for(int posicaoN2 = 0; posicaoN2 < 3; posicaoN2 ++){
        tabuleiro[posicaoN2 + 6][0] = n2[posicaoN2]; //indice[7,A] [8,A] [9,A]
    }

    //criando posição do navio 3 (diagonal direita)
    for(int posicaoN3 = 0; posicaoN3 < 3; posicaoN3 ++){
        tabuleiro[posicaoN3 + 3][8 - posicaoN3 ] = n3[posicaoN3]; //indice[6,G] [5,H] [4,I]
    }

    //criando posição do navio 4 (diagonal esquera)
    for(int posicaoN4 = 0; posicaoN4 < 3; posicaoN4 ++){
        tabuleiro[6 - posicaoN4][4 - posicaoN4] = n4[posicaoN4]; //indice[7,E] [6,D] [5,C]
    } 

    //mostrando no console
    for (int i = 0; i < 10; i++){  //loop para mostrar as linhas numéricas
        if(i <= 8){  //se o número for de apenas UM DIGITO, acrescenta um espaço á esquerda
        printf(" %d  ", i + 1);
        }else{printf("%d  ", i + 1);}; 

        for (int j = 0; j < 10; j++){  
        printf("%d  ", tabuleiro[i][j]);  //exibe o tabuleiro 10x10 (0 = água) (3 = navio)
        }
        printf("\n"); 
    }

    //mostra as coordenadas de cada navio
    printf("\nOs navios estão nas posições: \n");
    printf("(2, G) - (2, H) - (2, I) \n");
    printf("(5, C) - (6, D) - (7, E) \n");
    printf("(4, I) - (5, H) - (6, G) \n");
    printf("(7, A) - (8, A) - (9, A) \n\n");



    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
