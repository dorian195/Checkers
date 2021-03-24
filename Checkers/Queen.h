#pragma once
#include "Piece.h"
class Queen : public Piece //krolowa dziedziczy publicznie po bierce
{
public:
	Queen(Gameboard * motherboard_, int file, int rank, Color pieceColor_); //konstruktor
	bool makeSingleStep(Position source, Position target) override; //mozliwe ruchy damki
	void printPiece() override; //drukuje W (biala damka) lub B (czarna damka) na szachownicy
	bool canMove() override; //nadpisanie funkcji wirtualnej, ktora sprawdza, czy krolowa moze sie ruszyc
	virtual ~Queen(); //destruktor
};

