#include<stdio.h>

#define N 10

int main(){
	int a[N],i;

	printf("Enter %d numbers:",N);
	for (i = 0;i<N;i++){
		scanf("%d",&a[i]);
	}

	printf("In reverse order:");
	for (i=N-1;i>=0;i--){
		printf(" %d",a[i]);
		if (i == 0) {
			printf("\n");
		}
	}


}