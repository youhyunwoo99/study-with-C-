//��ø if���� �ǽ�
//���� ó��
//A+, A-, B+, B- ...���� ǥ��

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//	int score = 0;
//	string grade = " ";
//
//	cout << "����� ���� ������ �Է��ϼ��� : ";
//	cin >> score;
//
//	if(cin.fail()) {
//		cout << "�Է��Ͻ� ���� 0~100������ ���� �ƴմϴ�." << endl;
//		cout << "���α׷��� �����մϴ�." << endl;
//	}
//	//��ø if���� ����Ͽ� ������ �����ϴ� �ڵ�
//	if (score >= 90 && score <= 100) {
//		//��ø if��(������������ �� ���� �ִ�. ������ �����ϸ� 2�� ������ �������.
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
//	cout << "�Է��� ������ " << score << "�Դϴ�." << endl;
//	cout << "������ ���� ��� : " << grade << "�Դϴ�." << endl;
//	return 0;
//}