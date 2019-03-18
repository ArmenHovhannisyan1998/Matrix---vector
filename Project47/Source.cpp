#include <iostream>
#include <random>
using namespace std;
int Input(int **arr, int n);
void Out(int **arr, int n, int *_arr, short temp);
void Calc(int **arr, int n, int *_arr);
int main()
{

	int n; cin >> n;
	int **arr = new int *[n];
	short temp=Input(arr, n);
	int *_arr = new int[temp];
	Calc(arr, n, _arr);
	Out(arr, n,_arr,temp);



	system("PAUSE");
	return 0;
}
int Input(int **arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = random_device()() % 40 + 10;
		}
	}
	short temp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j < n; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				temp++;
			}
		}
	}
	return temp;
}
void Out(int **arr, int n, int *_arr, short temp)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < temp; i++)
	{
		cout << _arr[i] << " ";
	}

}
void Calc(int **arr, int n, int *_arr)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j < n; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				_arr[k++] = arr[i][j];

			}
		}
	}
}