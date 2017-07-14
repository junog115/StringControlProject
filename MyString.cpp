//
// Created by Moomyung on 2017. 7. 14..
//
#include <iostream>
#include "MyString.h"
using namespace std;

CMyString::CMyString()
    : m_nLength(0), m_pszData(nullptr)
{
    cout << "CMyString() 생성자 호출" << endl;

}
CMyString::~CMyString()
{
    cout << "CMyString() 소멸자 호출" << endl;
    Release();
}

void CMyString::SetString(const char* pszParam)
{
    Release();

    if (pszParam == nullptr)
    {
        return;
    }

    m_nLength = static_cast<int> (strlen(pszParam));

    if(m_nLength == 0)
    {
        return;
    }

    m_pszData = new char(m_nLength + 1);
    strncpy(m_pszData, pszParam, sizeof(char) * (m_nLength + 1));

}

const char* CMyString::GetString(void)
{
    return m_pszData;
}

void CMyString::Release(void)
{
    if(m_pszData != nullptr)
    {
        delete(m_pszData);
    }
    m_pszData = nullptr;
    m_nLength = 0;
}
