#include "screens.h"

namespace Juego
{
	Screens::Screens()
	{
		_hasScreenFinished = false;
	}

	Screens::~Screens()
	{
	}

	bool Screens::getHasScreenFinished()
	{
		return _hasScreenFinished;
	}

	void Screens::setHasScreenFinished(bool hasScreenFinished)
	{
		_hasScreenFinished = hasScreenFinished;
	}
}