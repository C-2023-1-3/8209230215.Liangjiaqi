#include <iostream>
using namespace std;

int main() {
    int day = 1; // 第一天
    int num = 2; // 第一天买的苹果数
    double price = 0.8; // 每个苹果的价格
    double total_price = 0; // 总共花费的价格

    while (num <= 100) { // 当购买的苹果数不超过100时循环
        total_price += price * num; // 当天花费的价格
        num *= 2; // 第二天买的苹果数是前一天的两倍
        day++; // 天数加1
    }

    double avg_price = total_price / day; // 平均每天花费的价格
    cout << "阳阳每天平均花" << avg_price << "元" << endl;
    return 0;
}

