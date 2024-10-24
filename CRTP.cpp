#include <iostream>
#include <ranges>
#include <vector>
#include<chrono>
using namespace std;
template<typename T>
class Shape {
public:
    void draw_shape()
    {
        static_cast<T*>(this)->draw();
    }
};
class Rectangle : public Shape<Rectangle> {
public:
    void draw() {
        cout << " Rectangle::Draw\n";
    }
};
class circle : public Shape<circle> {
public:
    void draw() {
        cout << "Circle draw\n";
    }
};

int main() {
    auto rp = make_unique<Shape<Rectangle>>();
    auto cp = make_unique<Shape<circle>>();
    rp->draw_shape();
    cp->draw_shape();
    return 0;


}