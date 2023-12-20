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
        cout << "请输入小时：";
        cin >> hour;
        cout << "请输入分钟：";
        cin >> minute;
        cout << "请输入秒钟：";
        cin >> sec;
    }

    void showTime()    // 成员函数，用于显示时间
    {
        cout << hour << "：" << minute << "：" << sec << endl;
    }
};

int main()
{
    Time t1;           //定义t1为Time类对象
    t1.setTime();      //调用成员函数设置时间
    t1.showTime();     //调用成员函数显示时间

    return 0;
}