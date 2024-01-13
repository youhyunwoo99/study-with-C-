//2차원 배열의 실습
//사용자로부터 2명의 학생의 성명, 그리고 학생 각각의 3개의 과목을 입력 받아서 총점과 평균을 구하는 프로그램 만들기

//#include <string>
//#include <iostream>
//#define ROW 3
//#define COL 3
//
//using namespace std;
//
//int main(void) {
//	string name = " ";
//	int row = 0, col = 0, total = 0, i=0, num = 0, cnt1=1;
//	int students[ROW][COL] = { 0 };	//학생점수 저장하는 곳
//	double avg = 0.0;
//	//학생 2명에 대한 반복 수행-외부루프
//	for (int(&cnt)[COL] : students) {
//		cout << "▶ 학생 " << num + 1 << "의 성명과 3개의 과목을 입력 " << endl;
//		//학생 성명을 입력받는 코드
//		cout << num + 1 << " 성명 : ";
//		cin >> name;
//		//내부루프에서 3개의 과목을 입력받는 코드
//		for (int& j : students[i]) {
//			cout << "과목 " << cnt1 << "의 점수 : ";
//			cin >> j;
//			cnt1++;
//		}
//		cout << endl;
//		for (int j : students[i]) {
//			total += j;
//		}
//		avg = (double)total / COL;
//		//총점 구하는 코드
//		
//		//학생 1명에 대한 성명, 총점, 평균을 출력하는 코드
//		cout << name << "의 성적 현황" << endl;
//		cout << "총점 : " << total << endl;
//
//		cout << fixed;
//		cout.precision(2);
//		cout << "평균 : " << avg << endl;
//		total = 0;
//		num++;
//		cnt1 = 1;
//		cout << endl;
//	}
//	cout << "학생 " << ROW << "명의 평균을 구하고 종료" << endl;
//		return 0;
//}