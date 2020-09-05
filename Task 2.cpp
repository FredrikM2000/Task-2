#include <string>
#include <iostream>

std:: string name = "";
int age;
std::string coffee = "";
bool repeat = true;

int main() {
		std::cout << "What is your name? ";
		std::cin >> name;
		std::cout << "How old are you? ";
		std::cin >> age;

		while (repeat == true) {//Makes sure the input is valid
			repeat = false;
			std::cout << "Do you like coffe (yes/no)? ";
			std::cin >> coffee;

			std::cout << "Your name is " << name;
			std::cout << "\nYou are " << age << " years old";

			if (coffee == "yes" || coffee == "y") {
				std::cout << "\nSeems you like coffee";
			}
			else if (coffee == "no" || coffee == "n") {
				std::cout << "\nOh, you don't like coffee";
			}
			else {
				system("cls");
				std::cout << "Not valid, try again\n";
				repeat = true;
			}
		}
}
