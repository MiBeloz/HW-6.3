#include "Figure.h"


Figure::Figure() : sides{} {}

std::string Figure::getName() { return "������"; }

int Figure::getSides() { return sides; }

std::string Figure::getAllLengths() { return "�������=0"; }

std::string Figure::getAllAngles() { return "����=0"; }

bool Figure::getCorrect() {
	if (sides == 0) {
		return true;
	}
	else {
		return false;
	}
}

std::string Figure::getInfo() {
	std::string correct;
	if (getCorrect()) {
		correct = "����������";
	}
	else {
		correct = "������������";
	}
	return getName() + ":\n" + correct + "\n���������� ������: " + std::to_string(sides);
}