#include <iostream>
#include <math.h>
using namespace std;

//Definiton of the Point class
class Point{
private:
    double x;
    double y;

public:
//constructor with default values
    Point(double x = 0, double y = 0){
        this->x = x;
        this->y = y;
    }

//getter method for x
    double getX(){
        return x;
    }

//getter method for y
    double getY(){
        return y;
    }

//setter method for x
    void setX(double x){
        this->x = x;
    }

//setter method for y
    void setY(double y){
        this->y = y;
    }
};

//Definition of the Triangle class
class Triangle{
private:
//attributes
    Point vertex1;
    Point vertex2;
    Point vertex3;

public:
//constructor
    Triangle(Point vertex1, Point vertex2, Point vertex3){
        this->vertex1 = vertex1;
        this->vertex2 = vertex2;
        this->vertex3 = vertex3;
    }

    Triangle(){
        this->vertex1 = Point(0, 0);
        this->vertex2 = Point(50, 30);
        this->vertex3 = Point(25, 10);
    }

    double perimeter(){
        double side1 = sqrt(pow(vertex2.getX() - vertex1.getX(), 2) + pow(vertex2.getY() - vertex1.getY(), 2));
        double side2 = sqrt(pow(vertex3.getX() - vertex2.getX(), 2) + pow(vertex3.getY() - vertex2.getY(), 2));
        double side3 = sqrt(pow(vertex1.getX() - vertex3.getX(), 2) + pow(vertex1.getY() - vertex3.getY(), 2));
        return side1 + side2 + side3;
    }

    double area(){
        double side1 = sqrt(pow(vertex2.getX() - vertex1.getX(), 2) + pow(vertex2.getY() - vertex1.getY(), 2));
        double side2 = sqrt(pow(vertex3.getX() - vertex2.getX(), 2) + pow(vertex3.getY() - vertex2.getY(), 2));
        double side3 = sqrt(pow(vertex1.getX() - vertex3.getX(), 2) + pow(vertex1.getY() - vertex3.getY(), 2));
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

//main function
int main(){
    Triangle triangle;

    cout << "Perimeter: " << triangle.perimeter() << endl;
    cout << "Area: " << triangle.area() << endl;
    return 0;
}
