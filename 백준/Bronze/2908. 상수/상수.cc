#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Solution(string str1, string str2)
{
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int numA = stoi(str1);
	int numB = stoi(str2);

	cout << (numA > numB ? numA : numB);
}

int main()
{
	// 숫자 2개를 문자열로 입력하면
	// 그 2개를 역으로 뒤집어서 숫자로 바꾼 후 대소비교
	string A, B;
	cin >> A >> B;

	Solution(A, B);
}