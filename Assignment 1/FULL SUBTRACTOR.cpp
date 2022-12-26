//c++ code for above approach
#include <bits/stdc++.h>
using namespace std;
//function to print difference and borrow out
void Full_Subtractor(int A,int B,int Bin){

// Calculating value of Difference
	int Difference = (A ^ B) ^ Bin;
	
	//calculating NOT value of a
	int A1 = not(A);
	
	//Calculating value of B-Out
	int B_Out = A1 & Bin | A1 & B | B & Bin;

	//printing the values
	cout<<"Difference = "<<Difference<<endl;
	cout<<"B-Out = "<<B_Out<<endl;

}
//Driver code
int main() {
	int A = 1;
	int B = 0;
	int Bin = 1;
	// calling the function
	Full_Subtractor(A, B, Bin);
	return 0;
}
