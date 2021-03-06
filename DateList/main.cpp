#include "stdafx.h" // This header file must be first in all visual studio projects
#include <iostream>
#include <iomanip>


int main()
{
	int year;
	int month;
	int day;

	std::cin >> year;
	std::cin.ignore();
	std::cin >> month;
	std::cin.ignore();
	std::cin >> day;


	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		for (day = { day }; day <= 31; day++)
		{
			std::cout << year << "-" << std::setfill('0') << std::setw(2) << month << "-" << std::setfill('0') << std::setw(2) << day << std::endl;
			if (day == 31)
				for (month = { month }; month <= 12; month++)
					std::cout << year << "-" << std::setfill('0') << std::setw(2) << month << "-" << std::setfill('0') << std::setw(2) << day << std::endl;

		}
	else if (month == 04 || month == 06 || month == 9 || month == 11)
		for (day = { day }; day <= 30; day++)
		{
			std::cout << year << "-" << std::setfill('0') << std::setw(2) << month << "-" << std::setfill('0') << std::setw(2) << day << std::endl;
		}
	else
		for (day = { day }; day <= 28; day++)
		{
			std::cout << year << "-" << std::setfill('0') << std::setw(2) << month << "-" << std::setfill('0') << std::setw(2) << day << std::endl;
		}

	return 0;
}

