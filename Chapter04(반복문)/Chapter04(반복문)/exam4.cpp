//do~while ���� �ǽ�-2
//������� ������ ����� ������ ����ϴ� ���α׷�

/*#include <iostream>
using namespace std;

int main(void) {
	int jumsu = 0, cnt = 1; //������ �Է¹��� ������ �ݺ� Ƚ�� ī�����ϴ� ����
	char op = ' ';

	do {
		cout << "<" << cnt << "ȸ ����>" << endl;
		//����ڿ��� ������ ����� �ڵ�
		cout << "���α׷��� �����ϰڽ��ϱ�?(Y, y/ N, n) : ";
		cin >> op;

		//������� ���ÿ� ���� ���α׷� �б�
		if (op == 'N' || op == 'n') {
			cout << "�� " << cnt << "ȸ ���� �� �����մϴ�." << endl;
			break;
		}
		else if (op == 'Y' || op == 'y') {	//���α׷��� �����ϰڴ�.
		re_jumsu:	//���̺� ����ÿ��� �ݵ�� : �ݷ��� �ٿ��� �Ѵ�.
			cout << "���� �Է� : ";
			cin >> jumsu;
			//������ ����ϱ� ���ؼ� ��ø if���� �ۼ�
			if (jumsu <= 100 && jumsu >= 90) {
				cout << "A����" << endl;
			}
			else if (jumsu < 90 && jumsu >= 80) {
				cout << "B����" << endl;
			}
			else if (jumsu < 80 && jumsu >= 70) {
				cout << "C����" << endl;
			}
			else if (jumsu < 70 && jumsu >= 60) {
				cout << "D����" << endl;
			}
			else if (jumsu < 60 && jumsu >= 0) {
				cout << "F����" << endl;
			}
			else {
				cout << "���� " << jumsu << "��(��) ��� ������ �ƴմϴ�." << endl;
				cout << "������ �ٽ� �Է����ּ���" << endl;
				cnt++;
				goto re_jumsu;
			}
			cnt++;
		}
	} while (true);
}*/