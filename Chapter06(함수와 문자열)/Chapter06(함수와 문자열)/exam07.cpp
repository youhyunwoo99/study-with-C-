//사용자 정의 함수에 대한 실습 - 1
//함수는 선언부, 구현부로 나눈다. 
//함수는 선언부가 구현부에 비해서 월등하게 중요하다. 그 이유는
//선언부에 함수를 어떻게 호출할지 다 적혀있다.
//선언부 : 반환타입(리턴타입), 함수의 이름(명), (매개변수(인자값,
//parameter, arguments 매개변수는 없을 수도 있고 N개 까지 존재할
//수도 있다.
//반환타입은 반드시 void(공허한, 없는)가 아닌 이상은 반드시 return
//문이 있어야 한다. return문도 반드시 함수의 선언부 반환타입과
//일치해야 된다. 매개변수의 개수 그리고 타입(자료형)을 보고 그에
//개수와 타입에 맞게끔 호출해야 한다.

//add()사용자 정의 함수를 만들어서 직접 프로그램 만들기

//#include <iostream>
//#include <cstdlib>
//using namespace std;
////함수 선언부를 적어줌으로써 컴파일러에게 이 함수를 사용하겠다
////라고 알리는 것이다.
//int add(int, int);	//함수의 선언부
//
//int main(void) {
//
//	int x = 10, y = 50, hap = 0;
//
//	cout << "매개변수 2개의 덧셈 연산" << endl;
//	cout << "[main()] 영역임" << endl;
//	cout << "전달 > " << x << ", " << y << "를 add()에 전달" << endl << endl;
//
//	hap = add(x, y);
//
//	cout << "[main()] 영역으로 돌아옴" << endl;
//	cout << "함수 호출 후 hap의 값 : " << hap << endl << endl;
//	return 0;
//}
//
////사용자 정의 함수 구현
//int add(int x, int y) {
//	int result = 0;		//지역변수(함수 내에 존재하는 변수)
//	cout << "[add()함수 영역]" << endl;
//	cout << "수행 > 덧셈 연산 결과를 main()함수에 반환" << endl;
//	result = x + y;
//
//	return result;
//}