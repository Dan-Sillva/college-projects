#include<stdio.h>
#include<stdlib.h>

// Nome da Atv: Linha na Matriz

int main () {
	
	float M[12][12], r=0, med;
	int x = 11;
	char O;
	
	scanf("%c",&O);
	
	for (int a=0;a<12;a++){
		for (int b=0;b<12;b++){
			scanf("%f", &M[a][b]);
		}
	}
	
	for(int a=1; a<12;a++){
        for(int b=11; b>=x;b--){
        	r += M[a][b];
		}    
		x--;
    }
    
	if(O == 'S'){
		printf("%.1f", r);
	} else if (O == 'M') {
		med = r / 66;
		printf("%.1f", med);
	}
	
}
