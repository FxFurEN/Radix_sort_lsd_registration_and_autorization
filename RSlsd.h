#include <iostream>
#include <cstddef>
using namespace std;
const int MAX = 5000;

inline void RadixSortLSD(int* m, int arraySize)
{
	int i, bucket[MAX], maxVal = 0, digitPosition = 1;
	for (i = 0; i < arraySize; i++) {
		if (m[i] > maxVal) maxVal = m[i];
	}
	int pass = 1;  // ������������ ��� ����������� ���������
	/* maxVal: ��� ���������� ���������� ���������� ������ while.
			���� maxVal ����� 3 ������, �� �� ��������� ���� 3 ���� */
	while (maxVal / digitPosition > 0) {
		int digitCount[10] = { 0 };// ����� ��������
		for (i = 0; i < arraySize; i++)// ���������� pos-� ����� (�����)
			digitCount[m[i] / digitPosition % 10]++;
		for (i = 1; i < 10; i++)//  ���������� ����������
			digitCount[i] += digitCount[i - 1];
		for (i = arraySize - 1; i >= 0; i--)// ����� ��������� �������, �������� � �������� �������
				bucket[--digitCount[m[i] / digitPosition % 10]] = m[i];
		for (i = 0; i < arraySize; i++) // ���������� ������� ��������� �������, ��������� �������� � �������
			m[i] = bucket[i];
		digitPosition *= 10;// ����������� ����� ����� �� ��������� 
	}
}
