#include <iostream>
using namespace std;

class Student {
public:
    int id;      // ѧ��
    int score;  // �ɼ�
};

void max(Student* arr, int n) {
    int max_score = 0;
    int max_id = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].score > max_score) {
            max_score = arr[i].score;
            max_id = arr[i].id;
        }
    }
    cout << "��߳ɼ���ѧ��Ϊ��" << max_id << endl;
}

int main() {
    Student students[5] = { {33, 99}, {34, 96}, {35, 97}, {36, 100}, {37, 91} };
    max(students, 5);
    return 0;
}