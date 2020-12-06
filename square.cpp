#include <iostream>
using namespace std;


int calculateSquareFootage(int length, int width) {
	return length*width;
}

int main()
{
	int area = calculateSquareFootage(3,4); //returns 12
	cout<<area<<"\n";
	cout<<calculateSquareFootage(3,5)<<"\n"; //would print 15
     	return 0;
}

