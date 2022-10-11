#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
void getInput(int &n1, int &n2, int &n3);
// In this function, ask the user three values and assign them to the parameter n1, n2, and n3

int  findMin(int n1, int n2, int n3); 
// The return value : the min among n1, n2 and n3.

void printResult(int n1, int n2, int n3, int min);
// Print out the results with the original numbers and the minimum value

// In main( ), call the functions 
int main()
{
	int n1, n2, n3, min;
	getInput(n1, n2, n3);
	min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);

}

void getInput(int &n1, int &n2, int &n3)
{
	cout << "Enter three integers: ";
	cin >> n1 >> n2 >> n3;
}

int  findMin(int n1, int n2, int n3)
{
	int min;
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
			min = n1;
		if (i == 1)
			min = (min > n2)? n2 : min;
		if (i ==2)
			min = (min > n3)? n3 : min;
	}
	return min;
}


// ******************************

// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}
