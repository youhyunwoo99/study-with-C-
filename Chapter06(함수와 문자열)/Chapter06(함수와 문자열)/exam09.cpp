//�Լ��� �μ��� �����ϴ� 2���� ���
//1. ���� ���� ȣ��(call by value : ����� ���� �Լ��� ȣ���� ��,
//�μ��� �� ��ü�� �����ϴµ� ���� ����� ���޵� ���� �Լ��� �Ű�����
//�� ����Ǿ� ����� ����ǰ� �Լ��� ���Ḧ �ϴ��� ȣ���� ���� ����
//������ ��ġ�� �ƴ��Ѵ�. �Լ��� ȣ���� ���� ������ �Ű������� ������
//Ÿ��, ������ �ݵ�� ��ġ�ؾ� �Ѵ�. ���� Ÿ�Ե� �����ؾ� �Ѵ�.

//call by value 

//#include <iostream>
//using namespace std;
//
////�Լ� ����(�����)
//int call_value(int num);
//
//int main(void) {
//	
//	int num = 100, call_after = 0;
//
//	cout << "[main() �Լ� ����]" << endl;
//	cout << "�Լ� ȣ�� ��> num�� �� : " << num << endl;
//	cout << "�Լ� ȣ�� ��> num�� �ּҰ� : " << &num << endl;
//	cout << "�Լ� ȣ�� ��> call_after�� �� : " << call_after << endl;
//	cout << "�Լ� ȣ�� ��> call_after�� �ּҰ� : " << &call_after << endl;
//	cout << endl;
//	call_after = call_value(num);
//
//	cout << "[main() �Լ� �������� ���ƿ�]" << endl;
//	//call by value������ �μ����� ������ ���� ��ġ�� �ƴ��Ѵ�.
//	cout << "�Լ� ȣ�� ��> num�� �� : " << num << endl;
//	cout << "�Լ� ȣ�� ��> num�� �ּҰ� : " << &num << endl;
//	cout << "�Լ� ȣ�� ��> call_after�� �� : " << call_after << endl;
//	cout << "�Լ� ȣ�� ��> call_after�� �ּҰ� : " << &call_after << endl;
//	
//	return 0;
//}
////����� ���� �Լ� ����
//int call_value(int num) {	
//	//main()�Լ����� �Ѿ���� num�� ���� 100�� �Ű����� num�� ���簡 �̷������.
//	
//	cout << "[call_value() �Լ� ����" << endl;
//	cout << "���簡�Ǿ��� num�� �� : " << num << endl;
//	//main()�� num ������ call_value()�� num ������ �ּҰ��� ������
//	//�ٸ���.
//	cout << "[call_value() �Լ��� num�� �ּҰ� : " << &num << endl;
//	cout << "�Լ� ���� > ����Ǿ��� �� 100�� 50�� ���Ͽ� main()���� ��ȯ��" << endl;
//
//	num += 50;
//	cout << "�Լ� ���� �Ϸ�>  main()�� ��ȯ �Ϸ��" << endl;
//	cout << endl;
//	return num;
//}