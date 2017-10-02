//Evan Mora
//COSC II


#include <iostream>
#include "Lab03CSII.h"
using namespace std;


int main()
{
	int SENTINEL = 9999999;
	short n = 0;
	short n2 = 0;
	long n3 = 0;
	long n4 = 0;
	long n5 = 0;
	long n6 = 0;
	float n7 = 0;
	double n8 = 0;

	while (n != SENTINEL)
	{
		
		cout << "Enter two numbers to be added together, seperated by enter! (Values are shorts)" << endl;
		cin >> n;
		cin >> n2;
		cout << "You entered: " << n << " and " << n2 << endl;
		cout << "Result as short: " << sumShort (n,n2) << endl;
		cout << "Enter two numbers to be added together, seperated by enter! (Values are longs)" << endl;
		cin >> n3;
		cin >> n4;
		cout << "Result as long: " << sumLong (n3,n4)<< endl;
		 // If the values are too large, then the program just loops forever. maximum value for long is 2147483647.
		// Max value for short is 32767.
		cout << "Enter a number to be computed as a factoral (Float)" << endl;
		cin >> n5;
		cout << "Factorial of " << n5 << " is : " << factorialFloat(n5) << endl;
		cout << "Enter a number to be computed as a factoral (Double)" << endl;
		cin >> n6;
		cout << "Factorial of " << n5 << " is : " << factorialDouble(n6) << endl;
		//Max value for float is 3.40282e+38.
		//Max value for double is 1.79769e+308
		cout << "Enter a number for the strange function (Float)" << endl;
		cin >> n7;
		cout << "Return value: " << experimentF(n7) << endl;
		cout << "Enter a number for the strange function (Double)" << endl;
		cin >> n8;
		cout << "Return value: " << experimentF(n8) << endl;
		
		
		
	}
	
}

 short sumShort(short num1, short num2)
{
	short sum;
	sum = num1 + num2;
	return sum;
}

long  sumLong(long num, long num2)
{
	long sum = 0;
	sum = num + num2;
	return sum;
}

long factorialFloat(long num) //Found on the internet and modified. https://goo.gl/yKHz5m
{
	int counter;
	float fact = 1;

	
	for (counter = 1; counter <= num; counter++) {
		fact = fact * counter;
	}

	return fact;
}

long factorialDouble(long num) //Found on the internet and modified. https://goo.gl/yKHz5m
{
	int counter;
	double fact = 1;


	for (counter = 1; counter <= num; counter++) {
		fact = fact * counter;
	}

	return fact;
}

float experimentF(float num)
{
	float sum = 0;

	sum = (1 / num) + 1.0;
	return sum;

}

double experimentD(double num)
{
	double sum = 0;
	sum = (1 / num) + 1.0;
	return sum;
}