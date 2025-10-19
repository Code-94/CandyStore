#pragma once
#include <map>
#include <string>
#include <iostream>

constexpr int StockM = 13;
constexpr int StockT = 13;
constexpr int StockL = 13;
enum class Bonbon {
	MAMOTH,
	TAGADA,
	LOLLIPOP
};

std::string CandyToString(Bonbon bonbek) {
	switch (bonbek) {
	case Bonbon::MAMOTH: return "Mamoth ball";
		break;
	case Bonbon::TAGADA: return "Tagada Strawberry";
		break;
	case Bonbon::LOLLIPOP: return "Lollipop";
		break;
	}
}
class Candy {
public:

	std::map<Bonbon, int> bonbon = { {Bonbon::MAMOTH,10},{Bonbon::TAGADA,8},{Bonbon::LOLLIPOP, 12} };
	char input;
	int number;

	Candy(int stockM, int stockT, int stockL) {
		bonbon.at(Bonbon::MAMOTH) = stockM;
		bonbon.at(Bonbon::TAGADA) = stockT;
		bonbon.at(Bonbon::LOLLIPOP) = stockL;
	};

	std::map<Bonbon,int> Refill() {
		bonbon.at(Bonbon::MAMOTH) = 10;
		bonbon.at(Bonbon::TAGADA) = 8;
		bonbon.at(Bonbon::LOLLIPOP) = 12;

		std::cout << "Refill done !!!" << std::endl;
		std::cout << "Here are your candies !!!!" << std::endl;
		

		return bonbon;
	}

	void Buy() {
		std::cout << "Welcome, what of candy would you like to buy ? " << std::endl;
		std::cout << "Here are the choices : " << std::endl;
		for (auto c : bonbon) {
			std::cout << CandyToString(c.first) << " stock is : " << c.second << std::endl;
		}
		std::cout << "What's your choice ? " << std::endl;;
		std::cout << "\nTap 'm'(Mamoth ball),\nTap 't'(Tagada Strawberry),\nTap 'l'(Lollipop),\nTap 'x'(exit): \n " << std::endl;

		std::cin >> input;
		do {
			if (input == 'm') {
				if (bonbon.at(Bonbon::MAMOTH) == 0) {
					std::cout << "The stock is empty " << std::endl;
					std::cout << "Refill needed " << std::endl;
					std::cout << "Refill in loading... " << std::endl;
					Refill();

				}
				else {
					std::cout << "How many do you want ? : ";
					std::cin >> number;
					if (number > bonbon.at(Bonbon::MAMOTH) && number < StockM) {
						std::cout << "Refill needed " << std::endl;
						std::cout << "Refill in loading... " << std::endl;
						Refill();

					}
					else if (number == 0) {
						std::cout << "Think again" << std::endl;
					}
					else {
						bonbon.at(Bonbon::MAMOTH) -= number;
						std::cout << "Here are your candies !!!!" << std::endl;
						
					}
				}
			}
			else if (input == 't') {
				if (bonbon.at(Bonbon::TAGADA) == 0) {
					std::cout << "The stock is empty " << std::endl;
					std::cout << "Refill needed " << std::endl;
					std::cout << "Refill in loading... " << std::endl;
					Refill();

				}
				else {
					std::cout << "How many do you want ? : ";
					std::cin >> number;
					if (number > bonbon.at(Bonbon::TAGADA) && number < StockT) {
						std::cout << "Refill needed " << std::endl;
						std::cout << "Refill in loading... " << std::endl;
						Refill();

					}
					else if (number == 0) {
						std::cout << "Think again" << std::endl;
					}
					else {
						bonbon.at(Bonbon::TAGADA) -= number;
						std::cout << "Here are your candies !!!!" << std::endl;
						
					}
				}
			}
			else if (input == 'l') {
				if (bonbon.at(Bonbon::LOLLIPOP) == 0) {
					std::cout << "The stock is empty " << std::endl;
					std::cout << "Refill needed " << std::endl;
					std::cout << "Refill in loading... " << std::endl;
					Refill();
				}
				else {
					std::cout << "How many do you want ? : ";
					std::cin >> number;
					bonbon.at(Bonbon::LOLLIPOP) -= number;
					if (number > bonbon.at(Bonbon::LOLLIPOP) && number < StockL) {
						std::cout << "Refill needed " << std::endl;
						std::cout << "Refill in loading... " << std::endl;
						Refill();

					}
					else if (number == 0) {
						std::cout << "Think again" << std::endl;
					}
					else {
						bonbon.at(Bonbon::LOLLIPOP) -= number;
						std::cout << "Here are your candies !!!!" << std::endl;
						
					}
				}
			}
		} while (input != 'x');
		std::cout << "Have a nice day " << std::endl;
	}
	
};