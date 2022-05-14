#ifndef STRING_H
#define STRING_H
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
class String {
public:
    String();
    String(int);
    String(const String& source);
    void inToStream();
    void printToStream(ostream& str);
    ~String();
protected:
    char* s;
    size_t lenght;
};

#endif 