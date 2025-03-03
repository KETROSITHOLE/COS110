#include <iostream>
#include "FeetInches.h"

using namespace std;

int main(int argc, char const *argv[])
{
	//Define a FeetInches object with the default value of 0 feet, 0 inches.
	FeetInches first;

	//Define a FeetInches object with 1 foot, 5 inches.
	FeetInches second (1, 5);

	//Use the prefix ++ operator.
	cout << "Demonstrating prefix ++ operator. \n";
	for (int count=0;	count<12;	count++){
		first = ++second;
		cout << "first: " << first.getFeet() << " feet, " << first.getInches() << " inches. ";
		cout << "second: " << second.getFeet() << " feet, " << second.Inches() << " inches. \n";
	}

	//Use the postfix ++ operator.
	cout << "\nDemonstrating postfix ++ operator. \n";
	for (int count=0;	count<12;	count++){
		first = second++;
		cout << "first: " << first.getFeet() << " feet, " << first.getInches() << " inches. ";
		cout << "second: " << second.getFeet() << " feet, " << second.getInches() << " inches. \n";
	}
	
	return 0;
}