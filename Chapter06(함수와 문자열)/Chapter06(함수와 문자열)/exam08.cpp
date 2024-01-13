//사용자 정의 함수에 대한 실습 - 2
//사용자 정의 함수를 헤더파일로 함수 모듈화 하기


//#include "my_power.h"	
////사용자가 만든 헤더 파일은 <>사용하지 않고 ""을 사용하여 포함시킨다.
//
//int main(void) {
//	
//	int num1 = 0, num2 = 0, result = 0;
//	cout << "거듭제곱 대상 정수를 입력하세요 : ";
//	num1 = get_integer();	//get_integer() 호출
//
//	cout << "지수(승)를 입력하세요 : ";
//	num2 = get_integer();
//
//	result = power(num1, num2);
//	cout << num1 << "의 " << num2 << "승은 " << result << "입니다."
//		<< endl << endl;
//
//	return 0;
//}