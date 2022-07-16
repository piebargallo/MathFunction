// C++ program to demonstrate the
// sinh() function
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main() {
	
	// Def variable
	double x = 4.1;
	
	// Use sinh function
	double result = sinh(x);
	cout << "sinh(4.1) = " << result << endl;

	// x in Degrees
	double xDegrees = 90;
	x = xDegrees * 3.14159 / 180;
	
	// Printing result in degrees
	result = sinh(x);
	cout << "sinh(90 degrees) = " << result << endl;

	return 0;

} // End driver
