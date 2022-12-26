// C++ program to implement Half subtractor

#include <bits/stdc++.h>
using namespace std;

// Function to print Difference and Borrow
void Half_Subtractor(int A,int B){
	// initializing Difference and Borrow
	int Difference,Borrow;
	// Calculating value of Difference
	Difference = A ^ B;

	// Calculating value of Borrow
	// Calculating not of A
	A = not(A);
	Borrow = A & B;

	// printing the values
	cout<<"Difference = "<<Difference<<endl;
	cout<<"Borrow = "<<Borrow<<endl;
}
int main() {
	int A = 1;
	int B = 0;
	// passing three inputs of half subtractor as arguments to Half_Subtractor function
	Half_Subtractor(A,B);
	return 0;
}
