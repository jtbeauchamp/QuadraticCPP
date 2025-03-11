//
//	Name:		Beauchamp, Joshua
//	Project:	1
//	Due:		02-11-2025
//	Course:		cs-2560-01-sp25
//
//	Description:
//			The program computes the quadratic formula of three coefficients that are inputted via the user.
//			Following the input, the program checks to see if the "a" value is 0 to rule out the scenario that
//			the equation is not a quadratic equation. In the event it is not a quadratic equation, the 
//			display informs the user that the input is not a quadratic equation. If the input is a quadratic 
//			equation, the disriminant is computed and analyzed to check for imaginary roots. If the roots are
//			imaginary, the display informs the user that the roots are imaginary, Should the equation be a 
//			quadratic equation and the roots are not imaginary, the two roots are computed and are outputted 
//			to the user's screen.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double a,b,c;
	double discriminant;
	double rootOne, rootTwo;

	cout << "Quadratic Equation Solver by J. Beauchamp" << endl << endl;
	cout << "Enter values for a b c? ";
	cin >> a >> b >> c;
	cout << endl;

	// Checks if the input is a quadratic formula
	if (a == 0){
		cout << "Not a quadratic equation." << endl;
	}
	// Checks if the roots are imaginary
	else{
		discriminant = pow(b, 2) - (4 * a * c);
		if(discriminant < 0){
			cout << "Roots are imaginary." << endl;
		}

		// Computes the roots' values and outputs to screen
		else {
			cout << fixed << showpoint << setprecision(2);

			rootOne = (-b + sqrt(discriminant)) / (2 * a);
			rootTwo = (-b - sqrt(discriminant)) / (2 * a);
			cout << "x1 = " << rootOne << endl;
			cout << "x2 = " << rootTwo << endl;
		}
	}
}