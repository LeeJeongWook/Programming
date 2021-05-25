#include <iostream>
#include <iomanip>   // for setiosflags

using namespace std;

int main()
{
    float num = 12.34567;
    cout.precision(2);               //���� ū �ڸ������� 2�ڸ��� ����ϰڴٴ� ��
    cout << num << endl;           //��� : 12

    cout.precision(3);
    cout << num << endl;           //��� : 12.3

    cout.precision(4);
    cout << num << endl;           //��� : 12.35  �ݿø�

    cout << fixed;                 //�Ҽ��� �ڸ��� ����
    cout.precision(1);
    cout << num << endl;           //��� : 12.3

    cout.precision(3);
    cout << num << endl;           //��� : 12.346

    cout.precision(5);
    cout << setiosflags(ios::showpoint) << num << endl;   //��� : 12.34567

    cout.setf(ios::showpoint); // ���� 0�� ǥ��
    cout.precision(6);
    cout << num << endl;           //��� : 12.345670

    return 0;
}