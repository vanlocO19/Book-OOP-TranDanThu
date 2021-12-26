#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string wcharToASCII(wstring& wstr) {
    string strOut;

    int i = 0, len = wstr.length();

    while (i < len) {
        unsigned short temp = ((unsigned short)(wstr[i])) & 0xFF00;

        if (temp == 0) {
            strOut += wstr[i];
        } else {
            strOut += '?';
        }

        i++;
    }

    return strOut;
}