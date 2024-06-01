#pragma once
#include<iostream>
#include<string>

class Pasta {
protected:
	double width;
	double length;
	double cookingTime;

	explicit Pasta(double _width, double _length, double _cookingTime);
public:
	virtual ~Pasta() = default;

	virtual std::string Type() = 0;
	virtual std::string Discription() = 0;

	double GetWidth() const;
	double GetLength() const;
	double GetCookingTime() const;

	void SetWidth(double _width);
	void SetLength(double _length);
	void SetCookingTime(double _cookingTime);
};