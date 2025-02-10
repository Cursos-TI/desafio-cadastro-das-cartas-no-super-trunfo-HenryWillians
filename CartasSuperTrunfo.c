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
    double pib;
    int p_turisticos;


    //cadastro da carta 
    printf("Desafio Super Trunfo:\n");
    printf("Cadastre suas cartas: \n");
    printf("Vamos começar: \nDigite abaixo o nome do país:");
    scanf("%s", pais);
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Digite a cidade: \n");
    scanf("%s", cidade);
    printf("Insira a área: \n");
    scanf("%e", area);
    printf("Insira o PIB:\n");
    scanf("%f", pib);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", p_turisticos);

    // mostrar os dados da carta cadastrada
    printf("Carta cadastrada com sucesso\n");
    printf("País: %s \nEstado: %s \nCidade: %s",pais, estado, cidade);
    



    return 0;
}
