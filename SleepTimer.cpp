#include <iostream>
using namespace std;

void main()
{
	system("color 9");
	system("title Sleep Timer");
	setlocale(0, "");
	int hour, min, sec = 0;
	cout << endl << endl << "\tSleep Timer" << endl << endl << "\tВведите время через которое нужно выключить компьютер" << endl << endl;
	cout << "\t\tЧасы: "; cin >> hour;
	cout << "\t\tМинуты: "; cin >> min;
	sec = (hour * 3600) + (min * 60);
	cout << endl << endl;
	long start = clock();
	long tick;
	while (0 < sec)
	{
		if ((((tick = clock()) - start) / CLOCKS_PER_SEC) == 1)
		{
			if (sec <= 60) system("color c");
			cout << "\tДо выключение компьютера осталось (секунд): " << sec << endl;
			sec--;
			start = tick;
		}
	}
	system("shutdown -s -t 1");
}