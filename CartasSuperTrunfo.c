#include <stdio.h>

int main() {
    //variáveis carta 1

    char pais1[20];
    char estado1[20];
    char cidade1[20];
    float area1;
    unsigned long int pib1;
    int p_turisticos1;
    unsigned int populacao1;
    float pib_per_capta1;
    float densidade_demografica1;
    long double superpoder1;

    //cadastro da carta 1
    printf("***Desafio Super Trunfo***\n");
    printf("Cadastre suas cartas: \n");
    printf("Vamos começar: \nDigite abaixo o nome do país:\n");
    scanf("%s", &pais1);
    printf("Digite o estado (sigla): \n");
    scanf("%s", &estado1);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);
    printf("Qual a população de %s-%s?\n", cidade1, estado1);
    scanf("%d", &populacao1);
    printf("Insira a área(em km²): \n");
    scanf("%f", &area1);
    printf("Insira o PIB:\n");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &p_turisticos1);


    //cálculo de densidade demográfica e renda-per-capta / ano carta 1
    densidade_demografica1 = (float) populacao1 / area1;
    pib_per_capta1 = (float) pib1 / (float) populacao1;

    //calculo de superpoder

    superpoder1 = (float) populacao1 + (float) area1 + (float) p_turisticos1 + pib1 + pib_per_capta1 + densidade_demografica1;

    // mostrar os dados da carta cadastrada
    printf("Carta cadastrada com sucesso\n");
    printf("País: %s \nCidade: %s-%s\n",pais1, cidade1, estado1);
    printf("Os atributos são:\n");
    printf("- População: %d\n- Área: %.2fkm²\n- PIB: %f\n- Pontos turísticos(Qtd): %d\n- Densidade demográfica: %.2f hab/km²\n- Renda-per-capta: %.2f\n", populacao1, area1, pib1, p_turisticos1, densidade_demografica1, pib_per_capta1);
    printf("O super-poder da sua carta é de %f\n", superpoder1);

    //cadastro carta 2

    //variáveis carta 2

    char pais2[20];
    char estado2[20];
    char cidade2[20];
    float area2;
    unsigned long int pib2;
    int p_turisticos2;
    unsigned int populacao2;
    float pib_per_capta2;
    float densidade_demografica2;
    double superpoder2;
    
    printf("***Desafio Super Trunfo***\n");
    printf("Cadastre suas cartas: \n");
    printf("Vamos começar: \nDigite abaixo o nome do país:\n");
    scanf("%s", &pais2);
    printf("Digite o estado (sigla): \n");
    scanf("%s", &estado2);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);
    printf("Qual a população de %s-%s?\n", cidade2, estado2);
    scanf("%d", &populacao2);
    printf("Insira a área(em km²): \n");
    scanf("%f", &area2);
    printf("Insira o PIB:\n");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &p_turisticos2);

    //cálculo de densidade demográfica e renda-per-capta / ano (carta 2)
    densidade_demografica2 = (float)populacao2 / area2;
    pib_per_capta2 = pib2 / (float) populacao2;

    // mostrar os dados da carta cadastrada (carta 2)
    printf("Carta cadastrada com sucesso\n");
    printf("País: %s \nCidade: %s-%s\n",pais1, cidade1, estado1);
    printf("Os atributos são:\n");
    printf("- População: %d\n- Área: %.2fkm²\n- PIB: %f\n- Pontos turísticos(Qtd): %d\n- Densidade demográfica: %e/km²\n- Renda-per-capta: %.2f\n", populacao1, area1, pib1, p_turisticos1, densidade_demografica1, pib_per_capta2);
    printf("O super-poder da sua carta é de %f\n", superpoder2);







    return 0;

}