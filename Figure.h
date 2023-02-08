#pragma once


#include <string>


#pragma once

class Figure {
public:
	Figure();

	virtual std::string getName();

	int getSides();

	virtual std::string getAllLengths();

	virtual std::string getAllAngles();

	virtual bool getCorrect();

	virtual std::string getInfo();

protected:
	Figure(const int _sides) { sides = _sides; }

private:
	int sides;
};