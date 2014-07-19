// a5 chess
// Matthew Gaston 20516570
// Andrew Gemmel
// rook.h

#ifndef __ROOK_H__
#define __ROOK_H__

#include <iostream>
#include <string>
#include "gamepiece.h"
class Rook : public GamePiece {
	public:
	Rook(char x, int y, std::string player);

	// is this move legal with how this piece operates?
	//bool isLegalMove(Position pos1, Position pos2); 
	bool getCaptured();	
	void print(std::ostream &out) const;
	void Captured();
	private:
	bool captured;
};
#endif
