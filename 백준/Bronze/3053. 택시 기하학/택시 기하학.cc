#include <iostream>
#include <cmath>    

using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double EuclideanArea(double R) 
{
	return M_PI * R * R;
}

double TaxiArea(double R) 
{
	return 2 * R * R;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	double R;
	cin >> R;

	cout << fixed;
	cout.precision(6);

	cout << EuclideanArea(R) << endl;
	cout << TaxiArea(R) << endl;

	return 0;
}