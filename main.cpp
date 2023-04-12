#include <iostream>

int main()
{
	enum class seasons {
		January = 1,
		February,
		March,
		April,
		May,
		June,
		Jule,
		August,
		September,
		October,
		November,
		December
	};
	seasons season = static_cast<seasons>(1);
	while (static_cast<int>(season) != 0) {
		std::cout << "Enter season: ";
		int num;
		std::cin >> num;
		season = static_cast<seasons>(num);
		if (static_cast<int>(season) == 0) {
			std::cout << "Bye!";
			break;
		}
		else if (static_cast<int>(season) > 12 || static_cast<int>(season) < 0) {
			std::cout << "Incorrect season!" << std::endl;
		}
		else {
			switch (season)
			{
			case seasons::January:
				std::cout << "January" << std::endl;
				break;
			case seasons::February:
				std::cout << "February" << std::endl;
				break;
			case seasons::March:
				std::cout << "March" << std::endl;
				break;
			case seasons::April:
				std::cout << "April" << std::endl;
				break;
			case seasons::May:
				std::cout << "May" << std::endl;
				break;
			case seasons::June:
				std::cout << "June" << std::endl;
				break;
			case seasons::Jule:
				std::cout << "Jule" << std::endl;
				break;
			case seasons::August:
				std::cout << "August" << std::endl;
				break;
			case seasons::September:
				std::cout << "September" << std::endl;
				break;
			case seasons::October:
				std::cout << "October" << std::endl;
				break;
			case seasons::November:
				std::cout << "November" << std::endl;
				break;
			case seasons::December:
				std::cout << "December" << std::endl;
				break;
			}
		}
	}
}