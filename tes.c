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
int opcao; // criei uma variavel opção para criar o menu principal.
int atributo, atributo2;
int resultado1, resultado2;
int resultadogeral, soma1, soma2;


	printf("Menu principal\n");
	printf("1. Iniciar Jogo \n");
	printf("2. Ver Regras\n");
	printf("Escolha uma opção: ");
	scanf("%d", &opcao);

switch (opcao) {

//primeira parte da estruturação da 1º carta
case 1:
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
    
    // calculos carta 1
    
    densidadepop = (float) populacao / area; // aqui esta a formula da divisao entre duas variaves ! densidade populacional
    
    pibpercapita = (float) pib / populacao; // aqui esta a formula da divisao para achar o pib percapita-
    
     
 
    
    
     
      //------------------------ separação segundo codigo-----------------------------------
    
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
        
    pibpercapita2 = (float) pib2 / populacao2; // aqui esta a formula da divisao para achar o pib percapita- segunda carta
   


       	
    
    //comparando as cartas
    
    	printf("\n---Escolha o Primeiro atributo a comparar!---\n");
	printf("1. População:\n");
	printf("2. Área:\n");
	printf("3. PIB\n");
	printf("4. Numero pontos turísticos\n");
	printf("5. Densidade Populacional\n");
	printf("6. Pib percapita\n");
	printf("Digite um numero: ");
	scanf("%d", &atributo); // criei uma variavel atributo para poder criar essa estrutura switch
	
	soma1 = resultado1;
soma2 = resultado2;
	switch (atributo){
	case 1:
	 printf("Você escolheu o atributo População!\n");
	    resultado1 = populacao > populacao2 ? 1 : 0;
	    printf("A População de %s é de %d e a de %s é de %d!\n", cidade, populacao, cidade2, populacao2);
	  break;
	   
	  

    case 2:
    printf("Você escolheu o atributo Area!\n");
	  resultado1 =  area > area2 ? 1 : 0;
    printf("A area de %s é de %.2f e a de %s é de %.2f!\n", cidade, area, cidade2, area2);
	  break;
	  

	case 3:
	
     printf("Você escolheu o atributo Pib!\n");
	   resultado1 = pib > pib2 ? 1 : 0;
	    printf("O Pib de %s é de %.2f e a de %s é de %.2f!\n", cidade, pib, cidade2, pib2);
	  break;
	
	case 4:
		
	printf("Você escolheu o atributo Número Pontos turisticos!\n");
	    resultado1 = numero > numero2 ? 1 : 0;
	    printf("O Número de pontos turisticos de %s é de %d e a de %s é de %d!\n", cidade, numero, cidade2, numero2);
	  break;
	  
	case 5:
		
    printf("Você escolheu o atributo Densidade Populacional!\n");
	   resultado1 = densidadepop < densidadepop2 ? 1 : 0;
	    printf("A densidade Populacional de %s é de %.2f e a de %s é de %.2f!\n", cidade, densidadepop, cidade2, densidadepop2);
	  break;
	  
	case 6:
		
    printf("Você escolheu o atributo Pib Percapita!\n");
	    resultado1 = pibpercapita > pibpercapita2 ? 1 : 0;
	    printf("O Pib percapita de %s é de %.2f e a de %s é de %.2f!\n", cidade, pibpercapita, cidade2, pibpercapita2);
	  break;
		
		default:
			printf("Opção invalida\n");
	  break;
	}
	
	printf("\n---Escolha o Segundo atributo a comparar!---\n");
	printf("1. População:\n");
	printf("2. Área:\n");
	printf("3. PIB\n");
	printf("4. Numero pontos turísticos\n");
	printf("5. Densidade Populacional\n");
	printf("6. Pib percapita\n");
	printf("Digite um numero: ");
	scanf("%d", &atributo2);
 
  if (atributo == atributo2)
  {
  	printf("Você escolheu o mesmo atributo!\n");
  }
	switch (atributo2){
		case 1:
	    printf("Você escolheu o atributo População!\n");
	    resultado2 =  populacao > populacao2 ? 1 : 0;
	    printf("A População de %s é de %d e a de %s é de %d!\n", cidade, populacao, cidade2, populacao2);
	   break;
	   
	  

   case 2:
    printf("Você escolheu o atributo Area!\n");
	   resultado2 =  area > area2 ? 1 : 0;
       printf("A area de %s é de %.2f e a de %s é de %.2f!\n", cidade, area, cidade2, area2);
	  break;
	  

	case 3:
	
     printf("Você escolheu o atributo Pib!\n");
	    resultado2 = pib > pib2 ? 1 : 0;
	    printf("O Pib de %s é de %.2f e a de %s é de %.2f!\n", cidade, pib, cidade2, pib2);
	  break;
	
	case 4:
		
	printf("Você escolheu o atributo Número Pontos turisticos!\n");
	    resultado2 =  numero > numero2 ? 1 : 0;
	    printf("O Número de pontos turisticos de %s é de %d e a de %s é de %d!\n", cidade, numero, cidade2, numero2);
	  break;
	  
	case 5:
		
    printf("Você escolheu o atributo Densidade Populacional!\n");
	    resultado2 = densidadepop < densidadepop2 ? 1 : 0;
	    printf("A densidade Populacional de %s é de %f e a de %s é de %f!\n", cidade, densidadepop, cidade2, densidadepop2);
	  break;
	  
	case 6:
		
    printf("Você escolheu o atributo Pib Percapita!\n");
	   resultado2 = pibpercapita > pibpercapita2 ? 1 : 0;
	    printf("O Pib percapita de %s é de %f e a de %s é de %f!\n", cidade, pibpercapita, cidade2, pibpercapita2);
	  break;
		
		default:
			printf("Opção invalida\n");
	  break;
	  
	 
}

     	
	    if (resultado1 && resultado2){
	    	printf("A cidade de %s venceu com %d pontos!\n", cidade, soma1);
		} else if (resultado1 != resultado2){
			printf("Empate!\n");
		} else {
			printf("A cidade de %s venceu com %d pontos!\n", cidade2, soma2);
		}
	
	
	
	
	    printf("\n---Imprimir dados das cartas?---\n");
	    printf("7. Sim\n");
	    printf("8. Não\n");
	    printf("Digite um número: ");
	    scanf("%d", &resultadogeral);
	    
	switch (resultadogeral) {
		
	case 7:	   // Impressão primeira carta
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
    printf("Densidade populacional: %f\n", densidadepop); // coloquei para imprimir na primeira tela como um dado adicional, para o jogar ficar ciente que tem esse dado
    printf("Pib Percapita: %f\n", pibpercapita); // aqui tambem coloquei para imprimir para ficar ciente desse dado adicional
    
    
     // Impressão segunda carta
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
    
    break;
    
    case 8: 
    printf("Até Breve\n");
    break;
}
break;
case 2:
	printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
	break;

default:
	printf("Opção invalida!\n");
	
}
 return 0;
 
}
