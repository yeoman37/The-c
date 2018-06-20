#include <stdio.h>
int main(){
	/*printf("switch语句实际是一种“基于计算的跳转”。当计算控制表达式的数值时，控制跳到与switch表达式的值相匹配的情况标号处，\n
		情况标号只是说明switch内部位置的标记。在执行完情况中的最后一条语句后，程序控制“向下跳转”到下一种情况的第一条语句，而\n
		忽略下一种情况的标号。如没有break，程序控制将会从一种情况继续到下一种情况。") */
     /* Prints a date in legal form*/


		int month,day,year;

		printf("Enter date (mm/dd/yy):");
		scanf("%d %d %d",&month,&day,&year);

		printf("Dated this %d",day);
		switch(day){
			case 1:case 21:case 31:
			    printf("st");break;
			case 2:case 22:
				printf("nd");break;
			case 3:case 23:
				printf("rd");break;
			default: printf("th");break;		
		}

		printf(" day of ");

		switch (month){
			case 1:printf("January");break;
			case 2:printf("February");break;
			case 3:printf("March");break;
			case 4:printf("April");break;
			case 5:printf("May");break;
			case 6:printf("June");break;
			case 7:printf("July");break;
			case 8:printf("August");break;
			case 9:printf("September");break;
			case 10:printf("October");break;
			case 11:printf("November");break;
			case 12:printf("December");break;
		}

		printf(", 19%.2d.\n",year);

		return 0;

	}