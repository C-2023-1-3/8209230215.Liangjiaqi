#include <iostream>
#include "mytriangle.h"

int main() {
    double side1, side2, side3;

    while (true) {
        std::cout << "请输入三角形的三条边长：" << std::endl;
        std::cin >> side1 >> side2 >> side3;

        if (is_valid(side1, side2, side3)) {
            double area = sqrt(double_area(side1, side2, side3));
            std::cout << "三角形的面积为：" << area << std::endl;
            break;
        }
        else {
            std::cout << "输入的三条边长无法构成三角形！请重新输入。" << std::endl;
            std::cin.clear(); // 清除 cin 的错误状态
            std::cin.ignore(1000, '\n'); // 忽略掉之前输入的内容
        }
    }

    return 0;
}