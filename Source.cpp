#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int a[30];
    int kd = 0;
    cout << "������� ������ � ���������� ������� �� ������ ���� �����\n";
    for (int i = 0; i < 30; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            kd++;
    }
    cout << "���������� ���� ��� �������: " << kd << endl;

    if (kd == 10)
        cout << "�����, ��� ������� �� ���� 10 ���� � �����" << endl;
    else
        cout << "�������, ��� ������� �� ���� 10 ���� � �����" << endl;

    return 0;
}