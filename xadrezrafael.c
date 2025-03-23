#include <stdio.h>

int main(){

//minha intenção nessas variaveis é que o jogador incira dados que determine a "força" da carta

    char estado1 = 'R', estado2 = 'M';
    char codigo1 = "R1", codigo2 = "M1";
    char cidade1, cidade2 [20];
    int pupulação1, população2, pturistico1, pturistico2; //"pturistico" é a quantidade de pontos turistico.
    float area1, area2, pib1, pib2;

    printf("BEM VINDO AO JOGO SUPER TRUNFO");
    printf("\n\n");
    printf("VOCÊ ACABOU DE GANHAR DUAS CARTAS\n");
    printf("AGORA VAMOS UPAR A PRIMEIRA:\n");
    printf("AGORA VC IRA ATRIBUIR OS STATUS DA SUA NOVA CARTA\n");
    printf("%c", estado1);
    printf("%s",codigo1);
    printf("Escolha o nome de uma cidade do estado de rondonia:%s");
    scanf("%s", cidade1);
    printif("Quantidade de Habitantes:\n");
    scanf("%d", &pupulação1);
    printf("Qual o tamanho da sua cidade:\n");
    scanf("%f", area1);
    printf("Quantos pontos turisticos:\n");
    scanf("%d", pturistico1);
    printf("Qual o PIB:\n");
    scanf("%f", &pib1);
    //aqui acabei a parte em que o jogador ira inserir os dados de sua carta1

    printf("PARABÉNS!!, SUA NOVA CARTA ESTA PRONT");
    printf("\n\n");
    printf("%c", estado1);
    printf("%s",codigo1);
    printf("Cidade: %s, Habitantes:%d, Area(Km²):%f, Pontos Turisticos:%d, PIB:%d");


return 0;




}