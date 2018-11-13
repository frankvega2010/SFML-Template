#include "credits.h"

//#include "raylib.h"


namespace Juego
{
	static const int Menu = 6;

	namespace Credits_Section
	{
		CreditsScreen::CreditsScreen()
		{
		}

		CreditsScreen::~CreditsScreen()
		{
		}

		void CreditsScreen::init()
		{
			setHasScreenFinished(false);
			//_hasScreenFinished = false;
		}

		void CreditsScreen::input()
		{

		}

		void CreditsScreen::update()
		{

			input();
		}

		void CreditsScreen::draw()
		{

		}

		void CreditsScreen::deInit()
		{

		}

		bool CreditsScreen::finish()
		{
			return getHasScreenFinished();
		}
	}
}