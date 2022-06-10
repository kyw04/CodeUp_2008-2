#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, asc = 0, desc = 0;
	cin >> n;
	vector<int> arr(n);

	cin >> arr[0];
	for (int i = 1; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i - 1] < arr[i])
			asc = 1;
		if (arr[i - 1] > arr[i])
			desc = 1;
	}

	if (asc == desc)
		cout << "섞임";
	else if (asc)
		cout << "오름차순";
	else
		cout << "내림차순";

	return 0;
}