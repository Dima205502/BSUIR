#pragma once
#include<iostream>
class Rectangle {
private:
    int x1, y1; // Координаты вершины A
    int x2, y2; // Координаты вершины C

public:
    Rectangle(int x1, int y1, int x2, int y2);

    void showCoordinates();

    int GetX1();

    int GetX2();

    int GetY1();

    int GetY2();

    void move(int dx, int dy);

    void resize(int dw, int dh);

    bool operator==(const Rectangle& other);

    Rectangle& operator++();

    Rectangle operator++(int);

    Rectangle& operator--();

    Rectangle operator--(int);

    Rectangle operator+(const Rectangle& other) const;

    Rectangle& operator+=(const Rectangle& other);

    Rectangle operator-(const Rectangle& other) const;

    Rectangle& operator-=(const Rectangle& other);

};

