//중첩 if문을 실습
//학점 처리
//A+, A-, B+, B- ...으로 표식

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//	int score = 0;
//	string grade = " ";
//
//	cout << "당신의 과목 점수를 입력하세요 : ";
//	cin >> score;
//
//	if(cin.fail()) {
//		cout << "입력하신 값은 0~100사이의 값이 아닙니다." << endl;
//		cout << "프로그램을 종료합니다." << endl;
//	}
//	//중첩 if문을 사용하여 학점을 선정하는 코드
//	if (score >= 90 && score <= 100) {
//		//중첩 if문(무제한적으로 들어갈 수가 있다. 하지만 웬만하면 2개 정도만 사용하자.
//		if (score >= 95) {	//95~100
//			grade = "A+";
//		}
//		else {
//			grade = "A-";
//		}
//	}
//	else if (score >= 80 && score < 90) {
//		if (score >= 85) {	//85~89
//			grade = "B+";
//		}
//		else {
//			grade = "B-";
//		}
//	}
//	else if (score >= 70 && score < 80) {
//		if (score >= 75) {	//75~79
//			grade = "C+";
//		}
//		else {
//			grade = "C-";
//		}
//	}
//	else if (score >= 60 && score < 70) {
//		if (score >= 65) {	//65~69
//			grade = "D+";
//		}
//		else {
//			grade = "D-";
//		}
//	}
//	else {
//		grade = "F";
//	}
//
//	cout << "입력한 점수는 " << score << "입니다." << endl;
//	cout << "점수의 학점 등급 : " << grade << "입니다." << endl;
//	return 0;
//}