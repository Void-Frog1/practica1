#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
		int nums[14] = {
		0,1,2,3,4,5,6,7,8,9,12,19,17,34
	};
	int sum = 0;
	int num = 0;
	for (int i = 0; i < 14; i++)
	{
		num = nums[i];
		if (!(num % 2 == 0))
		{
			sum += num;
		}
	}
	cout << "сумма всех чисел:" << sum << endl;
}
