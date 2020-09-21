#pragma once
#include "Point.h";
#include "GraphicsElement.h"
	class Circle : public GraphicsElement
	{
	private:
		Point middle;
		double r = 10;
	public : virtual void print() {
		printf("Circle: middle(");
		middle.print();
		printf(",r=%lf)", r);
	}
		virtual void print(int depth) {
			print();
		}
	};


