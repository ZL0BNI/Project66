#include "String.h"
String::String() {
    lenght = 128;
    s = (char*)malloc((lenght + 1) * sizeof(char));
    if (!s) {
        cout << "\tmallok �� ���������\n";
    }
    
}
String::String(int len) {
    lenght = len;
    s = (char*)malloc((lenght + 1) * sizeof(char));
    if (!s) {
        cout << "\tmallok �� ���������\n";
    }
}
String::String(const String& source) {
    lenght = source.lenght;
    s = (char*)malloc((lenght + 1) * sizeof(char));
    if (!s) {
        cout << "\t������ �� ���������\n";
    }
    else {
        strcpy(s, source.s);
    }
}

void String::printToStream(ostream& str) {
    str << s;
}
void String::inToStream() {
    char* str = new char[lenght + 1];
    cout << "\t������� ������ �� ������ " << lenght << " ��������" << endl;
    cin.getline(str, lenght + 1);
    strcpy(s, str);
    delete[]str;
}

String::~String() {
    free(s);
    
}