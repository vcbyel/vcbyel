#include <stdio.h>

int main() {
    
    //declarando variaveis primeira carta
char estado[100];
char codigo[100];
char cidade[100];
int populacao;
float area;
float pib;
int numero;
float densidadepop;
float pibpercapita;






//primeira parte da estruturação da 1º carta

printf ("\n---Insira Dados da Primeira Carta---\n");

printf ("Digite seu Estado:");
    scanf("%s", &estado);

    printf ("Código da Carta:");
    scanf("%s", codigo);

    printf ("Cidade:");
    scanf("%s", cidade);

    printf ("População:");
    scanf("%d", &populacao);

    printf ("Área Total: ");
    scanf("%f", &area);
    
    printf ("PIB:");
    scanf("%f", &pib);
    
    printf ("Número de pontos Turísticos: ");
    scanf("%d", &numero);
    
    densidadepop = (float) populacao / area; // aqui esta a formula da divisao entre duas variaves ! densidade populacional
    printf("Densidade populacional: %f\n", densidadepop); // coloquei para imprimir na primeira tela como um dado adicional, para o jogar ficar ciente que tem esse dado
    
    pibpercapita = (float) pib / populacao; // aqui esta a formula da divisao para achar o pib percapita-
    printf("Pib Percapita: %f\n", pibpercapita); // aqui tambem coloquei para imprimir para ficar ciente desse dado adicional
    
    
     // Impressão
    printf("\n--- Dados da primeira carta ---\n");
    printf("Estado: %s.\n.", estado);
    printf("Código: %s.\n", codigo);
    printf("Cidade: %s.\n", cidade);
    printf("População: %d.\n", populacao);
    printf("Área: %.2f km².\n", area);
    printf("PIB: %.2f\n.", pib);
    printf("Nº de Pontos Turísticos: %d\n.", numero);
    printf("Densidade populacional: %f\n.", densidadepop);
    printf("Pib Percapita: %f\n.", pibpercapita);
    
    //------------------------ separação segundo codigo------------------------------------
    
    //declarando variaveis segunda carta
    char estado2[100];
char codigo2[100];
char cidade2[100];
int populacao2;
float area2;
float pib2;
int numero2;
float densidadepop2;
float pibpercapita2;

//primeira parte da estruturação da 2º carta

printf ("\n---Insira Dados da Segunda Carta---\n");

printf ("Digite seu Estado:");
    scanf("%s", &estado2);

    printf ("Código da Carta:");
    scanf("%s", codigo2);

    printf ("Cidade:");
    scanf("%s", cidade2);

    printf ("População:");
    scanf("%d", &populacao2);

    printf ("Área Total: ");
    scanf("%f", &area2);
    
    printf ("PIB:");
    scanf("%f", &pib2);
    
    printf ("Número de pontos Turísticos: ");
    scanf("%d", &numero2);
    
     densidadepop2 = (float) populacao2 / area2; // aqui esta a formula da divisao entre duas variaves ! densidade populacional - segunda carta
    printf("Densidade populacional: %f\n", densidadepop2); // coloquei para imprimir na primeira tela como um dado adicional, para o jogar ficar ciente que tem esse dado - segunda carta
    
    pibpercapita2 = (float) pib2 / populacao2; // aqui esta a formula da divisao para achar o pib percapita- segunda carta
    printf("Pib Percapita: %f\n", pibpercapita2); // aqui tambem coloquei para imprimir para ficar ciente desse dado adicional - segunda carta
    
     // Impressão
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s.\n", estado2);
    printf("Código: %s.\n", codigo2);
    printf("Cidade: %s.\n", cidade2);
    printf("População: %d.\n", populacao2);
    printf("Área: %.3f km².\n", area2);
    printf("PIB: %.2f.\n", pib2);
    printf("Nº de Pontos Turísticos: %d.\n", numero2);
    printf("Densidade populacional: %f\n.", densidadepop2);
    printf("Pib Percapita: %f\n.", pibpercapita2);
    return 0;

}