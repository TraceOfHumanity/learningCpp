#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int lowerBound = 0;
	int upperBound = 100;
	int attempts = 0;

	std::cout << "Загадайте число від 0 до 100" << std::endl;
	std::cout << "Я можу точно вгадати відповідь за сім спроб або менше." << std::endl;
	std::cout << "Натисніть Enter, коли будете готові." << std::endl;
	std::cin.get();

	char userResponse;

	do {
		int guess = (lowerBound + upperBound) / 2;

		std::cout << "Чи це число " << guess << "? (Y - так, 0 - замало, 1 - забагато): ";
		std::cin >> userResponse;

		if (userResponse == '0') {
			lowerBound = guess + 1;
		}
		else if (userResponse == '1') {
			upperBound = guess - 1;
		}

		attempts++;

	} while (userResponse != 'Y' && userResponse != 'y');

	std::cout << "Я вгадав число " << (lowerBound + upperBound) / 2 << " за " << attempts << " спроб." << std::endl;

	return 0;
}
