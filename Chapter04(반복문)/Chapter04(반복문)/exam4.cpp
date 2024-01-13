//do~while 문의 실습-2
//사용자의 의중을 물어보고 학점을 출력하는 프로그램

/*#include <iostream>
using namespace std;

int main(void) {
	int jumsu = 0, cnt = 1; //점수를 입력받을 변수와 반복 횟수 카운팅하는 변수
	char op = ' ';

	do {
		cout << "<" << cnt << "회 실행>" << endl;
		//사용자에게 의중을 물어보는 코드
		cout << "프로그램을 시작하겠습니까?(Y, y/ N, n) : ";
		cin >> op;

		//사용자의 선택에 따라 프로그램 분기
		if (op == 'N' || op == 'n') {
			cout << "총 " << cnt << "회 수행 후 종료합니다." << endl;
			break;
		}
		else if (op == 'Y' || op == 'y') {	//프로그램을 시작하겠다.
		re_jumsu:	//레이블 선언시에는 반드시 : 콜론을 붙여야 한다.
			cout << "점수 입력 : ";
			cin >> jumsu;
			//학점을 출력하기 위해서 중첩 if문을 작성
			if (jumsu <= 100 && jumsu >= 90) {
				cout << "A학점" << endl;
			}
			else if (jumsu < 90 && jumsu >= 80) {
				cout << "B학점" << endl;
			}
			else if (jumsu < 80 && jumsu >= 70) {
				cout << "C학점" << endl;
			}
			else if (jumsu < 70 && jumsu >= 60) {
				cout << "D학점" << endl;
			}
			else if (jumsu < 60 && jumsu >= 0) {
				cout << "F학점" << endl;
			}
			else {
				cout << "점수 " << jumsu << "는(은) 허용 구간이 아닙니다." << endl;
				cout << "점수를 다시 입력해주세요" << endl;
				cnt++;
				goto re_jumsu;
			}
			cnt++;
		}
	} while (true);
}*/