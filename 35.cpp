#include <iostream>

int calculatePeaches(int day, int total) {
    if (day == 10) {
        return total;
    }

    int remaining = (total + 1) * 2;
    return calculatePeaches(day + 1, remaining);
}

int main() {
    const int firstDay = 1;
    const int initialTotal = 1;

    int peaches = calculatePeaches(firstDay, initialTotal);
    std::cout << "��һ����ӹ�ժ�ˣ�" << peaches << " ������" << std::endl;

    return 0;
}