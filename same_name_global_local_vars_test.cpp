#include <iostream>
#include <string>

using namespace std;

/*
 * Bad style: for learning purposes only
 * It is considered a bad style because the same variable names
 * are used for local and global scopes
 */

//Global scope variables
int i = 42;
string str("Blah blah blah");

int main() {
  //Local scope variables
	int i = 100;
	int j = i; //Value of local variable i is used here
	int str = 22; //Local str differs from the global one both in type and value

	cout << "The value of j is " << j << endl; //returns 100
	cout << "The local str variable is equal to: " << str << endl; //return 22

	return 0;
}
