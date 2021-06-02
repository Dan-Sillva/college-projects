#include<stdio.h>
#include<stdlib.h>

/*----------------------------------------------------------------------------------------------------------------------------------
	Fazer um algoritmo em C que preencha uma matriz de ordem 11 de números inteiros. O algoritmo deverá mostrar em um único arquivo,
	a matriz preenchida, uma matriz contendo somente os números inseridos na DP - Diagonal Principal, uma matriz contendo somente
	os números inseridos na DS - Diagonal Secundária e outra matriz contendo somente os números inseridos nas DP e DS. 
----------------------------------------------------------------------------------------------------------------------------------*/

void preencher (int M[11][11]);
void imprimirMatriz (int M[11][11]);
void imprimirDP (int M[11][11]);
void imprimirDS (int M[11][11]);
void imprimirDPeDS (int M[11][11]);

int main () {

	int M[11][11];
	
	preencher(M);
	
	printf("-matriz completa:-\n");
	imprimirMatriz(M);
	
	printf("-matriz diagonal principal:-\n");
	imprimirDP(M);
	
	printf("-matriz diagonal secundaria:-\n");
	imprimirDS(M);
	
	printf("-matriz diagonais principal e secundaria:-\n");
	imprimirDPeDS(M);
	
}

void preencher (int M[11][11]) {
	for(int a=0;a<11;a++){
		for(int b=0;b<11;b++){
			M[a][b] = rand () % 100;
		}
	}
}

void imprimirMatriz (int M[11][11]) {
	for(int a=0;a<11;a++){
		for(int b=0;b<11;b++){
			printf("[%3d]", M[a][b]);
		}
		printf("\n");
	}
	printf("\n");
}

void imprimirDP (int M[11][11]) {
	for(int a=0;a<11;a++){
		for(int b=0;b<11;b++){
			if(a == b){
				printf("[%3d]", M[a][b]);
			} else {
				printf("[ - ]");
			}	
		}
		printf("\n");
	}
	printf("\n");
}

void imprimirDS (int M[11][11]) {
	int aux = 10;
	for(int a=0;a<11;a++){
		for(int b=0;b<11;b++){
			if(b == aux){
				printf("[%3d]", M[a][b]);
			} else {
				printf("[ - ]");
			}	
		}
		aux--;
		printf("\n");
	}
	printf("\n");
}

void imprimirDPeDS (int M[11][11]) {
	int aux = 10;
	for(int a=0;a<11;a++){
		for(int b=0;b<11;b++){
			if(a == b || b == aux){
				printf("[%3d]", M[a][b]);
			} else {
				printf("[ - ]");
			}
		}
		aux--;
		printf("\n");
	}
	printf("\n");
}






