#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, right = 0, cnt = 0;
	string arr;
	cin >> n;
	while (n--)
	{
		right = 0;
		cnt = 0;
		cin >> arr;
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] == '<')right++;
			else if (arr[i] == '>')
			{
				if (right > 0)
				{
					right--;
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}