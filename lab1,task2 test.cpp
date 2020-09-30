#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main() 
{
	setlocale( LC_ALL,"Russian" );
	
	// Умова:  в масиві з n дійсних чисел знайти номери тих елементів, які збільшили свої номера після впорядкування

	int SIZE; // размер массива
	
	cout<<"Введите размер массива: "<<endl;
	cin>>SIZE;
	
	double array1[SIZE]; // массив который будет отсортирован
	double array2[SIZE]; // изначальный массив
	
	cout<<"Введите элементы массива: "<<endl;

	for (int i = 0; i < SIZE; i++) // ввод изначального массива
	{
		cin>>array1[i];
	}
	
	cout<<endl;
	
	for (int i = 0;i < SIZE;i++)  // присваивание 
	{
		array2[i] = array1[i];
	}
	
	for (int i = 0; i < SIZE; i++) // сортировка(пузырьком)
	{
		for (int j = 0; j < SIZE - i - 1;j++)
		{
			if (array1[j]>array1[j+1])
			{
				swap(array1[j],array1[j+1]);
			}
		}
		
	}
	
	cout<<"Массив изначально : "<<endl;
	for (int i = 0;i < SIZE;i++) // вывод изначального массива
	{
		cout<<array2[i]<<'\t';
	}
	
	cout<<endl;
	
	cout<<"Отсортированный массив : "<<endl;
	for (int i = 0;i < SIZE;i++) // вывод отсортированного массива
	{
		cout<<array1[i]<<'\t';
	}
	
	cout<<endl;
	
	cout<<"Номера элементов, которые возрасли после сортировки : "<<endl;
	for (int i = 0; i < SIZE;i++) // вывод индексов
	{
		if (array2[i] != array1[i] && array2[i] > array1[i])
		{
			cout<<i+1<<'\t';
		}
	}
	
	return 0;	
}
