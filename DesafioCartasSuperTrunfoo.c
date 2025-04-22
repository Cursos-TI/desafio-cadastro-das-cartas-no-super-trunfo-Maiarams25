#include <stdio.h>

int main() {

    //Variaveis da primeira carta
    char estado1;
    int codigo1 [05]; 
    char cidade1[20];
    int populacao1;
    float Area1;
    float PIB1;
    int PontosTuristico1;
    float DensidadePopulacional1;
    float PIBperCapita1;

    //Variaveis da segunda carta
    char estado2;
    int codigo2[05];
    char cidade2[20];
    int populacao2;
    float Area2;
    float PIB2;
    int PontosTuristico2;
    float DensidadePopulacional2;
    float PIBperCapita2;

    printf("**BEM VINDO AO JOGO SUPER TRIUNFO**\n");
    printf("\n");


    // Entrada dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Digite o estado da primeira carta: \n");
    scanf("%c", &estado1);

    printf("Digite o codigo1: \n");
    scanf("%s", &codigo1); 

    printf("Digite a cidade1: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao1 \n");
    scanf("%d", &populacao1);

    printf("Digite o Area1: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB1: \n");
    scanf("%f", &PIB1);

    printf("Digite o QTD de Pontos Turistico: \n");
    scanf("%d", &PontosTuristico1);
    printf("\n");

    // CALCULOS DA CARTA 1 
    DensidadePopulacional1 = (float)populacao1 / Area1; 
    PIBperCapita1 = PIB1 / populacao1;


    // Entrada dos dados da segunda carta
    printf("Dados da segunda carta\n");
    printf("Digite o estado da carta2: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo2: \n");
    scanf("%s", &codigo2); 

    printf("Digite a cidade2: \n");
    scanf("%s", cidade2);

    printf("Digite a populacao2 \n");
    scanf("%d", &populacao2);

    printf("Digite o Area2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);

    printf("Digite o QTD de Pontos Turistico: \n");
    scanf("%d", &PontosTuristico2);
    printf("\n");

    // CALCULOS DA CARTA 2  
    DensidadePopulacional2 = (float)populacao2 / Area2; 
    PIBperCapita2 = PIB2 / populacao2;



    // EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA
    printf("estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area1: %f\n", Area1);
    printf("PIB1: %f\n", PIB1);
    printf("Pontos Turistico: %d\n", PontosTuristico1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1); 
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("\n");


    // EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA
    printf("estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area1: %f\n", Area2);
    printf("PIB1: %f\n", PIB2);
    printf("Pontos Turistico: %d\n", PontosTuristico2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2); 
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("\n");





    return 0;
}






