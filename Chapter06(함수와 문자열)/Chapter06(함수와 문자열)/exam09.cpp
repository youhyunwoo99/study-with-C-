//함수에 인수를 전달하는 2가지 방법
//1. 값에 의한 호출(call by value : 사용자 정의 함수를 호출할 때,
//인수의 값 자체를 전달하는데 전달 방식이 전달된 값이 함수의 매개변수
//에 복사되어 명령이 수행되고 함수를 종료를 하더라도 호출한 곳에 전혀
//영향을 끼치지 아니한다. 함수를 호출할 때는 무조건 매개변수의 개수와
//타입, 순서가 반드시 일치해야 한다. 리턴 타입도 동일해야 한다.

//call by value 

//#include <iostream>
//using namespace std;
//
////함수 원형(선언부)
//int call_value(int num);
//
//int main(void) {
//	
//	int num = 100, call_after = 0;
//
//	cout << "[main() 함수 영역]" << endl;
//	cout << "함수 호출 전> num의 값 : " << num << endl;
//	cout << "함수 호출 전> num의 주소값 : " << &num << endl;
//	cout << "함수 호출 전> call_after의 값 : " << call_after << endl;
//	cout << "함수 호출 전> call_after의 주소값 : " << &call_after << endl;
//	cout << endl;
//	call_after = call_value(num);
//
//	cout << "[main() 함수 영역으로 돌아옴]" << endl;
//	//call by value에서는 인수값의 영향을 전혀 끼치지 아니한다.
//	cout << "함수 호출 후> num의 값 : " << num << endl;
//	cout << "함수 호출 후> num의 주소값 : " << &num << endl;
//	cout << "함수 호출 후> call_after의 값 : " << call_after << endl;
//	cout << "함수 호출 후> call_after의 주소값 : " << &call_after << endl;
//	
//	return 0;
//}
////사용자 정의 함수 구현
//int call_value(int num) {	
//	//main()함수에서 넘어오는 num의 값이 100이 매개변수 num에 복사가 이루어진다.
//	
//	cout << "[call_value() 함수 영역" << endl;
//	cout << "복사가되어진 num의 값 : " << num << endl;
//	//main()의 num 변수와 call_value()의 num 변수의 주소값은 완전히
//	//다르다.
//	cout << "[call_value() 함수의 num의 주소값 : " << &num << endl;
//	cout << "함수 수행 > 복사되어진 값 100에 50을 더하여 main()으로 반환함" << endl;
//
//	num += 50;
//	cout << "함수 수행 완료>  main()로 반환 완료됨" << endl;
//	cout << endl;
//	return num;
//}