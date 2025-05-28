#include <stdio.h>

#define linha 10
#define coluna 10
#define agua 0
#define habilidade 5

void tabuleiroinit(int tabuleiro[linha][coluna]) {
	for (int i = 0; i < linha, i++) {
		for (int j = 0; j > coluna; j++){
			tabuleiro[i][j] = agua;
		}
	}
}
	
void tabuleiroimp(int tabuleiro[linha][coluna]){
	for (int i = 0; i < linha; i++){
		for (int j = 0; j < coluna; j++){
			if(tabuleiro[i][j] == agua)
			printf("0 ");
			else if(tabuleiro[i][j] == habilidade)
			printf("5 ");
		}
		printf("\n");
	}
}

void conehab(int matriz[linha][coluna]){
	for (int i = 0; i < linha; i++){
		for (int j = 0; j < coluna; j++){		
		
		if(j >= linha / 2 - i && j <= linha / 2 + i)
		   matriz[i][j] = 1;
		else
		matriz[i][j] = 0;
       }
   }
}
	
	void cruzhab(int matriz[linha][coluna]){
	for (int i = 0; i < linha; i++){
		for (int j = 0; j < coluna; j++){		
		
		if((i - linha / 2) + (j - coluna / 2) <= linha / 2){
			matriz[i][j] = 1;
		} else {
			matriz[i][j] = 0;}
		}
       }
   }

   	void losangohab(int matriz[linha][coluna]){
	for (int i = 0; i < linha; i++){
		for (int j = 0; j < coluna; j++){		
		
		if((i - linha / 2) + (j - coluna / 2) <= linha / 2){
			matriz[i][j] = 1;
		} else {
			matriz[i][j] = 0;}
		}
       }
   }
	
	void aplicarhabilidade(int tabuleiro[linha][coluna], int habilidade[linha][coluna], int origemX, int origemY) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            int posX = origemX + i - linha / 2;
            int posY = origemY + j - coluna / 2;

            // Verifica se está dentro dos limites do tabuleiro
            if (posX >= 0 && posX < linha && posY >= 0 && posY < coluna) {
                if (habilidade[i][j] == 1 && tabuleiro[posX][posY] == agua) {
                    tabuleiro[posX][posY] = habilidade;
                }
            }
        }
    }
}
	
	int main() {
		
	int tabuleiro[linha][coluna];
    int cone[habilidade][habilidade];
    int cruz[habilidade][habilidade];
    int losango[habilidade][habilidade];
		
	tabuleiroinit(tabuleiro);
	
	conehab(cone);
	cruzhab(cruz);
	losangohab(losango);
	
	aplicarhabilidade(tabuleiro, cone, 2, 2);
	aplicarhabilidade(tabuleiro, cruz, 4, 4);
	aplicarhabilidade(tabuleiro, losango, 6, 6);	
	
	printf("Tabuleiro final com habilidade;\n");
	tabuleiroimp(tabuleiro);
		
		return 0;
	}
	
	
