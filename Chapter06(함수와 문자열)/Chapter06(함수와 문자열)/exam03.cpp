//수학함수의 실습 -2

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(void) {
//	int choice = 0;
//	double result = 0.0, num1 = 0.0, num2 = 0.0;
//
//	do
//	{
//		cout << "1. 제곱값을 출력하는 프로그램" << endl;
//		cout << "2. 제곱근을 출력하는 프로그램" << endl;
//		cout << "3. 프로그램 종료" << endl << endl;
//
//		cout << "번호 선택 : ";
//		cin >> choice;
//		if (cin.fail()) {	//숫자가 들어오지 않는다면
//			cout << "번호 1, 2, 3만 허용 합니다." << endl << endl;
//			return 0;
//		}
//		switch (choice)
//		{
//		case 1 :
//			cout << "1. 제곱값 출력 프로그램" << endl;
//			cout << "제곱 대상 실수 입력 : ";
//			cin >> num1;
//
//			cout << "지수(승) 입력 : ";
//			cin >> num2;
//
//			result = pow(num1, num2); //제곱값을 계산
//			cout << num1 << "의 " << num2 << "승의 결과 값 : " <<
//				result << endl << endl;
//			break;
//		case 2:
//			cout << "2. 제곱근 출력 프로그램" << endl;
//			cout << "제곱근을 구할 실수 입력 : ";
//			cin >> num1;
//
//			result = sqrt(num1); //제곱값을 계산
//			cout << num1 << "의 제곱근 결과 값 : " <<
//				result << endl << endl;
//			break;
//		case 3:
//			cout << "3. 프로그램을 종료합니다." << endl;
//			return 0;
//		default:
//			cout << "선택 오류! 숫자 1, 2, 3 중에서 선택하세요.";
//			break;
//		}
//
//	} while (true);
//}