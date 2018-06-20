// Calculates a broker's commission 
#include <stdio.h>
int main(){
	float commission ,value;

	//prinf("Enter value of  trade:");
	//scanf("%f",&value)
	value=11111;

    if (value<2500.00)
    	{commission = 30.0 +.017*value;}
    else if (value<6250.00)
    	{commission = 56.0 +.0066*value;}
    else 
    	{commission = 255 + .0009*value;	}

    if (commission < 39)
    	{commission == 39.00;	}

    printf("commission: $%.2f\n",commission);

    return 0;


}