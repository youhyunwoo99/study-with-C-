//2���� �迭�� �ǽ�
//����ڷκ��� 2���� �л��� ����, �׸��� �л� ������ 3���� ������ �Է� �޾Ƽ� ������ ����� ���ϴ� ���α׷� �����

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
//	int students[ROW][COL] = { 0 };	//�л����� �����ϴ� ��
//	double avg = 0.0;
//	//�л� 2�� ���� �ݺ� ����-�ܺη���
//	for (int(&cnt)[COL] : students) {
//		cout << "�� �л� " << num + 1 << "�� ����� 3���� ������ �Է� " << endl;
//		//�л� ������ �Է¹޴� �ڵ�
//		cout << num + 1 << " ���� : ";
//		cin >> name;
//		//���η������� 3���� ������ �Է¹޴� �ڵ�
//		for (int& j : students[i]) {
//			cout << "���� " << cnt1 << "�� ���� : ";
//			cin >> j;
//			cnt1++;
//		}
//		cout << endl;
//		for (int j : students[i]) {
//			total += j;
//		}
//		avg = (double)total / COL;
//		//���� ���ϴ� �ڵ�
//		
//		//�л� 1�� ���� ����, ����, ����� ����ϴ� �ڵ�
//		cout << name << "�� ���� ��Ȳ" << endl;
//		cout << "���� : " << total << endl;
//
//		cout << fixed;
//		cout.precision(2);
//		cout << "��� : " << avg << endl;
//		total = 0;
//		num++;
//		cnt1 = 1;
//		cout << endl;
//	}
//	cout << "�л� " << ROW << "���� ����� ���ϰ� ����" << endl;
//		return 0;
//}