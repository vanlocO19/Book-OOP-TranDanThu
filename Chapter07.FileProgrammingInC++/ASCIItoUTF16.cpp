#include <iostream>
#include <string>
#include <string.h>

using namespace std;

wchar_t* asciiToWchar(char* str) {
    int len = strlen(str);

    wchar_t* strOut = new wchar_t[len + 1];

    if (strOut == NULL) {
        return NULL;
    }

    strOut[len] = 0;

    while (len--) {
        strOut[len] = str[len];
    }

    return strOut;
}

wstring asciiToWcharString(string& str) {
    wstring strOut;

    int i = 0, len = str.length();

    while (i < len) {
        strOut += str[i];
        i++;
    }

    return strOut;
}