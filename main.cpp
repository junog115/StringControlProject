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

    cout << "복사 생성자 생성" << endl;
    CMyString strNewData(strData);
    cout << strNewData.GetString() << endl << endl;

    cout << "단순 대입 연산자" << endl;
    

    cout << "main() end!" << endl;

    return 0;
}

