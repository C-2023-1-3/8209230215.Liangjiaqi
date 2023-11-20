#include <iostream>

double squareRoot(double a) {
    double xn = a;
    double xn_plus_1 = 0;
    double diff = 0;

    do {
        xn_plus_1 = 0.5 * (xn + a / xn);
        diff = std::abs(xn_plus_1 - xn);
        xn = xn_plus_1;
    } while (diff >= 1e-5);

    return xn_plus_1;
}

int main() {
    double a;
    std::cout << "������һ����a��";
    std::cin >> a;

    double result = squareRoot(a);

    std::cout << "ƽ���� x = " << result << std::endl;

    return 0;
}