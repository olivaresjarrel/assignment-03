

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

}

Power
int pow(int a, int b) {
	for (int i = 1; i <= b; i++)
		a*a;
	cout << a << endl;
}

//Triangle
int tri(int n) {

}

int main() {
	division();
	gcd();
	fib();
	pow(2, 3);
	tri();

}