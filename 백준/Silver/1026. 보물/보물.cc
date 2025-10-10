#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> RankB(vector<int>* B)
{
	vector<int> idxB((*B).size());
	vector<int> rankB((*B).size());

	// B: 2 7 8 6 1
	for (int i = 0; i < idxB.size(); i++)
	{
		idxB[i] = i;	// idxB: 0 1 2 3 4
	}
	sort(idxB.begin(), idxB.end(),
		[&](int i, int j)
		{
			return (*B)[i] > (*B)[j];
		});	// idxB: 2 1 3 0 4

	return idxB;
}

void SortA(vector<int>* A, const vector<int>* idxDesB)
{
	vector<int> rankA(A->size());
	// A: 2 1 3 6 0
	// idxA: 3 2 0 1 4

	sort((*A).begin(), (*A).end(),
		[](int a, int b)
		{
			return a < b;
		});	// A: 0 1 2 3 6	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> A(N), B(N);
	
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}
		
	vector<int> idxDesB = RankB(&B);

	SortA(&A, &idxDesB);

	int answer = 0;
	for (int i = 0; i < A.size(); i++)
	{
		answer += A[i] * B[idxDesB[i]];
	}
	cout << answer << '\n';
	return 0;
}