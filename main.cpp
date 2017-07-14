#include <iostream>
#include "MyString.h"
using namespace std;

int main() {
    cout << "main() Strart!" << endl;

    cout << "CMyString Class Instance 생성" << endl;
    CMyString strData;
    strData.Release();
    strData.SetString("Hello");
    strData.SetString("World!");
    cout << strData.GetString() << endl << endl;

    cout << "main() end!" << endl;

    return 0;
}

