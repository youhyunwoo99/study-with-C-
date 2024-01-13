//중복함수(overloaded function)에 실습
//함수의 선언부
//매개변수의 개수, 타입, 순서를 시그니쳐라고 한다.
//함수이름을 아끼면서 프로그래머도 여러 개의 함수를 외울 필요가 없다.
//overload : 과적하다, 부담을 많이 지우다
//중복함수는 함수명이 같아야 한다.
//매개변수의 시그니쳐가 달라야 한다.
//매개변수는 같고 리턴타입이 다른 경우는 오버로딩 성립에 관여하지 
//않는다.

#include <iostream>
using namespace std;

int add(int x, int y);
//리턴타입은 오버로딩 성립조건에 관여하지 아니한다. 오직 매개변수의
//개수, 순서, 타입에 의해서 결정지어진다.(중요)
//long add(int x, int y);
double add(double x, double y);
int add(int arr[], int size);
int add(int* arr, int size);

int main(void) {

	int x = 10, y = 20;
	double d_x = 1.88, d_y = 1.99;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(int);
	int* ptr = arr;
	
	cout << "add(int x, int y) 호출 후의 값 : " << add(x, y) << endl
		<< endl;
	cout << "add(double x, double y) 호출 후의 값 : " << add(x, y) << endl
		<< endl;
	cout << "add(arr[], size) 호출 후의 값 : " << add(arr, size) << endl
		<< endl;
	cout << "add(ptr, size) 호출 후의 값 : " << add(ptr, size) << endl
		<< endl;
	
	return 0;
}
//중복함수는 매개변수는 다르지만 add(더하기 기능)와 같은 기능을 하는
//것은 동일하다.
int add(int x, int y) {
	return x + y;
}
double add(double x, double y) {
	return x + y;
}
//int add(int arr[], int size) {
//
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	return sum;
//} 아래꺼나 요거나 둘 중에 하나만 있으면 된다. 주소가 동일하게 넘어
//오고 매개변수의 갯수와 순서, 타입이 같다면 동일한게 인식을 하고
//이전에 있는 값을 사용하게 된다.
int add(int *ptr, int size) {

	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += ptr[i];
	}
	return sum;
}