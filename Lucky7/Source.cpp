//Ian Fletcher
//Lucky 7

#include <iostream>
#include<cstring>

using namespace std;

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();

int main()
{
	f4();
	return 0;
}
//Reads 5 integers and prints the largest and smallest of the group
void f1()
{
	int curr, small, large;
	cout << "Enter 5 ints: ";
	cin >> curr;
	//first entry is small and large
	small = large = curr;
	for (int i = 0; i < 4; i++)
	{
		cin >> curr;
		if (curr < small)
		{
			small = curr;
		}
		else if (curr > large)
		{
			large = curr;
		}
	}
	cout << "Largest = " << large << " smallest = " << small << endl;
	
}
//calculates and prints sum of first 50 integers that are multiples of 7
void f2()
{
	int sum = 0;
	for (int i = 1; i <= 50; i++)
	{
		sum += i * 7;
	}
	cout << "sum = " << sum << endl;
}
//prints out fist 10 terms of a factorial
void f3()
{
	int factorial = 1;
	for (int i = 2; i <= 10; i++)
	{
		factorial = i * factorial;
	}
	cout << factorial << endl;
}
//program that reads in a string and determine if its a palindrome
void f4()
{
	string test = "mom";
	int countdown = test.length() - 1;
	int countup = 0;
	bool pal = true;
	while (pal && countup < countdown)
	{
		if (test[countup] != test[countdown])
		{
			pal = false;
		}
		countup++;
		countdown--;
	}
	if(pal)
	{ 
		cout << test << " is a palindrome" << endl;
	}
	else
	{
		cout << test << " isn't a palindrome" << endl;
	}
}

void f5()
{

}

void f6()
{

}

void f7()
{

}
