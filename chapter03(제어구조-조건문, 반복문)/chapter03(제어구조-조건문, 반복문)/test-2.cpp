//���� �ǽ� ����-2
#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	string input = " ";

	cout << "���� �Է� : ";
	cin >> num1;
	
	num2 = num1 / 10;
	if (cin.fail()) {
		cout << "�Է��� ���� (0~100) " << num1 << "��(��) ��� ������ �ƴմϴ�." << endl;
		cout << "���α׷��� �����մϴ�.";
		return 0;
	}
	else if (num1 > 0 && num1 <= 100)
	{
		switch (num2)
		{
		case 10:
			input = "A+";
			cout << "�Է��� ���� : " << num1 << endl;
			cout << "���� ��� : " << input << "����";
			break;
		case 9:
			if (num1 % 10 >= 5) {
				input = "A+";
				cout << "�Է��� ���� : " << num1 << endl;
				cout << "���� ��� : " << input << "����";
			}
			else {
				input = "A";
				cout << "�Է��� ���� : " << num1 << endl;
				cout << "���� ��� : " << input << "����";
			}
			break;
		case 8:
			if (num1 % 10 >= 5) {
				input = "B+";
				cout << "�Է��� ���� : " << num1 << endl;
				cout << "���� ��� : " << input << "����";
			}
			else {
				input = "B";
				cout << "�Է��� ���� : " << num1 << endl;
				cout << "���� ��� : " << input << "����";
			}
			break;
		case 7:
			if (num1 % 10 >= 5) {
				input = "C+";
				cout << "�Է��� ���� : " << num1 << endl;
				cout << "���� ��� : " << input << "����";
			}
			else {
				input = "C";
				cout << "�Է��� ���� : " << num1 << endl;
				cout << "���� ��� : " << input << "����";
			}
			break;
		case 6:
			if (num1 % 10 >= 5) {
				input = "D+";
				cout << "�Է��� ���� : " << num1 << endl;
				cout << "���� ��� : " << input << "����";
			}
			else {
				input = "D";
				cout << "�Է��� ���� : " << num1 << endl;
				cout << "���� ��� : " << input << "����";
			}
			break;
		default:
			input = "F";
			cout << "�Է��� ���� : " << num1 << endl;
			cout << "���� ��� : " << input << "����";
			break;
		}
	}
	else {
		cout << "������ ������ ���� �ʽ��ϴ�. ���α׷��� �����մϴ�.";
		return 0;
	}
	return 0;
}