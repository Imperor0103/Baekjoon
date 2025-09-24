#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	cin >> num;			
	string* arr = new string[num];
		
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i][0] << arr[i][arr[i].length() - 1] << endl;
	}

	delete[] arr;
}

