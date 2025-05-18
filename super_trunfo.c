#include <stdio.h>

int main() {
    
    //declarando variaveis primeira carta
char estado[100];
char codigo[100];
char cidade[100];
unsigned int populacao;
float area;
float pib;
int numero;
float densidadepop;
float pibpercapita;
float superpoder;





//primeira parte da estruturação da 1º carta

printf ("\n---Insira Dados da Primeira Carta---\n");

printf ("Digite seu Estado:");
    scanf("%s", &estado);

    printf ("Código da Carta:");
    scanf("%s", codigo);

    printf ("Cidade:");
    scanf("%s", cidade);

    printf ("População:");
    scanf("%u", &populacao);

    printf ("Área Total: ");
    scanf("%f", &area);
    
    printf ("PIB:");
    scanf("%f", &pib);
    
    printf ("Número de pontos Turísticos: ");
    scanf("%d", &numero);
    
    // calculos carta 1
    
    densidadepop = (float) populacao / area; // aqui esta a formula da divisao entre duas variaves ! densidade populacional
    
    pibpercapita = (float) pib / populacao; // aqui esta a formula da divisao para achar o pib percapita-
    
    superpoder = populacao + area + pib + numero + (1 / densidadepop) + pibpercapita;
    
 
    
    
     
      //------------------------ separação segundo codigo-----------------------------------
    
    //declarando variaveis segunda carta
    char estado2[100];
char codigo2[100];
char cidade2[100];
unsigned int populacao2;
float area2;
float pib2;
int numero2;
float densidadepop2;
float pibpercapita2;
float superpoder2;

//primeira parte da estruturação da 2º carta

printf ("\n---Insira Dados da Segunda Carta---\n");

printf ("Digite seu Estado:");
    scanf("%s", &estado2);

    printf ("Código da Carta:");
    scanf("%s", codigo2);

    printf ("Cidade:");
    scanf("%s", cidade2);

    printf ("População:");
    scanf("%u", &populacao2);

    printf ("Área Total: ");
    scanf("%f", &area2);
    
    printf ("PIB:");
    scanf("%f", &pib2);
    
    printf ("Número de pontos Turísticos: ");
    scanf("%d", &numero2);
    
    densidadepop2 = (float) populacao2 / area2; // aqui esta a formula da divisao entre duas variaves ! densidade populacional - segunda carta
        
    pibpercapita2 = (float) pib2 / populacao2; // aqui esta a formula da divisao para achar o pib percapita- segunda carta
   
    superpoder2 = populacao2 + area2 + pib2 + numero2 + (1 / densidadepop2) + pibpercapita2; // formula para calcular o super poder
    
    
    
       
    
    // Impressão primeira carta
    printf("\n--- Dados da primeira carta ---\n");
    printf("Estado: %s.\n.", estado);
    printf("Código: %s.\n", codigo);
    printf("Cidade: %s.\n", cidade);
    printf("População: %u.\n", populacao);
    printf("Área: %.2f km².\n", area);
    printf("PIB: %.2f\n.", pib);
    printf("Nº de Pontos Turísticos: %d\n.", numero);
    printf("Densidade populacional: %f\n.", densidadepop);
    printf("Pib Percapita: %f\n.", pibpercapita);
    printf("Densidade populacional: %f\n", densidadepop); // coloquei para imprimir na primeira tela como um dado adicional, para o jogar ficar ciente que tem esse dado
    printf("Pib Percapita: %f\n", pibpercapita); // aqui tambem coloquei para imprimir para ficar ciente desse dado adicional
    printf("Super Poder é: %f\n", superpoder);
    
     // Impressão segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s.\n", estado2);
    printf("Código: %s.\n", codigo2);
    printf("Cidade: %s.\n", cidade2);
    printf("População: %u.\n", populacao2);
    printf("Área: %.3f km².\n", area2);
    printf("PIB: %.2f.\n", pib2);
    printf("Nº de Pontos Turísticos: %d.\n", numero2);
    printf("Densidade populacional: %f\n.", densidadepop2);
    printf("Pib Percapita: %f\n.", pibpercapita2);
    printf("Super Poder é: %f\n", superpoder2);
    
   
   // definicao de variaveis para comparacao das cartas
   
   int comparapop = populacao >= populacao2;
   int comparaarea = area >= area2;
   int comparapib = pib >= pib2;
   int comparanumero = numero >= numero2;
   int comparadensidade = densidadepop <= densidadepop2;
   int comparapibpercapita = pibpercapita >= pibpercapita2;
   int comparasuperpoder = superpoder >= superpoder2;
    // comparação carta 1 e 2
    printf("\n--- Comparação das cartas ---\n");
    printf("População: %d\n", comparapop);
    printf("Area total: %d\n", comparaarea);
    printf("PIB: %d\n", comparapib);
    printf("Numero Pontos turisticos: %d\n", comparanumero);
    printf("Densidade popular: %d\n", comparadensidade);
    printf("Pib percapita: %d\n", comparapibpercapita);
    printf("Super poder: %d\n", comparasuperpoder);
    
     return 0;

}