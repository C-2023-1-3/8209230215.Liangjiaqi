#include <iostream>

void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    double numbers[10];

    std::cout << "请输入10个双精度数字：" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }

    bubbleSort(numbers, 10);

    std::cout << "排列后的数字为：" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}