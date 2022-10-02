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
	int pass = 1;  // используется для отображения прогресса
	/* maxVal: эта переменная определяет количество циклов while.
			если maxVal равен 3 цифрам, то мы повторяем цикл 3 раза */
	while (maxVal / digitPosition > 0) {
		int digitCount[10] = { 0 };// сброс счетчика
		for (i = 0; i < arraySize; i++)// количество pos-й цифры (ключи)
			digitCount[m[i] / digitPosition % 10]++;
		for (i = 1; i < 10; i++)//  накопление количества
			digitCount[i] += digitCount[i - 1];
		for (i = arraySize - 1; i >= 0; i--)// Чтобы сохранить порядок, начинаем с обратной стороны
				bucket[--digitCount[m[i] / digitPosition % 10]] = m[i];
		for (i = 0; i < arraySize; i++) // измененние порядка исходного массива, используя элементы в корзине
			m[i] = bucket[i];
		digitPosition *= 10;// перемещение цифру вверх по положению 
	}
}
