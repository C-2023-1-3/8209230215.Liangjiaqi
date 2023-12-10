#include <iostream>
#include <limits> // 添加头文件

int getGCD(int m, int n, int& lcm);

int main() {
    int m, n;

    std::cout << "请输入两个自然数m和n：" << std::endl;

    while (!(std::cin >> m >> n) || m <= 0 || n <= 0) { // 修改输入验证条件
        std::cout << "请输入正整数！" << std::endl;

        // 清空输入缓冲区
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int lcm = 1;
    int gcd = getGCD(m, n, lcm);

    std::cout << "最大公约数：" << gcd << std::endl;
    std::cout << "最小公倍数：" << lcm << std::endl;

    return 0;
}

int getGCD(int m, int n, int& lcm) {
    int a = m;
    int b = n;
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    lcm = a * b / m;
    return m;
}