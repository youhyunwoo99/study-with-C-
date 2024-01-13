//#include <iostream>
//using namespace std;
//
//int main(void) {
//	//성적 처리 프로그램
//	int score = 0;
//	char grade = ' ';
//
//	cout << "점수를 입력해주세요 : ";
//	cin >> score;
//
//	//fail()은 cin객체의 메소드로써 선언한 타입과 일치하지 아니하면 true를 리턴한다.
//	if (cin.fail()) {
//		cout << "입력하신 값은 0~100사이의 값이 아닙니다." << endl;
//		cout << "프로그램을 종료합니다." << endl;
//		return 0;
//	}
//	else if (score > 100 || score < 0)
//	{
//		cout << "입력하신 값은 0~100사이의 값이 아닙니다...." << endl;
//		cout << "프로그램을 종료합니다." << endl;
//		return 0;
//	}
//	else if (score >= 90) {
//		grade = 'A';
//	}
//	else if (score >= 80) {
//		grade = 'B';
//	}
//	else if (score >= 70) {
//		grade = 'C';
//	}
//	else if (score >= 60) {
//		grade = 'D';
//	}
//	else {
//		grade = 'F';
//	}
//
//	cout << "입력한 점수 : " << score << endl;
//	cout << "점수 등급 : " << grade << endl;
//	//디버깅 : 에러를 잡아나가는 과정이라고 통상 칭한다. 때로는 디버깅은 프로그램의 흐름을 보고자 할 때도 사용한다.
//	//디버깅 방법 : 먼저 어디서부터 시작할 건지 브레이크 포인트(중단점, 토글 포인트)를 설정한다. 그리고 F5번을 눌러서 디버그 모드로 프로그램을 실행시킨다.
//	//F11번 키를 이용하여 한 단계씩 프로그램의 실행과정을 살펴본다. (변수, 배열, 객체, 메모리주소, CPU 관여도 등)
//	//Ctrl + F5키를 이용하면 브레이크 포인트는 무시된다.(중요)
//	return 0;
//}