#include "gameover.h"



namespace Juego
{
	static const int Menu = 6;
	static const int Restart_Gameplay = 5;

	namespace GameOver_Section
	{
		GameOverScreen::GameOverScreen()
		{
		}

		GameOverScreen::~GameOverScreen()
		{
		}

		void GameOverScreen::init()
		{
			setHasScreenFinished(false);
			//_hasScreenFinished = false;
		}

		void GameOverScreen::input()
		{

		}

		void GameOverScreen::update()
		{

			input();
		}

		void GameOverScreen::draw()
		{

		}

		void GameOverScreen::deInit()
		{

		}

		bool GameOverScreen::finish()
		{
			return getHasScreenFinished();
		}
	}
}