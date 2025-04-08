#include <stdio.h>

int main() {
    char estado_01[50];
    char cod_carta_01[10];
    char nome_cidade_01[10];
    int populacao_01;
    float area_km_01;
    float pib_01;
    int ponto_turistico_01;

    char estado_02[50];
    char cod_carta_02[10];
    char nome_cidade_02[10];
    int populacao_02;
    float area_km_02;
    float pib_02;
    int ponto_turistico_02;

    printf("Digite seu estado: ");
    scanf("%s", estado_01);
    printf("O estado é: %s\n", estado_01);

    printf("Digite cod. da carta: ");
    scanf("%s", cod_carta_01);
    printf("O cod da carta é: %s\n", cod_carta_01);

    printf("Digite nome da cidade: ");
    scanf("%s", nome_cidade_01);
    printf("A cidade é: %s\n", nome_cidade_01);

    printf("Digite populacao: ");
    scanf("%d", &populacao_01);
    printf("A populacao é: %d\n", populacao_01);

    printf("Digite area km: ");
    scanf("%f", &area_km_01);
    printf("A area km é: %.2f\n", area_km_01);

    printf("Digite PIB: ");
    scanf("%f", &pib_01);
    printf("O PIB é: %.2f\n", pib_01);
    
     printf("Digite seu estado: ");
    scanf("%s", estado_02);
    printf("O estado é: %s\n", estado_02);

    printf("Digite cod. da carta: ");
    scanf("%s", cod_carta_02);
    printf("O cod da carta é: %s\n", cod_carta_02);

    printf("Digite nome da cidade: ");
    scanf("%s", nome_cidade_02);
    printf("A cidade é: %s\n", nome_cidade_02);

    printf("Digite populacao: ");
    scanf("%d", &populacao_02);
    printf("A populacao é: %d\n", populacao_02);

    printf("Digite area km: ");
    scanf("%f", &area_km_02);
    printf("A area km é: %.2f\n", area_km_02);

    printf("Digite PIB: ");
    scanf("%f", &pib_02);
    printf("O PIB é: %.2f\n", pib_02);
    
    
    
    return 0;
}