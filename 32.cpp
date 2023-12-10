#include <iostream>
#include <vector>

bool is_prime(int num);

int main() {
    int count = 0;
    int num = 2;

    std::cout << "前200个素数：" << std::endl;

    while (count < 200) {
        if (is_prime(num)) {
            std::cout << num << "\t";
            count++;

            if (count % 10 == 0) {
                std::cout << std::endl;
            }
        }
        num += (num == 2) ? 1 : 2; // 保持num为奇数
    }

    return 0;
}

bool is_prime(int num) {
    if (num < 2 || (num > 2 && num % 2 == 0)) {
        return false;
    }

    int sqrt_num = sqrt(num);
    for (int i = 3; i <= sqrt_num; i += 2) { // 只遍历奇数
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}