#include <stdio.h>

int main(){

//minha intenção nessas variaveis é que o jogador incira dados que determine a "força" da carta

    char estado1 = 'R';
    char estado2 = 'M';
    char codigo1[] = "R1";
    char codigo2[] = "M1";
    char cidade1 [20]; 
    char cidade2 [20];
    int populacao1, populacao2, pturistico1, pturistico2; //"pturistico" é a quantidade de pontos turistico.
    float area1, area2, pib1, pib2;


    printf("========================================\n");
    printf("    !!BEM VINDO AO JOGO SUPER TRUNFO!!    \n ");
    printf("========================================\n");

    printf("VOCÊ ACABOU DE GANHAR DUAS CARTAS\n\n\n");

    printf("-----------------------------------------------\n");
    printf("    AGORA VAMOS CADASTRAR SUAS CARTAS:\n"       );
    printf("-----------------------------------------------\n\n\n");
    
    //estado e codigo da carta.
    printf("====PRIMEIRA CARTA====\n");
    printf("ESTADO:%c\n", estado1);
    printf("CODIGO DA CARTA:%s\n", codigo1);

    //cadastro da primeira carta
    printf("Escolha o nome de uma cidade do estado de Rondônia:\n ");
    scanf("%s", &cidade1);

    printf("Quantidade de Habitantes:\n");
    scanf("%d", &populacao1);
    
    printf("Qual o tamanho da sua cidade em km²:\n");
    scanf("%f", &area1);
    
    printf("Quantos pontos turisticos:\n");
    scanf("%d", &pturistico1);
    
    printf("Qual o PIB:\n");
    scanf("%f", &pib1);
    printf("\n\n\n");
    //VAMOS AGORA CADASTRAR A SEGUNDA CARTA

    printf("====SEGUNDA CARTA====\n\n");

        //estado e codigo da carta.
        printf("ESTADO:%c\n", estado2);
        printf("CODIGO DA CARTA:%s\n", codigo2);
    
        //cadastro segunda carta
        printf("Escolha o nome de uma cidade do estado de MINAS GERAIS:\n");
        scanf("%s", &cidade2);
    
        printf("Quantidade de Habitantes:\n");
        scanf("%d", &populacao2);
        
        printf("Qual o tamanho da sua cidade em km²:\n");
        scanf("%f", &area2);
        
        printf("Quantos pontos turisticos:\n");
        scanf("%d", &pturistico2);
        
        printf("Qual o PIB:\n");
        scanf("%f", &pib2);
         // Exibição dos dados cadastrados
    printf("=================================================\n");
    printf("       PARABÉNS! SUAS CARTAS ESTÃO PRONTAS      \n");
    printf("=================================================\n\n");

        //dados da primeira carta
        printf("---------------------------------\n");
    printf("CARTA:01\n");    
    printf("%c\n", estado1);
    printf("%s\n", codigo1);
    printf(" Cidade:%s\n Habitantes:%d\n Area(Km²):%f\n Pontos Turisticos:%d\n PIB:%f\n", cidade1, populacao1, area1, pturistico1, pib1);
    printf("---------------------------------\n\n\n");



    //dados da segunda carta
    printf("---------------------------------\n");
    printf("CARTA:02\n");    
    printf("%c\n", estado2);
    printf("%s\n", codigo2);
    printf("Cidade:%s\nHabitantes:%d\nArea(Km²):%f\nPontos Turisticos:%d\nPIB:%f\n", cidade2, populacao2, area2, pturistico2, pib2);
    printf("---------------------------------");



return 0;




}