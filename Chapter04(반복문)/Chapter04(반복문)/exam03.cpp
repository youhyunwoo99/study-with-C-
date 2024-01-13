//do~while문의 대한 실습 -1
//입력받는 수까지 누적합계를 출력하는 프로그램
//do~while문은 while문에서 파생되어 나온 반복문이다.
//while문과 다른 점은 최소 한번 수행한다. 그 이유는 바로 조건식 뒤에 있기 때문이다.
//사용자의 의중을 묻고자 하는 프로그램에 적당하다.

//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int su = 0, cnt = 1, hap = 0; //입력, 카운팅, 누적합 변수
//
//	cout << "어디까지 합을 구할까요? : ";
//	cin >> su;
//
//	do {
//		hap += cnt;
//		cout << cnt << "회 실행 : 누적합은 " << hap << endl;
//		cnt++;
//	} while (cnt <= su);
//
//	cout << "1부터 " << su << "까지의 총 누적합 : " << hap << endl;
//	return 0;
//}