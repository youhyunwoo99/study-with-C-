//while문의 실습-1
//while문의 주용도는 무한루프 전용이며, 아울러 for문에 비해서 초깃값, 조건식, 증감식 각각 따로 떨어져 있다.

//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//	int su = 0, cnt = 0, hap = 0;
//
//re: //goto문을 위한 레이블 이름 설정
//	cout << "어디까지 합을 구할까요? : ";
//	cin >> su;
//	//음수이냐? 양수이냐에 따라서 분기
//	if (su < 0)	{	//음수라면...
//		cout << "음의 정수는 허용하지 않습니다. " << endl;
//		cout << "프로그램을 다시 시작합니다." << endl;
//		goto re;	//음의 정수가 들어오면 위의 메시지를 출력하고 re레이블로 강제로 이동
//	}
//	else {
//		cnt = 1;	//반복문의 초기값을 설정함
//		//반복문을 위한 조건문 설정
//		while (cnt <= su) {
//			hap += cnt;	//누적값, hap = hap + cnt
//			cout << cnt << "회 반복 누적합 : " << hap << endl;
//			cnt++; //while문의 증감식은 루프 내에 존재한다.
//		}
//		cout << "1부터 " << su << "까지 누적합 : " << hap << endl;
//	}
//	return 0;
//}