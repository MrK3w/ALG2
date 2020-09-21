#include <iostream>
#include "Circle.h"
#include "Point.h"
#include "GraphicsElement.h"
#include "Group.h"

int main()
{
    Group g1;
    Group g2;
    Circle c1;
    Circle c2;
    Circle c3;
    Circle c4;
    g2.addElement(&c1);
    g1.addElement(&c3);
    g2.addElement(&c1);
    g1.addElement(&c2);
    g1.print();
    g2.print();
}



