//#pragma once�� ���־� ��Ʃ������� �����ϴ� ������ ��ó����ν�
//��� �ڵ峪 ��������� �ٸ� �ڵ峪 ������� include�� ��, �ߺ�
//�Ǿ� ����Ǵ� ���� �����ϴ� ����� �Ѵ�.

#pragma once
#include <iostream>
//#include <cmath>

using namespace std;
//����ڷκ��� ������ �Է¹޴� �Լ�
int get_integer(void) {
	
	int num = 0;
	cin >> num;

	return num;
}
//�ŵ������� ���ϴ� �Լ�
int power(int x, int y) {
	int result = 1, i = 0;

	//int re = pow(x, y);	
	//cmath��� ������ ������ ��� �����;��ϱ� ������ �뷮�� Ŀ����.
	//�Ʒ��ڵ�� ���� pow()�Լ��� ������ �ڵ�
	for (int i = 0; i < y; i++) {
		result += x;
	}
	return result;
}