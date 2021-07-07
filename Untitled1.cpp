#include <stdio.h>
#include <stdlib.h>

int prime[10000];
int primeCount=0;

bool isCoprime(long long int a, long long int b){
	int i;
	for(i=0;i<1000;i++){
		if(a%prime[i]==0 && b%prime[i]==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	long long int a,b;
	int i,j,k;
	double result=0;
	for(i=2;i<10000;i++){
		k=0;
		for(j=0;j<primeCount;j++){
			if(i%prime[j] == 0){
				k++;
			}
		}
		if(k==0){
			prime[primeCount]=i;
			primeCount++;
		}
	}
	
	j=0;
	for(i=0;i<100000;i++){
		a=rand()%(1<<12);
		b=rand()%(1<<12);
		if(isCoprime(a,b)){
			j++;
		}
	}
	printf("%d %d %f\n",j,100000,(double)j/100000.0);
}
