#include <iostream>
#include "Keyboard.h"

int main()
{
	Keyboard keyboard(3, Keyboard::TypeKeyboard::ABNT_2);

	std::string* stringKeyboard = keyboard.stringKeyboard();
	
	for (int i = 0; i < (keyboard.getLines() * keyboard.getHeight()); i++)
	{
		std::cout << stringKeyboard[i] << std::endl;
	}

	system("pause");

	return 0;
}