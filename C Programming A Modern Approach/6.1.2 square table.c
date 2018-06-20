#include<stdio.h>
int main(){
	printf("This program prints a table of squares.\n");
    int i = 1,n;
    printf("Enter number of entries in tabel:");
	scanf("%d",&n);

	while (i<=n){
		printf("%10d %10d\n",i++,i*i);
	}

	return 0;
}