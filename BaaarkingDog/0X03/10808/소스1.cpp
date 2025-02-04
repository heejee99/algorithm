#include <iostream>

using namespace std;

int func1(int arr[], int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 5 == 0) cnt++;
	}
	return cnt;
}

int main() 
{
	int arr[], n;
	cin >> arr[], n;

	cout << func(arr[], n) << endl;
	return 0;
}