//실습-1
//변수 : 변할 수 있는 값으로 프로그램에서 데이터를 저장하기 위한 메모리 공간을 의미

//#include <iostream>
//#include<string>
//using namespace std;
//
//int main(void) {
//	//변수명 작성
//	// int 7aaaa = 0; 변수명은 숫자로 시작하면 안된다.
//	// int ab cd = 0; 변수명은 사이에 공백이 들어가면 안된다.
//	int garbage = 0;
//	//초기화되지 않은 'garbage' 지역 변수를 사용했기에 컴파일 조차도 시켜주지 않는다.
//	cout << garbage << endl;
//	int  age= 0; //정상적인 변수를 선언한 것
//	//변수를 보편화 된 초기화 방법
//	int i{ 100 }; // int i = 100;
//	
//	short b = 0;
//	bool flag = true;
//
//	cout << flag << endl;
//	//변수의 주소 확인
//	cout << "변수 age의 주소 : " << &age << " 입니다." << endl;
//	cout << "변수 i의 주소 : " << &i << " 입니다." << endl;
//	cout << "변수 b의 주소 : " << &b << " 입니다." << endl;
//
//	//자료형의 크기(sizeof(데이터 타입, 변수명))
//	//to_string(정수) : 정수값을 문자열 타입으로 변경시켜주는 string 헤더파일에 존재하는 메소드라고 보면 된다.
//	cout << "short형 자료형의 바이트 크기 : " + to_string(sizeof(b)) << endl;
//
//	string s1 = "안녕하세요";
//	string s2 = "반갑습니다.";
//	string s3 = s1 + " " + s2;
//	cout << s3 << endl;
//
//	cout << "변수 s1의 주소 : " << &s1 << endl;
//	cout << "변수 s2의 주소 : " << &s2 << endl;
//	cout << "변수 s3의 주소 : " << &s3 << endl;
//	
//	bool equal = (s1 == s2);
//	cout << "s1 == s2 : " << equal << endl;
//
//	const double TAX_RATE = 0.25; //기호 상수 선언 및 초기화
//
//	//변수든 상수든 간에 초기화가 원칙이다.
//
//	string name;
//	cout << "이름을 입력하세요 : ";
//	cin >> name;
//	cout << name << "님을 환영합니다." << endl;
//
//	return 0;
//}