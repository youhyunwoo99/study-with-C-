//유틸리티(사용자에게 편리함을 가져다 준다.) 함수에 대한 실습 -1
//exit(int) : 함수를 종료하고 싶다면 return;문을 사용했다.
//exit()함수는 실행중인 프로세스를 강제로 종료할 때 사용하는 함수
//매개변수가 0일 경우 오류가 없음을 의미를 하고, 1일 경우 오류가 
//발생했음을 의미한다.

/*#include <iostream>
#include <cstdlib>	//exit()가 정의되어 있음
using namespace std;

int main(void) {
	int cnt = 0, hap = 0;

	while (true) {
		hap += cnt;

		if (hap >= 100) {
			cout << "합계가 100이상이 되었습니다." << endl;
			cout << "프로그램 종료" << endl;
			//exit(0);	//실행 프로세스를 종료한다.
			return 0;	//함수의 종료
			//break;
		}
		cnt++;
	}
	return 0;
}*/