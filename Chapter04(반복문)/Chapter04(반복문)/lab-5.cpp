//#include <iostream>
//using namespace std;
//
//int main(void) {
//	
//	int dan = 0, cnt = 0, recent = 1, gob = 0;
//	char yn = ' ';
//
//	do {
//		cout << "<" << recent << "ȸ ���� >" << endl;
//		//��ø for ������ ������ ����
//		for (cnt = 1; cnt < 10; cnt++)
//		{
//			for (dan = 2; dan < 10; dan++)
//			{
//				gob = dan * cnt;
//				cout << dan << " * " << cnt << " = " << gob << " ";
//			}
//			cout << endl;
//		}
//		re :
//		//����� ������ ����� �ڵ�
//		cout << "���α׷��� �ٽ� �����Ͻðڽ��ϱ�?(Y,y / N,n) : ";
//		cin >> yn;
//
//		switch (yn)
//		{
//		case 'Y':
//		case 'y':
//			recent++;
//			continue;
//			//break ���� ��� ���α׷��� �����ϴµ� ������ ����. ����, ���� ������ ���� ���� ���̴�.
//			break;
//		case 'N':
//		case 'n':
//			cout << "�� " << recent << "ȸ ���� �� ���α׷��� �����մϴ�." << endl;
//			return 0;
//			break;
//		default:
//			cout << "�Է��Ͻ� ���ĺ� " << yn << "��(��) ������� �ʽ��ϴ�." << endl;
//			cout << "���ĺ��� �ٽ� �Է��ϼ���." << endl;
//			goto re;
//			break;
//		}
//	} while (true);
//	return 0;
//}