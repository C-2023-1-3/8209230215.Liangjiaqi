#include <iostream>
using namespace std;

int main() {
    int day = 1; // ��һ��
    int num = 2; // ��һ�����ƻ����
    double price = 0.8; // ÿ��ƻ���ļ۸�
    double total_price = 0; // �ܹ����ѵļ۸�

    while (num <= 100) { // �������ƻ����������100ʱѭ��
        total_price += price * num; // ���컨�ѵļ۸�
        num *= 2; // �ڶ������ƻ������ǰһ�������
        day++; // ������1
    }

    double avg_price = total_price / day; // ƽ��ÿ�컨�ѵļ۸�
    cout << "����ÿ��ƽ����" << avg_price << "Ԫ" << endl;
    return 0;
}

