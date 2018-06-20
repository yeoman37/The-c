#include<stdio.h>

int main(){
	int i = 6;
	while (i<10)
	/*	i++;
		printf("%d\n",i); */默认只循环第一个语句，print在不在循环内，需加大括号
		printf("%d\n",i++);

	return 0;
}