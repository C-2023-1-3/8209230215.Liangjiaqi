#include <iostream>
using namespace std;
int main()
{
    unsigned int testUnint = 65534;//oxfffe
    cout << "output in unsigned int 1 type:" << testUnint << endl;//输出：65534
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;//输出：?
    cout << "output in short type:" << static_cast<short>(testUnint) << endl;//输出：-2
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;//输出：65534
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;//输出：65534
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;//输出：65534
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出：fffe
    system("pause");
    return 0;
}