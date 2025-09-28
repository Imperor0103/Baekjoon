#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	// EOF(End Of File)까지 한 줄씩 입력받기
	while (getline(cin, str)) 
	{  
		cout << str << '\n';
	}
	return 0;
}
