//배열에 대한 실습 - 4
//배열과 for문을 이용하여 사용자로부터 3개의 과목의 점수를 입력받고 총점과 평균을 구하는 프로그램 작성해보기

//#include <iostream>
//#define LENGTH 3
//using namespace std;
//
//int main(void) {
//	//정수형 배열 선언 및 초기화
//	int score[LENGTH] = { 0 };
//	int count = 0, sum = 0;
//	double avg = 0.0;
//
//	//사용자로부터 3개의 과목 점수를 반복해서 입력을 받는 코드
//	/*for (count = 0; count < LENGTH; count++) {
//		cout << count + 1 << " 과목 : ";
//		cin >> score[count];
//	}*/
//
//	//참조자를 통한 3과목 입력코드
//	for (int& i : score) {
//		cout << count + 1 << "과목 : ";
//		cin >> score[count++];
//	}
//
//	//입력된 값 출력 코드
//	//for (int i : score) {
//	//	//배열의 값 자체를 가지고 배열의 인덱스로 처리하여 엉뚱한 결과가 초래된다.
//	//	//cout << score[i] << " ";	
//	//	cout << i << " ";
//	//}
//	//cout << endl;
//
//	//입력된 3개의 과목의 총점을 구하는 코드
//	for (int i : score) {
//		sum += i;
//	}
//	cout << "총점 : " << sum << endl;
//	//평균을 구하는 코드
//	avg = (double)sum / LENGTH;
//	//cout << fixed 로 고정을 시키고, 이어서 cout.precision()를 사용하면 소수점 부분만 자릿수를 설정한다.
//
//	cout << fixed;	//소수점을 고정시키겠다.
//	cout.precision(3);	//소수점 자리 설정
//
//	cout << "평균 : " << avg << endl;
//	//위에서 소수점 설정한 부분을 다시 해제를 하는 것
//	cout.unsetf(ios::fixed);
//	//cout.precision()함수는 소수점 아래 부분의 출력 범위만 설정하는 게 아니라 실수의 정수부와 소수부를 합친 전체의 출력부분을 설정하는 함수이다.
//	cout.precision(10); //전체 자리수를 총 26자리까지 나올 수 있게 하겠다 모든 숫자를
//	cout << 5 / 3.0 << endl;
//	return 0;
//}