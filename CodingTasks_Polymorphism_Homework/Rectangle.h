//
// Created by Annie on 16.2.2024 г..
//

#ifndef CODINGTASKS_POLYMORPHISM_HOMEWORK_RECTANGLE_H
#define CODINGTASKS_POLYMORPHISM_HOMEWORK_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {

public:
    Rectangle(double, double);  //constructor

    //set and get methods for width and height of rectangle:

    double getWidth() const;

    void setWidth(double width);

    double getHeight() const;

    void setHeight(double height);

    double area() const override;   //override function

private:
    double width;
    double height;
};


#endif //CODINGTASKS_POLYMORPHISM_HOMEWORK_RECTANGLE_H
