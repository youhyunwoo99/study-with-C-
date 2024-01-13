//종합실습 예제-3(while)
//출력결과와 같이 무한루프를 돌리면서 프로그램을 작성하시오.

/*#include <iostream>
using namespace std;

int main(void) {

	int num = 0, speed = 0;
	bool flag = true;
	
	while (flag)
	{
		cout << "1. 증속 | 2. 감속 | 3. 중지 " << endl;
		cout << "----------------------------" << endl;
		cout << "선택 : ";
		cin >> num;

		if (num == 1) {
			speed++;
			cout << "현재 속도 : " << speed << endl;
		}
		else if (num == 2) {
			if (speed == 0)
			{
				speed = 0;
				cout << "현재 속도 : " << speed << endl;
			}
			else {
				speed--;
				cout << "현재 속도 : " << speed << endl;
			}
			
		}
		else if (num == 3) {
			cout << "프로그램 종료" << endl;
			flag = false;
		}
		else
		{
			cout << "잘못된 입력값입니다." << endl;
			cout << "현재 속도 : " << speed << endl;
			cout << "----------------------" << endl;
			continue;
		}
		num = 0;
	}
	return 0;
}*/