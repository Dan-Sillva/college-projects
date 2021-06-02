#include<stdio.h>
#include<stdlib.h>

// Nome da Atv: Linha na Matriz

int main () {
	
	float M[12][12], med, r=0;
	int L;
	char T[2];
	
	scanf("%d", &L);
	scanf("%s", &T);
	
	for(int a=0;a<12;a++){
		for(int b=0;b<12;b++){
			scanf("%f", &M[a][b]);
			//M[a][b] = rand () % 10;
			
			if(a == L){
				r += M[a][b];
			}
		}
	}
	
	if(T[0] == 'S'){
		printf("%.1f", r);
	} else if (T[0] == 'M') {
		med = r / 12;
		printf("%.1f", med);
	}
	
}

