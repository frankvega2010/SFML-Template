#include "settings.h"

//#include "raylib.h"
#include "Setup/Game.h"
#include "Screens/gameplay.h"

using namespace Juego;
using namespace Gameplay_Section;

namespace Juego
{
	static const int Menu = 6;

	namespace Settings_Section
	{
		SettingsScreen::SettingsScreen()
		{
		}

		SettingsScreen::~SettingsScreen()
		{
		}

		void SettingsScreen::init()
		{
			setHasScreenFinished(false);
			//_hasScreenFinished = false;
		}

		void SettingsScreen::input()
		{

		}

		void SettingsScreen::update()
		{

			input();
		}

		void SettingsScreen::draw()
		{

		}

		void SettingsScreen::deInit()
		{

		}

		bool SettingsScreen::finish()
		{
			return getHasScreenFinished();
		}
	}
}