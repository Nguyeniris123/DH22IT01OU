#include <iostream>
#include <string>
using namespace std;
int daysInMonth(int month, int year);
int dayOfYear(string date);
#pragma warning( disable : 4996 )
int main() {
	string date;
	cout << "Nhap vao ngay thang nam: ";
	getline(cin, date);
	int day = dayOfYear(date);
	cout << "The day of year is: " << day << endl;
	return 0;
}
int daysInMonth(int month, int year)
{
	if (month == 2) 
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			return 29;
		}
		else 
		{
			return 28;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
		return 30;
	}
	else
	{
		return 31;
	}
}

int dayOfYear(string date)
{
	int month, day, year;
	sscanf(date.c_str(), "%d-%d-%d", &day, &month, &year);

	int totalDays = day;

	for (int i = 1; i < month; i++)
	{
		totalDays += daysInMonth(i, year);
	}
	return totalDays;
}
