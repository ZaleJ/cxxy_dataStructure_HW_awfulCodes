#include <iostream>

using namespace std;

int solve(int *a, int size, int s, int n)
{
	if (size == 1) {
		int ret = *a;
		delete a;
		return ret;
	}
	int *p = new int[size - 1];
	int  position;
	for (int i = 0, j = 0; i < size; i++)
		if (i != (s + n - 1) % size)
			p[j++] = a[i];
		else
			position = j;
	delete a;
	return solve(p, size - 1, position, n);
}

int monkey(int m, int n)
{
	if (!(m > 0 && n > 0))
		return -1;
	int *p = new int[m];
	for (int i = 0; i < m; i++)
		p[i]   = i + 1;
	return solve(p, m, 0, n);
}

int main()
{
	int m, n;
	cin >> m >> n;
		cout << "King is #" << monkey(m, n) << endl;
}
