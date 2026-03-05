#include <iostream>
#include <string>
using namespace std;
int main() {
	int num1;
	int num2;
	string symbol;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "\nEnter another number: ";
	cin >> num2;
	cout << "\nEnter an arithemetic operator (+-*/): ";
	cin >> symbol;
	if(symbol == "+") {
		cout << num1 + num2;
	} else if(symbol == "-") {
		cout << num1 - num2;
	}else if(symbol == "*") {
		cout << num1 * num2;
	}else if(symbol == "/") {
		cout << num1 / num2;
	}
	return 0;
}
