#include "Triangle.h"


Triangle::Triangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB, const int angleC) : Figure(3) {
	a = lengthA;
	b = lengthB;
	c = lengthC;
	A = angleA;
	B = angleB;
	C = angleC;
}

std::string Triangle::getName() { return "�����������"; }

int Triangle::getLengthA() { return a; }
int Triangle::getLengthB() { return b; }
int Triangle::getLengthC() { return c; }
int Triangle::getAngleA() { return A; }
int Triangle::getAngleB() { return B; }
int Triangle::getAngleC() { return C; }

std::string Triangle::getAllLengths() {
	return "�������: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
}

std::string Triangle::getAllAngles() {
	return "����: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
}

bool Triangle::getCorrect() {
	if (A + B + C == 180) {
		return true;
	}
	else {
		return false;
	}
}

std::string Triangle::getInfo() {
	std::string correct;
	if (getCorrect()) {
		correct = "����������";
	}
	else {
		correct = "������������";
	}
	return getName() + ":\n" + correct + "\n���������� ������: " + std::to_string(getSides()) + "\n" + getAllLengths() + "\n" + getAllAngles();
}