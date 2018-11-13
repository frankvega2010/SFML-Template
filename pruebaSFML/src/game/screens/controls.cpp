#include "controls.h"

//#include "raylib.h"


namespace Juego
{
	static const int Menu = 6;

	namespace Controls_Section
	{
		ControlsScreen::ControlsScreen()
		{
		}

		ControlsScreen::~ControlsScreen()
		{
		}

		void ControlsScreen::init()
		{
			setHasScreenFinished(false);
			//_hasScreenFinished = false;
		}

		void ControlsScreen::input()
		{

		}

		void ControlsScreen::update()
		{

			input();
		}

		void ControlsScreen::draw()
		{

		}

		void ControlsScreen::deInit()
		{

		}

		bool ControlsScreen::finish()
		{
			return getHasScreenFinished();
		}
	}
}
