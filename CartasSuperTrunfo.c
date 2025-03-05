#include <stdio.h>

int main() {
    //variáveis carta 1

    char pais1[20], estado1[20], cidade1[20];
    float area1, pib_per_capta1, densidade_demografica1;
    unsigned long long int pib1;
    int p_turisticos1;
    unsigned int populacao1;
    double superpoder1;

    //cadastro da carta 1
    printf("***Desafio Super Trunfo***\n");
    printf("Cadastre suas cartas: \n");

    printf("Vamos começar com a carta 01: \nDigite abaixo o nome do país:\n");
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
    scanf("%llu", &pib1);

    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &p_turisticos1);


    //cálculo de densidade demográfica e renda-per-capta / ano carta 1
    densidade_demografica1 = (float) populacao1 / area1;
    pib_per_capta1 = (float) pib1 / (float) populacao1;

    //calculo de superpoder

    superpoder1 = (double) populacao1 + (double) area1 + (double) p_turisticos1 + (double) pib1 + (double) pib_per_capta1 + (double) densidade_demografica1;

    // mostrar os dados da carta cadastrada
    printf("Carta cadastrada com sucesso\n");
    printf("País: %s \nCidade: %s-%s\n",pais1, cidade1, estado1);
    printf("Os atributos são:\n");
    printf("- População: %d\n- Área: %.2fkm²\n- PIB: %llu\n- Pontos turísticos(Qtd): %d\n- Densidade demográfica: %.2f hab/km²\n- Renda-per-capta: %.2f\n", populacao1, area1, pib1, p_turisticos1, densidade_demografica1, pib_per_capta1);
    printf("O super-poder da sua carta é de %.2f\n", superpoder1);

    //cadastro da carta 02

    char pais2[20], estado2[20], cidade2[20];
    float area2, pib_per_capta2, densidade_demografica2;
    unsigned long long int pib2;
    int p_turisticos2;
    unsigned int populacao2;
    double superpoder2;

    //cadastro da carta 2
    
    printf("Cadastre a carta 02: \n");

    printf("Digite abaixo o nome do país:\n");
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
    scanf("%llu", &pib2);

    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &p_turisticos2);


    //cálculo de densidade demográfica e renda-per-capta / ano carta 1
    densidade_demografica2 = (float) populacao2 / area2;
    pib_per_capta2 = (float) pib2 / (float) populacao2;

    //calculo de superpoder

    superpoder2 = (double) populacao2 + (double) area2 + (double) p_turisticos2 + (double) pib2 + (double) pib_per_capta2 + (double) densidade_demografica2;

    // mostrar os dados da carta cadastrada
    printf("Carta cadastrada com sucesso\n");
    printf("País: %s \nCidade: %s-%s\n",pais2, cidade2, estado2);
    printf("Os atributos são:\n");
    printf("- População: %d\n- Área: %.2fkm²\n- PIB: %llu\n- Pontos turísticos(Qtd): %d\n- Densidade demográfica: %.2f hab/km²\n- Pib-per-capta: %.2f\n", populacao2, area2, pib2, p_turisticos2, densidade_demografica2, pib_per_capta2);
    printf("O super-poder da sua carta é de %.2f\n", superpoder2);


    //Comparação entre as cartas, a comparação será feita diretamente no printf por uma questão de otimização

    printf("Hora de comparar!\nVamos comparar a carta 01 com a carta 02: se o resultado for 1, a carta 1 venceu, se for 0, a carta 2 venceu!\n");

    printf("População, Carta 1 venceu: %d\n", populacao1 > populacao2);

    printf("Área, a carta 1 venceu: %d\n", area1 > area2);

    printf("Pib, a carta 1 venceu: %d\n", pib1 > pib2);

    printf("Pontos turísticos, a carta 1 venceu: %d\n", p_turisticos1 > p_turisticos2);

    printf("Densidade populacional, a carta 1 venceu: %d\n", densidade_demografica1 > densidade_demografica2);

    printf("PIB per Capita, a carta 1 venceu: %d\n", pib_per_capta1 > pib_per_capta2);

    printf("Super poder, a carta 1 venceu: %d\n", superpoder1 > superpoder2);

    printf("### Muito Obrigado por jogar o Super-trunfo! Te vejo na próxima ;D");


    return 0;

}