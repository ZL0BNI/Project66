#include "String.h"
#include "main.h"
void defaultString()
{
}
void copyString()
{
}
void initString() {
    cout << "\t������� ����� ������\n";
    int len;
    cin >> len;
    String B(len);
    B.inToStream();
    B.printToStream(cout);
}