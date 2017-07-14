#include <iostream>
#include "MyString.h"
using namespace std;

void TestFunc(const CMyString &strParam)
{
    cout << static_cast<char*> (strParam) << endl;
}

int main() {
    cout << "main() Start!" << endl;

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
    strNewData.SetString("");
    strNewData = strData;
    cout << strNewData.GetString() << endl;

    cout << endl << "char* 형 변환자" << endl;
    TestFunc(strData);


    cout << endl << "main() end!" << endl;

    return 0;
}

