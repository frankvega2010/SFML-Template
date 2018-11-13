#include "gameplay.h"



namespace Juego
{	
	

	namespace Gameplay_Section
	{
		GameplayScreen::GameplayScreen()
		{
		}

		GameplayScreen::~GameplayScreen()
		{
		}

		void GameplayScreen::init()
		{
			setHasScreenFinished(false);
			//_hasScreenFinished = false;
		}

		void GameplayScreen::input()
		{

		}

		void GameplayScreen::update()
		{

			input();
		}

		void GameplayScreen::draw()
		{

		}

		void GameplayScreen::deInit()
		{

		}

		bool GameplayScreen::finish()
		{
			return getHasScreenFinished();
		}

		void GameplayScreen::restart()
		{

		}
	}
}