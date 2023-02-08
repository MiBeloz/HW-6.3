#include "Rhombus.h"


#pragma once

class Square : public Rhombus {
public:
	Square(const int lengthABCD);

	std::string getName() override;

	bool getCorrect() override;
};