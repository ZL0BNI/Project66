#include "String.h"
#include "main.h"
using namespace std;

int main() {
    cout << "\t�������� �����" << endl;
    cout << "\t1 - ������� ������ ������ 80 ��������\n\t2 - ������� ������ � �������� ��������\n\t3 - ����������� ������\n";
    int opt;
    void (*menu[])() = { defaultString, initString, copyString };
    cin >> opt;
    if (opt >= 1 && opt <= 3) {
        menu[opt - 1]();
    }
    else {
        cout << "\t�������� �����, ��������� ����\n";
    }
    return 0;
}