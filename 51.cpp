#include<iostream>
using namespace std;

class Time
{
private:      
    int hour;
    int minute;
    int sec;

public:
    void setTime()
    {
        cout << "������Сʱ��";
        cin >> hour;
        cout << "��������ӣ�";
        cin >> minute;
        cout << "���������ӣ�";
        cin >> sec;
    }

    void showTime()    // ��Ա������������ʾʱ��
    {
        cout << hour << "��" << minute << "��" << sec << endl;
    }
};

int main()
{
    Time t1;           //����t1ΪTime�����
    t1.setTime();      //���ó�Ա��������ʱ��
    t1.showTime();     //���ó�Ա������ʾʱ��

    return 0;
}