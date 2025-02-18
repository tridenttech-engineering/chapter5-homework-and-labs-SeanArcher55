//lab5-6.cpp - displays a service charge, which is 1%
//of the purchase price; however, an additional $5 service
//charge should be added to code 2 purchases
//Created/revised by Sean Archer on 2-18-25

#include <stdio.h>

int main()
{
	char code = ' ';
	double purchase = 0.0;
	double serviceChg = 0.0;

	//enter input data
	printf("%s", "Enter code:");
	if(!scanf("%c", &code)) throw "Invalid character";
	printf("%s", "Enter purchase amount:");
	if(!scanf("%lf", &purchase)) throw "Please input a decimal number";

	//calculate service charge
	serviceChg = purchase * 0.01;
	//add $5 to code 2 purchases
	if (code == '2')
		serviceChg = serviceChg + 5;
	//end if

	//display service charge
	printf("%s%.2lf\n", "Service charge:", serviceChg);
	return 0;
}   //end of main function
