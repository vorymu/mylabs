/*2.	Ввести трехзначное целое число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.*/
#include <iostream>
int main() {
	int32_t integer{};
	try {
		std::cout << "Enter a three-digit integer: ";
		if (!(std::cin >> integer)) {
			throw "Should be an integer!";
		}
		if (integer < 1 || integer > 999) {
			throw "Should be a three-digit integer!";
		}
		int32_t first_dijit = integer / 100;
		int32_t new_integer = (integer - first_dijit * 100) * 10 + first_dijit;
		std::cout << "The first digit from the left was crossed out and added to the right.\nThe resulting number = " << new_integer;
	}
	catch (const char* msg) {
		std::cout << msg;
	}
	return 0;
}
