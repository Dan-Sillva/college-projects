#include<stdio.h>
#include<stdlib.h>

float maior(float a, float b);

int main (){ 

	printf("%f",maior(3,5));

}

float maior(float a, float b) {
	
	if(a > b){
		return a;
	} else {
		return b;
	}
	
}
