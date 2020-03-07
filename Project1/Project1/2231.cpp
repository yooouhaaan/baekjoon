#include <iostream>
#include <string>
using namespace std;

int cal(int num)
{
	int sum = num;
	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp = cal(i);
		if (temp == N)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;

	return 0;

}
