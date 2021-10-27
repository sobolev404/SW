﻿// SW2_PROJECT1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

void FillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
	}
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}


int main()
{
	srand(time(NULL));
	int size;
	cout << "The number of elements="; cin >> size; cout << endl;

	int* arr = new int[size];

	FillArray(arr, size);
	PrintArray(arr, size);
	cout << endl;

	int number;
	cout << endl << "Number:"; cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			cout << endl << "The index of the number:" << "[" << i << "]";
		}
	}
	cout << endl;
	delete[] arr;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
