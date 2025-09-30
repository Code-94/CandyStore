#pragma once
#include <map>
#include <string>

enum class Bonbon {
	MAMOTH,
	TAGADA,
	LOLLIPOP
};
class Candy {
public:
	std::map<enum Bonbon, int> bonbon = { {Bonbon::MAMOTH,10},{Bonbon::TAGADA,8},{Bonbon::LOLLIPOP, 12} };

	Candy() {};
};