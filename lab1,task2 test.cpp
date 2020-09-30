#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main() 
{
	setlocale( LC_ALL,"Russian" );
	
	// �����:  � ����� � n ������ ����� ������ ������ ��� ��������, �� �������� ��� ������ ���� �������������

	int SIZE; // ������ �������
	
	cout<<"������� ������ �������: "<<endl;
	cin>>SIZE;
	
	double array1[SIZE]; // ������ ������� ����� ������������
	double array2[SIZE]; // ����������� ������
	
	cout<<"������� �������� �������: "<<endl;

	for (int i = 0; i < SIZE; i++) // ���� ������������ �������
	{
		cin>>array1[i];
	}
	
	cout<<endl;
	
	for (int i = 0;i < SIZE;i++)  // ������������ 
	{
		array2[i] = array1[i];
	}
	
	for (int i = 0; i < SIZE; i++) // ����������(���������)
	{
		for (int j = 0; j < SIZE - i - 1;j++)
		{
			if (array1[j]>array1[j+1])
			{
				swap(array1[j],array1[j+1]);
			}
		}
		
	}
	
	cout<<"������ ���������� : "<<endl;
	for (int i = 0;i < SIZE;i++) // ����� ������������ �������
	{
		cout<<array2[i]<<'\t';
	}
	
	cout<<endl;
	
	cout<<"��������������� ������ : "<<endl;
	for (int i = 0;i < SIZE;i++) // ����� ���������������� �������
	{
		cout<<array1[i]<<'\t';
	}
	
	cout<<endl;
	
	cout<<"������ ���������, ������� �������� ����� ���������� : "<<endl;
	for (int i = 0; i < SIZE;i++) // ����� ��������
	{
		if (array2[i] != array1[i] && array2[i] > array1[i])
		{
			cout<<i+1<<'\t';
		}
	}
	
	return 0;	
}
