//
// Task 2-2
//
// Написать программу осуществляющую циклический сдвиг на N позиций влево
// элементов целочисленного массива содержащего m элементов
//
#include "../MainHeader.h"

void task02()
{
	const int sizeArr = 12;
	int a[sizeArr] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int bias = 0;

	cout << " Укажите число сдвига: ";
	cin >> bias;

	if (bias > 0)
	{
		rotate(a, &a[sizeArr] - bias, &a[sizeArr]);

		for (auto sizeArr : a)
		{
			cout << sizeArr << " ";
		}
		cout << endl;
	}
	else cout << "! Введено неверное число"<< endl;
}
/*for (int i = 0; i <= sizeArr-1; i++)
	{
		cout << a[i] << " ";
	}*/
