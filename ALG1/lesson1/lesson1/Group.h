#include <vector>
#include "GraphicsElement.h"
#pragma once
class Group : public GraphicsElement
{
private:
	std::vector<GraphicsElement*> elements;
public:
	void addElement(GraphicsElement* e) {
		elements.push_back(e);
	}
	virtual void print() {
		printf("Group");
			for (GraphicsElement* e : elements) {
				printf("	");
				e->print();
				printf("\n");
			}
			printf("\n");
	}
};

