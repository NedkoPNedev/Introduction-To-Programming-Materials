#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    if (y >= 0.0) /// ��� ���������� ��
    {
        if (x * x + y * y <= 16.0) /// ����� � ���-������� ����
        {
            if ((x - 2) * (x - 2) + y * y >= 4.0 && (x + 2) * (x + 2) + y * y >= 1.0) /// ����� ������������� � ����� � ����� ��������
            {
                cout << "Point (" << x << "," << y << ")" << " is inside \n";
            }
            else
            {
                cout << "Point (" << x << "," << y << ")" << " is outside \n";
            }
        }
        else
        {
                cout << "Point (" << x << "," << y << ")" << " is outside \n";
        }
    }
    else  /// ��� ���������� ��
    {
        if ((x + 2) * (x + 2) + y * y <= 4.0) /// ����� � ���-������� ���� ��� ���������� ��
        {
            if ((x + 2) * (x + 2) + y * y >= 1.0) /// ����� ���-������ ���� ��� ���������� ��
            {
                cout << "Point (" << x << "," << y << ")" << " is inside \n";
            }
            else
            {
                cout << "Point (" << x << "," << y << ")" << " is outside \n";
            }
        }
        else
        {
            cout << "Point (" << x << "," << y << ")" << " is outside \n";
        }
    }
}
