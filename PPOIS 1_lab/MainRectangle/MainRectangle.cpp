#include <iostream>
#include"Rectangle.h"

int main() {
    // Создание прямоугольников
    Rectangle rect1(0, 0, 5, 5);
    Rectangle rect2(2, 2, 7, 7);

    // Получение координат вершин
    rect1.showCoordinates();
    rect2.showCoordinates();


    // Перемещение
    rect1.move(3, 3);
    rect1.showCoordinates();

    // Изменение размера
    rect2.resize(2, 2);
    rect2.showCoordinates();

    // Увеличение размера на единицу
    ++rect1;
    rect1.showCoordinates();

    // Уменьшение размера на единицу
    --rect2;
    rect2.showCoordinates();

    // Построение наименьшего прямоугольника, содержащего два заданных прямоугольника
    Rectangle rect3 = rect1 + rect2;
    rect3.showCoordinates();

    // Построение наименьшего прямоугольника, содержащего два заданных прямоугольника, с присваиванием
    rect1 += rect2;
    rect1.showCoordinates();

    // Построение прямоугольника, являющегося общей частью (пересечением) двух прямоугольников
    Rectangle rect4 = rect1 - rect2;
    rect4.showCoordinates();

    // Построение прямоугольника, являющегося общей частью (пересечением) двух прямоугольников, с присваиванием
    rect1 -= rect2;
    rect1.showCoordinates();

    return 0;
}