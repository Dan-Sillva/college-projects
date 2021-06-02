#include<stdio.h>
#include<stdlib.h>

// Nome da Atv: Linha na Matriz

int main () {
	
	float M[12][12], r=0, med;
	char O[2];
	
	scanf("%s",&O);
	
	for (int a=0;a<12;a++){
		for (int b=0;b<12;b++){
			scanf("%f", &M[a][b]);
			
			if (b > a){
				r += M[a][b];
			}
		}
	}
	
	if(O[0] == 'S'){
		printf("%.1f", r);
	} else if (O[0] == 'M') {
		med = r / 66;
		printf("%.1f", med);
	}
	
}
