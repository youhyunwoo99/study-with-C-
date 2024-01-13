//내장 함수 (C++ 컴파일러에서 제공해주는 라이브러리 함수) 실습 -1
//rand()내장 함수 
//함수란 : 프로그램에서 특정한 기능을 수행하도록 따로 정의를 해두는
//것을 의미한다.
//1. 코드 중복을 줄인다.
//2. 복잡한 문제를 모듈 단위로 분해해서 단순화
//3. 함수는 사용자가 삭제하기 전까지는 재사용이 가능
//4. 함수를 사용함으로 유지, 보수가 매우 수월하다.

//난수 : 특정한 규칙이 없이 예측할 수 없는 임의의 값을 난수라고 칭한다.
//#include <iostream>
//#include<cstdlib>	//rand() 정의
//#include<ctime>	//srand() 정의
//using namespace std;
//#define LENGTH 6
//
//int main(void) {
//	int cnt = 0;
//	//종자값(seed)이 같으면 계속 rand()함수의 값도 동일하게 출력
//	//하여, srand(time(NULL)) 현재 프로그램 실행 시점의 시간은
//	//항상 다르기 때문에 rand()의 종자값이 계속 다르므로 난수도 
//	//다르게 나오는 것이다.
//	srand(time(NULL));
//	cout << time(NULL) << endl << endl;
//
//	//rand()함수와 srand()는 항상 쌍으로 움직인다. 왜? 그렇게 해야
//	//난수를 발생시키기 때문이다.
//
//	cout << "1~45까지 숫자 6개만 출력합니다." << endl;
//	cout << "rand()만 이용합니다." << endl;
//
//	for (cnt = 1; cnt <= LENGTH; cnt++) {
//		//rand() 함수의 범위 : 0 ~ 32767이고 rand()만 사용하니
//		//난수가 계속 같은 값만 출력한다.
//		cout << rand() << "    ";
//	}
//	cout << endl << endl;
//
//	//범위 조정을 하고 난수를 출력
//	cout << "rand()% 45 : ";
//	for (cnt = 1; cnt < LENGTH; cnt++)
//	{
//		cout << (rand() % 45) << "  ";	
//		//난수 범위 : 0 ~ 44 사이의 값 출력
//	}
//	cout << endl << endl;
//
//	cout << "1+rand()% 45 : ";
//	for (cnt = 1; cnt < LENGTH; cnt++)
//	{
//		cout << 1+(rand() % 45) << "  ";
//		//난수 범위 : 1 ~ 45 사이의 값 출력
//	}
//	cout << endl << endl;
//	return 0;
//}