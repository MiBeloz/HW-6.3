#include "Parallelogram.h"


#pragma once

class Rhombus : public Parallelogram {
public:
	Rhombus(const int lengthABCD, const int angleAC, const int angleBD);

	std::string getName() override;

	bool getCorrect() override;
};