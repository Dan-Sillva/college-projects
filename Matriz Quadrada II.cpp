#include <stdio.h>

// Nome da Atv: Matriz Quadrada II

// k = constante de repetição
// o = variavel de controle do if
// p = variavel de atribuição do if

int main()
{
    int N, k, o=1, p=2;
    
    while (1) {
    	
    	scanf("%d", &N);
    	if(N==0) break;
    	else {
    		k = N - 1;
    		int matriz [N][N];
			for (int a=0; a<N; a++){
				for (int b=0; b<N; b++){
					matriz[a][b] = 99;
				}
			}
			for(int a=0;a<N;a++){matriz[a][a] = 1;}
			for (int j=0;j<k;j++) {
				for (int a=0; a<N; a++){
					for (int b=0; b<N; b++){
						
						if(matriz[a][b] == o){
							
							if(b != N-1){
								if(matriz[a][b+1] >= o){matriz[a][b+1] = p;}
							}
							if(b != 0){
								if(matriz[a][b-1] >= o){matriz[a][b-1] = p;}
							}
				
						}
						
					}
				}
				o++;
				p++;
			}
			for(int a=0; a<N; a++){
				for(int b=0; b<N; b++){printf("%3d",matriz[a][b]);}
				printf("\n");
			}
			printf("\n");
			o=1, p=2;
		}

	}
}

