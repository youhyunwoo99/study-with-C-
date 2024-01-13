//auto 키워드 : 자동변수라는 의미밖에 없었지만 C++ 11 auto의 의미가 바뀌었다.
//자료형을 생략할 때 사용할 수 있는 키워드로 auto이다. 자동 타입 추론
//#include<iostream>
//#include <string>
//using namespace std;
////함수의 매개변수로는 auto를 사용할 수 없다.
//auto add(int x, double y) {
//	return x + y;
//}
//
//int main(void) {
//	double d = 1.0;
//	auto ad = 1;
//	auto result = 0.0;
//	result = add(10, 20.11);
//
//	cout << "변수 d의 바이트 크기 : " << sizeof(d) << endl;
//	cout << "변수 ad의 바이트 크기 : " << sizeof(ad) << endl;
//
//	cout << "함수 add()의 리턴값 : " << add(5, 6.11) << endl << "바이트 크기 : " << sizeof(result)<< endl;
//	cout << "result : " << result << endl;
//	return 0;
//}