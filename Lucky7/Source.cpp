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
	f1();
	return 0;
}
//Write program that reads 5 integers and prints the largest and smallest of the group
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

void f2()
{

}

void f3()
{

}

void f4()
{

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
