//배열에 대한 실습-1
//배열은 같은 데이터 타입의 많은 양의 데이터를 처리하기 위한 자료구조이다.
//아울러, 배열은 연속된 메모리 공간(스택)을 할당받는다.
//배열을 선언하는 구성요소 : 배열의 데이터 타입, 배열명(주소), 배열의 크기([0을 초과해야한다.])
//기본형 데이터 타입의 배열을 선언하는데 초기화를 하지 않으면 어떻게 출력되는지 살펴보자.

//#include <iostream>
//using namespace std;
//
//int main(void) {
//	
//	//문자형 배열
//	char char_name[10] = {'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I'};
//
//	short short_name[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	int int_name[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 0 };
//
//	double double_name[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 0 };
//
//	cout << "char_name 배열의 시작 주소 : " << &char_name << endl;
//	//ostream(출력스트림)이용 시에는 C++는 문자형 배열을 string타입으로 인식을 한다.
//	//string 타입 특성 상 문자열의 끝을 알리는 '\0'가 들어오지 않는 문자열이 끝이 났다고 인식하지 않는다.
//	//(C++에서 string은 '\0'라고 하는 null이 들어오면 문자열의 끝으로 인식을 하는 Zero-Terminated 구조이다.
//	//이러한 이유로 char형 배열은 주소를 출력할 때 문제가 되는 것이다.
//	//다른 자료형은 문제없이 주소가 다 잘 출력이 된다.
//	for (int i = 0; i < 10; i++) {
//		cout << "char_name [" << i << "]배열의 주소 : " << reinterpret_cast<void *>(char_name[i]) << endl;
//	}
//	//short형의 주소 출력
//	for (int i = 0; i < 10; i++) {
//		cout << "short_name [" << i << "]배열의 주소 : " << &short_name[i] << endl;
//	}
//	//int형의 주소 출력
//	for (int i = 0; i < 10; i++) {
//		cout << "int_name [" << i << "]배열의 주소 : " << &int_name[i] << endl;
//	}
//	//double형의 주소 출력
//	for (int i = 0; i < 10; i++) {
//		cout << "double_name [" << i << "]배열의 주소 : " << &double_name[i] << endl;
//	}
//
//	//결론은 모든 변수, 배열, 객체 등은 초기화를 시켜주지 아니하면 쓰레기 값으로 초기화 된다.
//	return 0;
//}