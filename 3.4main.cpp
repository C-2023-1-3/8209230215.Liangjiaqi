#include <iostream>
#include "mytriangle.h"

int main() {
    double side1, side2, side3;

    while (true) {
        std::cout << "�����������ε������߳���" << std::endl;
        std::cin >> side1 >> side2 >> side3;

        if (is_valid(side1, side2, side3)) {
            double area = sqrt(double_area(side1, side2, side3));
            std::cout << "�����ε����Ϊ��" << area << std::endl;
            break;
        }
        else {
            std::cout << "����������߳��޷����������Σ����������롣" << std::endl;
            std::cin.clear(); // ��� cin �Ĵ���״̬
            std::cin.ignore(1000, '\n'); // ���Ե�֮ǰ���������
        }
    }

    return 0;
}