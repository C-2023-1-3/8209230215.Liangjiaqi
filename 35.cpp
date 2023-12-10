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
    std::cout << "第一天猴子共摘了：" << peaches << " 个桃子" << std::endl;

    return 0;
}