#include <iostream>

using namespace std;

class Shape{
    public:
        void disp(){
            cout << "This is a shape" << endl;
        }
};

class Polygon : public Shape{
    public:
        void disp(){
            cout << "Polygon is a shape" << endl;
        }
};

class Rectangle : public Polygon{
    public:
        void disp(){
            cout << "Rectangle is a polygon" << endl;
        }
};

class Triangle : public Polygon{
    public:
        void disp(){
            cout << "Triangle is a polygon" << endl;
        }
};

class Square : public Rectangle{
    public:
        void disp(){
            cout << "Square is a rectangle" << endl;
        }
};



int main(){

}