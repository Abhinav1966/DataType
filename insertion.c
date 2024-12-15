#include <stdio.h>

int main(){
	int LA[] = {2,4,5,6,7};
	int item = 10, k = 3, n = 5;
	int i=0, j =n;
	printf("Orignial array item:\n");
	
	for (i=0; i <n; i++){
		printf("LA[%d] = %d\n", i, LA[i]);
	}
	n = n+1;
	while ( j >k){
		LA[j+1] = LA[j];
		j = j-1;
	}
	LA[k] = item;
	
	printf("List after perfroming inserstion");
	for( i =0; i <n; i++){
		printf("LA[%d] =  %d\n", i, LA[i]);
	}
}
