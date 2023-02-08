#include "IsoscelesTriangle.h"


#pragma once

class EquilateralTriangle : public IsoscelesTriangle {
public:
	EquilateralTriangle(const int lengthABC);

	std::string getName() override;

	bool getCorrect() override;
};