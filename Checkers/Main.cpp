#include <iostream>
#include "Gameboard.h"
using namespace std;

#define BOARD_SIZE 8 //rozmiar szachownicy
#define ROW_OF_PAWNS 3 //ile rzedow pionkow ma kazdy gracz

int main()
{
	Gameboard first{ BOARD_SIZE, ROW_OF_PAWNS }; //inicjalizacja szachownicy
	
	first.play(); //rozpoczyna gre na szachownicy


	return 0;
}

