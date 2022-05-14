#include "String.h"
#include "main.h"
void defaultString()
{
}
void copyString()
{
}
void initString() {
    cout << "\t¬ведите длину строки\n";
    int len;
    cin >> len;
    String B(len);
    B.inToStream();
    B.printToStream(cout);
}