//
// Created by Moomyung on 2017. 7. 14..
//

#ifndef STRINGCONTROLPROJECT_MYSTRING_H
#define STRINGCONTROLPROJECT_MYSTRING_H


class CMyString {
public:     // Constructor & Destructor
    CMyString();
    CMyString(const CMyString &);

    ~CMyString();

public:     // Operator
    CMyString& operator=(const CMyString &);

private:
    int m_nLength;
    char *m_pszData;

public:
    void SetString(const char* pszParam);
    const char* GetString(void) const;
    void Release(void);

};


#endif //STRINGCONTROLPROJECT_MYSTRING_H
