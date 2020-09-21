#pragma once
#include <iostream>
#include "GraphicsElement.h"
class Point {
private: double x = 5, y = 10;
public: 
	double getX() {
		return x;
	}
	double getY() {
		return y;
	}
	void setX(double x) {
		if (x < 0) {
			throw std:: invalid_argument("X cannot be less than 0");
		}
		this->x = x;
	}
	void setY(double y) {
		if (y < 0) {
			throw std::invalid_argument("Y cannot be less than 0");
		}
		this->x = y;
	}
	void print() {
		printf("x:%lf y:%lf ", x, y);
	}
};

