//�����Լ��� �ǽ� -2

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(void) {
//	int choice = 0;
//	double result = 0.0, num1 = 0.0, num2 = 0.0;
//
//	do
//	{
//		cout << "1. �������� ����ϴ� ���α׷�" << endl;
//		cout << "2. �������� ����ϴ� ���α׷�" << endl;
//		cout << "3. ���α׷� ����" << endl << endl;
//
//		cout << "��ȣ ���� : ";
//		cin >> choice;
//		if (cin.fail()) {	//���ڰ� ������ �ʴ´ٸ�
//			cout << "��ȣ 1, 2, 3�� ��� �մϴ�." << endl << endl;
//			return 0;
//		}
//		switch (choice)
//		{
//		case 1 :
//			cout << "1. ������ ��� ���α׷�" << endl;
//			cout << "���� ��� �Ǽ� �Է� : ";
//			cin >> num1;
//
//			cout << "����(��) �Է� : ";
//			cin >> num2;
//
//			result = pow(num1, num2); //�������� ���
//			cout << num1 << "�� " << num2 << "���� ��� �� : " <<
//				result << endl << endl;
//			break;
//		case 2:
//			cout << "2. ������ ��� ���α׷�" << endl;
//			cout << "�������� ���� �Ǽ� �Է� : ";
//			cin >> num1;
//
//			result = sqrt(num1); //�������� ���
//			cout << num1 << "�� ������ ��� �� : " <<
//				result << endl << endl;
//			break;
//		case 3:
//			cout << "3. ���α׷��� �����մϴ�." << endl;
//			return 0;
//		default:
//			cout << "���� ����! ���� 1, 2, 3 �߿��� �����ϼ���.";
//			break;
//		}
//
//	} while (true);
//}