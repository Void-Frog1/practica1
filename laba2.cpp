#include <iostream> 

using namespace std;
int main(int argc, char* argv[]) 
{
	setlocale(0,"");

	int day;
	cout << "Введите номер дня недели:";
	cin >> day;
	if ((day == 1) || (day == 2) || (day == 3) || (day == 4)) cout << "В этот день 4 пары." << endl;
	else if (day == 5) cout << "В этот день 3 пары." << endl;
	else if ((day == 6) || (day == 7)) cout << "это выходной день" << endl;
	system("pause");
	return 0;
}
