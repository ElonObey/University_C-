//
// Task 2-1
//
// �������� ��������� ������������ ����������� �������������\������������ �����
// � �������. ��� ����������� ��������� ����� ������������� ���������.
// ��� �������������- ������������ ������������� ���������.
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

	cout << "������� ������ �������: ";
	cin >> sizeArr;
	arr = new int[sizeArr];

	cout << "������� �����: ";
	for (int i = 0; i < sizeArr; i++)
	{
		cin >> arr[i];
	}
	if (arr[0] * arr[1] < 0)
	{
		cout << "�������� ����������" << endl
			<< "����� ������������� ��������� �����: "
			<< SumElements(sizeArr, arr) << endl;
	}
	else if (arr[0] * arr[1] > 0)
	{
		cout << "�������� �� ����������" << endl
			<< "������������ ������������� ��������� �����: "
			<< DifferenceElements(sizeArr, arr) << endl;
	}
	else if (arr[0] * arr[1] == 0)
	{
		cout << "������� �� ������ �����" << endl;
	}
	delete[] arr;
	arr = nullptr;
}
