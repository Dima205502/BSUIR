#include"Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

void Rectangle::showCoordinates() {
    std::cout << "Coordinates of vertices: " << std::endl;
    std::cout << "A(" << x1 << ", " << y1 << ")" << std::endl;
    std::cout << "B(" << x2 << ", " << y1 << ")" << std::endl;
    std::cout << "C(" << x2 << ", " << y2 << ")" << std::endl;
    std::cout << "D(" << x1 << ", " << y2 << ")" << std::endl;
}

void Rectangle::move(int dx, int dy) {
    x1 += dx;
    y1 += dy;
    x2 += dx;
    y2 += dy;
}

int Rectangle::GetX1() {
    return this->x1;
}

int Rectangle::GetX2() {
    return this->x2;
}

int Rectangle::GetY1() {
    return this->y1;
}

int Rectangle::GetY2() {
    return this->y2;
}

void Rectangle::resize(int dw, int dh) {
    x2 += dw;
    y2 += dh;
}

Rectangle& Rectangle::operator++() {
    x2++;
    y2++;
    return *this;
}

Rectangle Rectangle::operator++(int) {
    Rectangle temp = *this;
    ++(*this);
    return temp;
}

Rectangle& Rectangle::operator--() {
    x2--;
    y2--;
    return *this;
}

Rectangle Rectangle::operator--(int) {
    Rectangle temp = *this;
    --(*this);
    return temp;
}

Rectangle Rectangle::operator+(const Rectangle& other) const {
    int newX1 = std::min(x1, other.x1);
    int newY1 = std::min(y1, other.y1);
    int newX2 = std::max(x2, other.x2);
    int newY2 = std::max(y2, other.y2);
    return Rectangle(newX1, newY1, newX2, newY2);
}

Rectangle& Rectangle::operator+=(const Rectangle& other) {
    *this = *this + other;
    return *this;
}

Rectangle Rectangle::operator-(const Rectangle& other) const {
    int newX1 = std::max(x1, other.x1);
    int newY1 = std::max(y1, other.y1);
    int newX2 = std::min(x2, other.x2);
    int newY2 = std::min(y2, other.y2);
    // Проверка на пересечение
    if (newX1 >= newX2 || newY1 >= newY2) {
        newX1 = 0;
        newY1 = 0;
        newX2 = 0;
        newY2 = 0;
    }
    return Rectangle(newX1, newY1, newX2, newY2);
}

Rectangle& Rectangle::operator-=(const Rectangle& other) {
    *this = *this - other;
    return *this;
}

bool Rectangle::operator==(const Rectangle& other) {
    return x1 == other.x1 && x2 == other.x2 && y1 == other.y1 && y2 == other.y2;
}