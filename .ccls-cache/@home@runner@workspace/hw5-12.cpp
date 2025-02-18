//hw5-12.cpp - displays the total owed
//Created/revised by Sean Archer on 2-18-25

#include <stdio.h>

int main()
{
	double item1 = 0.0;
	double item2 = 0.0;

	printf("%s", "Enter price of item 1: ");
	if(!scanf("%lf", &item1)) throw "Please enter a valid price";
	printf("%s", "Enter price of item 2: ");
	if(!scanf("%lf", &item2)) throw "Please enter a valid price";

	(item1 > item2) ? item2 *= .5 : item1 *= .5;
	double total = item1 + item2;

	printf("%s%.2lf\n", "Total owed: ", total);
	
	return 0;
}	//end of main function