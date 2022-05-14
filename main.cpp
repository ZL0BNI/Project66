#include "String.h"
#include "main.h"
using namespace std;

int main() {
    cout << "\tВыберите опцию" << endl;
    cout << "\t1 - создать строку длиной 80 символов\n\t2 - создать строку с заданным размером\n\t3 - копирование строки\n";
    int opt;
    void (*menu[])() = { defaultString, initString, copyString };
    cin >> opt;
    if (opt >= 1 && opt <= 3) {
        menu[opt - 1]();
    }
    else {
        cout << "\tНеверная опция, повторите ввод\n";
    }
    return 0;
}