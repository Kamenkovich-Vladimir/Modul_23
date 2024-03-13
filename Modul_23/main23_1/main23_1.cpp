#include <iostream>


#define DAY1 "Monday"
#define DAY2 "Tuesday"
#define DAY3 "Wensday"
#define DAY4 "Thersday"
#define DAY5 "Friday"
#define DAY6 "Saturday"
#define DAY7 "Sunday" 
#define GET_DAY(DAY,number)(DAY##number)

int main()
{
	std::cout << "***************** Implementation of advanced input and output of days of the week *****************\n\n";
	
	int number = 0;
	std::cout << "Input number of the day of the week: ";
	std::cin >> number;
	switch (number) {
	case 1:
		std::cout << GET_DAY(DAY, 1);
		break;
	case 2:
		std::cout << GET_DAY(DAY, 2);
		break;
	case 3:
		std::cout << GET_DAY(DAY, 3);
		break;
	case 4:
		std::cout << GET_DAY(DAY, 4);
		break;
	case 5:
		std::cout << GET_DAY(DAY, 5);
		break;
	case 6:
		std::cout << GET_DAY(DAY, 6);
		break;
	case 7:
		std::cout << GET_DAY(DAY, 7);
		break;
	default:
		std::cout << "Invalid day of week!\n";
		break;
	}
	std::cout << std::endl;
}