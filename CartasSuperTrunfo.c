#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //variáveis
    char pais[20];
    char estado[20];
    char cidade[20];
    float area;
    float pib;
    int p_turisticos;
    int populacao;
    double renda_per_capta;
    double densidade_demografica;


    //cadastro da carta 
    printf("***Desafio Super Trunfo***\n");
    printf("Cadastre suas cartas: \n");
    printf("Vamos começar: \nDigite abaixo o nome do país:\n");
    scanf("%s", &pais);
    printf("Digite o estado (sigla): \n");
    scanf("%s", &estado);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade);
    printf("Qual a população de %s-%s?\n", cidade, estado);
    scanf("%d", &populacao);
    printf("Insira a área(em km²): \n");
    scanf("%f", &area);
    printf("Insira o PIB:\n");
    scanf("%f", &pib);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &p_turisticos);

    //cálculo de densidade demográfica e renda-per-capta / ano
    densidade_demografica = (float)populacao / area;
    renda_per_capta = pib / (float) populacao;

    // mostrar os dados da carta cadastrada
    printf("Carta cadastrada com sucesso\n");
    printf("País: %s \nCidade: %s-%s\n",pais, cidade, estado);
    printf("Os atributos são:\n");
    printf("- População: %d\n- Área: %.2fkm²\n- PIB: %f\n- Pontos turísticos(Qtd): %d\n- Densidade demográfica: %e/km²\n- Renda-per-capta: %.2f\n", populacao, area, pib, p_turisticos, densidade_demografica, renda_per_capta);





    return 0;
    
}
