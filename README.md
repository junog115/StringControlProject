StringControlProject
====================

My first C++ project
--------------------

### Project 내용 
  - 사용자로부터 문자열을 입력받고 동적 할당해 포인터와 문자열의 길이를 저장 
  - 사용자가 원한다면 포인터를 반환해주는 클래스


#### member 변수
---------------
  - int m_nLength : 입력받은 문자열의 길이를 저장하는 변수
  - char *m_pszData : 문자열을 저장하기 위해 동적 할ㅎ당한 메모리를 가리키는 포인터 

#### method
------------
  - void SetString(const char* pszParam);
    - 매개 변수로 전달된 문자열의 길이를 측정해 m_nLength에 저장
    - new 연산자를 이용한 동적 할당
    - 동적 할당한 memory에 문자열 저장
    - 매개변수가 NULL or 길이가 0인 경우를 고려해야한다. 
    - 동적 할당 memory를 삭제할 위치를 고려해야한다. 
    - 사용자가 같은 instance에 문자열을 두번 입력한 경우를 고려해야한다. 
   
  - const char* GetString() { return m_pszData; };
  
  - void Release(void);
    - m_pszData가 할당한 메모리를 해제
    - SetString() 호출 이전에 Release()를 호출할 수 있다는 점을 고려해야한다. 
  
  
#### Add & Change Function     
--------------------------
  1. change GetString() to const function 
  2. Add 복사 생성자
-----------------------------------------
  
### main 함수 모습 & 실행 결과 
<img src="https://user-images.githubusercontent.com/18415304/28200003-70f6bcae-68a4-11e7-8b71-de7a72168693.png" width="50%">
<img src="https://user-images.githubusercontent.com/18415304/28200005-72dee2ee-68a4-11e7-8c0e-db5dc7b23288.png" width="50%">
