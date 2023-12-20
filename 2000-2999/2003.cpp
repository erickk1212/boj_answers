#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[10001];
int main()
{
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int s = 1, e = 1, cnt = 0, sum = 0;
	while (e <= n + 1)
	{
		if (sum < m)
		{
			sum += a[e++];
		}
		else if (sum > m)
		{
			sum -= a[s++];
		}
		else
		{
			cnt++;
			sum += a[e++];
		}
	}
	cout << cnt;
	return 0;
}
