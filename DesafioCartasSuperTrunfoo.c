#include <stdio.h>

int main() {

    //Cadastro da primeira carta
    char estado1[20];
    int codigo1; 
    char cidade1[20];
    int populacao1;
    float Km1;
    float PIB1;
    int PontosTuristico1;

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Digite o codigo1: \n");
    scanf("%d", &codigo1); 

    printf("Digite a cidade1: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao1 \n");
    scanf("%d", &populacao1);

    printf("Digite o Km1: \n");
    scanf("%f", &Km1);

    printf("Digite o PIB1: \n");
    scanf("%f", &PIB1);

    printf("Digite o QTD de Pontos Turistico: \n");
    scanf("%d", &PontosTuristico1);

    printf("estado: %s - codigo: %d\n", estado1, codigo1); 
    printf("cidade: %s - populacao: %d - Km: %f\n", cidade1, populacao1, Km1);
    printf("PIB: %f - PontosTuristico: %d\n", PIB1, PontosTuristico1);

    return 0;
}






