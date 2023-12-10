#include <iostream>
#include <limits> // ���ͷ�ļ�

int getGCD(int m, int n, int& lcm);

int main() {
    int m, n;

    std::cout << "������������Ȼ��m��n��" << std::endl;

    while (!(std::cin >> m >> n) || m <= 0 || n <= 0) { // �޸�������֤����
        std::cout << "��������������" << std::endl;

        // ������뻺����
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int lcm = 1;
    int gcd = getGCD(m, n, lcm);

    std::cout << "���Լ����" << gcd << std::endl;
    std::cout << "��С��������" << lcm << std::endl;

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