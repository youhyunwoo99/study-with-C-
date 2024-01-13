//#pragma once는 비주얼 스튜디오에서 제공하는 간편한 전처리기로써
//어떠한 코드나 헤더파일이 다른 코드나 헤더에서 include될 때, 중복
//되어 복사되는 것을 방지하는 기능을 한다.

#pragma once
#include <iostream>
//#include <cmath>

using namespace std;
//사용자로부터 정수를 입력받는 함수
int get_integer(void) {
	
	int num = 0;
	cin >> num;

	return num;
}
//거듭제곱을 구하는 함수
int power(int x, int y) {
	int result = 1, i = 0;

	//int re = pow(x, y);	
	//cmath헤더 파일의 내용을 모두 가져와야하기 때문에 용량이 커진다.
	//아래코드는 직접 pow()함수를 구현한 코드
	for (int i = 0; i < y; i++) {
		result += x;
	}
	return result;
}