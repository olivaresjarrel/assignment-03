/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Jarrel Olivares <olivares.jarrel@csu.fullerton.edu> and Sara Kubo <sarakubo@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

#include <iostream>
#include <exception>
#include <set>
#include <vector>
#include <array>

using namespace std;

//exceptions

double division(int a, int b) {
	if (b == 0)
	{
		throw "Division by zero condition";
	}
	else
	{
		return a / b;
	}
}
// catch inside of main
//
//try{
//		a/b
//	}
// catch (const char* msg) {
//		cerr << msg << endl;
//	}
//


// Templates

template <typename> inline T const& Min(T const&a, T const&b)
{
	if (a < b)
		return a;
	else
		return b;
}

//Set


//Vector


//Array


//Greatest Common Denominator
int gcd(int a, int b) {

}

//Fibinnouchi number
int fib(int n) {
	if (int n = 1) return 1;
	if (int n = 2) return 1;

	return fib(n - 1) + fib(n - 2);
}

//Power
int pow(int a, int b) {
	if (b == 0)
		return 1;
	return b* pow(b, e - 1);
}

//Triangle
int tri(int n) {
	for (int i = 1; i <= n; i++)
		//stuff
}

int main() {
	division();
	gcd();
	fib();
	pow();
	tri();
}
