//lab5-2.cpp - displays the total amount due
//Created/revised by Sean Archer on 2-10-25

#include <stdio.h>

int main()
{
	const double DISCOUNT = .1;
	const double SHIPPING_HIGH = .99;
	const double SHIPPING_LOW = 4.99;
	double owed = 0.0;
	char member = ' ';

	printf("%s" ,"Initial Amount Owed: ");
	if(!scanf("%lf", &owed)) printf("%s","Please input a decimal number");
	printf("%s" ,"Are you a member of the store? (y/n):");
	if(!scanf(" %c", &member)) printf("%s","Invalid character");

	//Gerryrig toLower method
	if(member=='Y') member = 'y';

	if(member=='y') {
		owed -= owed * DISCOUNT;
	}

	if(owed > 100.0) {
		owed += SHIPPING_HIGH;
	} else {
		owed += SHIPPING_LOW;
	}

	printf("%s%.2lf\n", "Total Amount Owed: ", owed);
	
	return 0;
}	//end of main function