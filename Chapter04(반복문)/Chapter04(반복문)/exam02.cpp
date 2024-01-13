//while문의 실습-2(누적합계를 무한루프로 변경)
//무한루프를 돌리면 빠져나가야 조건을 제시(탈출시점)

//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int su = 0, cnt = 0, hap = 0;
//	int con = 0;
//	bool condition = true;
//
//	while (condition) {	//무한루프를 돌리기 위해서 condition bool값을 주었다.
//
//		cout << "어디까지 합을 구할까요? : ";
//		cin >> su;
//
//		if (su < 0) {
//			cout << "음의 정수는 허용하지 않습니다." << endl;
//			cout << "프로그램을 다시 시작합니다." << endl;
//			continue; //아래 문장을 실행하지 않고 반복문의 처음으로 이동
//		}
//		else {
//			cnt = 1;	//초깃값 설명
//			//반복문을 위한 조건을 설정
//			while (cnt <= su) {
//				hap += cnt;
//				cout << cnt << "회 반복 누적합 : " << hap << endl;
//
//				//무한루프 탈출 코드(내부 루프를 빠져나가는 탈출코드)
//				if (hap > 50) {
//					cout << "누적합계가 50을 초과하여 프로그램을 종료합니다." << endl;
//				}
//				cnt++;
//			}
//		}
//		cout << "계속 하시겠습니까?( 1:계속, 0:중지) : ";
//		cin >> condition;
//
//		if (condition == 0) {
//			cout << "프로그램을 종료합니다." << endl;
//			break; //무한루프를 빠져나가는 코드
//		}
//		hap = 0;	//계속 진행한다고 하면 hap이라는 변수를 초기화 해줘야한다.
//	}
//	return 0;
//}