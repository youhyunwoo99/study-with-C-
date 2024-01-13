//종합 실습 예제-2
#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	string input = " ";

	cout << "점수 입력 : ";
	cin >> num1;
	
	num2 = num1 / 10;
	if (cin.fail()) {
		cout << "입력한 점수 (0~100) " << num1 << "는(은) 허용 구간이 아닙니다." << endl;
		cout << "프로그램을 종료합니다.";
		return 0;
	}
	else if (num1 > 0 && num1 <= 100)
	{
		switch (num2)
		{
		case 10:
			input = "A+";
			cout << "입력한 점수 : " << num1 << endl;
			cout << "점수 등급 : " << input << "학점";
			break;
		case 9:
			if (num1 % 10 >= 5) {
				input = "A+";
				cout << "입력한 점수 : " << num1 << endl;
				cout << "점수 등급 : " << input << "학점";
			}
			else {
				input = "A";
				cout << "입력한 점수 : " << num1 << endl;
				cout << "점수 등급 : " << input << "학점";
			}
			break;
		case 8:
			if (num1 % 10 >= 5) {
				input = "B+";
				cout << "입력한 점수 : " << num1 << endl;
				cout << "점수 등급 : " << input << "학점";
			}
			else {
				input = "B";
				cout << "입력한 점수 : " << num1 << endl;
				cout << "점수 등급 : " << input << "학점";
			}
			break;
		case 7:
			if (num1 % 10 >= 5) {
				input = "C+";
				cout << "입력한 점수 : " << num1 << endl;
				cout << "점수 등급 : " << input << "학점";
			}
			else {
				input = "C";
				cout << "입력한 점수 : " << num1 << endl;
				cout << "점수 등급 : " << input << "학점";
			}
			break;
		case 6:
			if (num1 % 10 >= 5) {
				input = "D+";
				cout << "입력한 점수 : " << num1 << endl;
				cout << "점수 등급 : " << input << "학점";
			}
			else {
				input = "D";
				cout << "입력한 점수 : " << num1 << endl;
				cout << "점수 등급 : " << input << "학점";
			}
			break;
		default:
			input = "F";
			cout << "입력한 점수 : " << num1 << endl;
			cout << "점수 등급 : " << input << "학점";
			break;
		}
	}
	else {
		cout << "점수의 범위가 옳지 않습니다. 프로그램을 종료합니다.";
		return 0;
	}
	return 0;
}