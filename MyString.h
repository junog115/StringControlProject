//
// Created by Moomyung on 2017. 7. 14..
//

#ifndef STRINGCONTROLPROJECT_MYSTRING_H
#define STRINGCONTROLPROJECT_MYSTRING_H


class CMyString {
public:     // Constructor & Destructor
    CMyString();    // Default Constructor
    CMyString(const CMyString &);   // 복사 Constructor
    explicit CMyString(const char *);    // 변환 Constructor

    ~CMyString();       // Destructor

public:     // Operator
    CMyString& operator=(const CMyString &);
    explicit operator char*(void) const;

private:
    int m_nLength;
    char *m_pszData;

public:
    void SetString(const char* pszParam);
    const char* GetString(void) const;
    void Release(void);

};


#endif //STRINGCONTROLPROJECT_MYSTRING_H
