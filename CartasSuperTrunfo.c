// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
#include <stdio.h>

int main()
{
char Estate1[50], Estate2[50]; //nome do estado
char CodeCard1[50], CodeCard2[50];   //codigo da carta
char NameCity1[50], NameCity2[50];  //nome da cidade
int Population1, Population2;   //populacao
int Area1, Area2;   //area
float GDP1, GDP2;    //PIB
int Tourist1, Tourist2;     //numero de Pontos Turisticos

printf("CADASTRANDO A PRIMEIRA CARTA\n");

printf("Digite uma letra de 'A' a 'H'(Representando um dos oito estados: Acre: A, Alagoas: B, Amapá: C, Amazonas: D, Bahia: E, Ceará: F, Espírito Santo: G, Minas Gerais: H): \n");
scanf("%s", Estate1);

printf("Digite o codigo da carta: \n");
scanf("%s", CodeCard1);

printf("Digite o nome da cidade: \n");
scanf("%s", NameCity1);

printf("Digite a populacao: \n");
scanf("%d", &Population1);

printf("Digite os KMs Quadrados da Área: \n");
scanf("%d", &Area1);

printf("Digite o PIB: \n");
scanf("%f", &GDP1);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &Tourist1);

printf("\n");
printf("CADASTRANDO A SEGUNDA CARTA\n");
printf("\n");

printf("Digite uma letra de 'A' a 'H'(Representando um dos oito estados: Acre: A, Alagoas: B, Amapá: C, Amazonas: D, Bahia: E, Ceará: F, Espírito Santo: G, Minas Gerais: H): \n");
scanf("%s", Estate2);

printf("Digite o codigo da carta: \n");
scanf("%s", CodeCard2);

printf("Digite o nome da cidade: \n");
scanf("%s", NameCity2);

printf("Digite a populacao: \n");
scanf("%d", &Population2);

printf("Digite os KMs Quadrados da Área: \n");
scanf("%d", &Area2);

printf("Digite o PIB: \n");
scanf("%f", &GDP2);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &Tourist2);

printf("\n");
printf("Cartas cadastradas com sucesso!\n");
printf("\n");

printf("CARTA 1\n"); //Exibe os dados da primeira carta
printf("Estado: %s\n", Estate1);
printf("Código da Carta: %s%s\n", Estate1, CodeCard1);
printf("Nome da Cidade: %s\n", NameCity1);
printf("População: %d\n", Population1);
printf("Área: %d\n", Area1);
printf("PIB: %.2f\n", GDP1);
printf("Número de Pontos Turísticos: %d\n", Tourist1);
printf("\n");
printf("\n");
printf("CARTA 2\n"); //Exibe os dados da segunda carta
printf("Estado: %s\n", Estate2);
printf("Código da Carta: %s%s\n", Estate2, CodeCard2);
printf("Nome da Cidade: %s\n", NameCity2);
printf("População: %d\n", Population2);
printf("Área: %d\n", Area2);
printf("PIB: %.2f\n", GDP2);
printf("Número de Pontos Turísticos: %d\n", Tourist2);


    return 0;
}
