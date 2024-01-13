//첫 번째 C++프로그램 작성 및 테스트

//#include <iostream>은 iostream이라는 헤더 파일을 포함시키라는 전처리기 (선행처리기, preprocessor)이다.
//iostream 헤더 파일에는 표준 입출력에 필요한 클래스들과 객체들이 정의가 되어 있다. 
//따라서 cin과 cout와 같은 객체를 사용하려면 반드시 iostream 파일에 포함시켜야 한다.
#include <iostream> //아이오 스트림 stdio대신에 iostream을 넣는다. input output의 약자
//#include <stdio.h>
using namespace std;
//using namespace std; 코드는 C++프로그램에서 변수의 이름이나 함수의 이름과 같은 수많은 이름(식별자)들이 사용되고 이들 이름들은 이름 공간(name space)라고
//하는 영역으로 분리되어 저장되어 있다.
//C++에서 이름을 사용할 때에는 반드시 "공간::이름"과 같이 공간명을 이름 앞에 붙여야 한다. 출력을 담당하는 객체인 cout은 std라고 하는 이름 공간에 속한다. 따라서
//cout은 원칙적으로 std::cout << "문자열" <<std::endl; 적어야 한다.
//결과론적으로 매번 std를 붙이는 것이 번거롭다. 이런 경우에 사용할 수 있는 것이 바로 using 이라는 지시어이다.
//using namespace std;는 바로 우리가 현재 사용하는 이름 공간을 std로 설정을 하는 문장이다. 따라서 std 안에 모든 이름은 std를 생략하고 사용할 수 있다.
int main(void)
{
	/*cout << "나의 첫 번째 C++프로그램" << endl; 코드를 실행하면 실행 결과가 나의 첫 번째 C++프로그램 이라는 문자열을 출력을 해주는 코드.
	endl(end of line) 줄의 끝을 의미하고 개행을 시켜준다. \n과 동일하다.
	cout은 콘솔 화면에 데이터를 출력하는 작업을 맡은 객체이다. 화면에 데이터를 출력하려면 cout과 << 연산자를 사용하면 된다.
	어떠한 데이터도 << 연산자를 사용하여 출력할 수 있다.*/

	cout << 10 << "개의 사과가 있습니다." << endl;
	cout << 'a';
	cout << "나의 첫 번째 C++ 프로그램" << endl;
	//printf("안녕하세여");
	return 0;
}

//Ctrl + shift + a : 새 항목 파일 만드는 단축키
//Ctrl + F5 : 디버깅 하지 않고 바로 실행