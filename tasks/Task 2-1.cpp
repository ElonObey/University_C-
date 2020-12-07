//
// Task 2-1
//
// Написать программу определяющую чередование положительных\отрцательных чисел
// в массиве. При чередовании считается сумма положительных элементов.
// При нечередовании- произведение отрицательных элементов.
//

#include "../MainHeader.h"

int SumElements(int sizeArr, int arr[])
{
	int sum = 0;

	for (int i = 0; i < sizeArr; i++)
	{
		if (arr[i] > 0) sum += arr[i];
	}
	return sum;
}

int DifferenceElements(int sizeArr, int arr[])
{
	int difference = 0;

	for (int i = 0; i < sizeArr; i++)
	{
		if (arr[i] < 0) difference -= arr[i];
	}
	return difference;
}

void task01()
{
	setlocale(LC_ALL, "Russian");
	int sizeArr = 0;
	int* arr;

	cout << "Введите размер массива: ";
	cin >> sizeArr;
	arr = new int[sizeArr];

	cout << "Введите числа: ";
	for (int i = 0; i < sizeArr; i++)
	{
		cin >> arr[i];
	}
	if (arr[0] * arr[1] < 0)
	{
		cout << "Значения чередуются" << endl
			<< "Сумма положительных элементов равна: "
			<< SumElements(sizeArr, arr) << endl;
	}
	else if (arr[0] * arr[1] > 0)
	{
		cout << "Значения не чередуются" << endl
			<< "Произведение отрицательных элементов равна: "
			<< DifferenceElements(sizeArr, arr) << endl;
	}
	else if (arr[0] * arr[1] == 0)
	{
		cout << "Введены не верные числа" << endl;
	}
	delete[] arr;
	arr = nullptr;
}
