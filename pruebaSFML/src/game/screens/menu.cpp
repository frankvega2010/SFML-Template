#include "menu.h"


#include <SFML/Graphics.hpp>
//#include "raylib.h"


using namespace Juego;

namespace Juego
{
	sf::Font font;

	sf::Text menuText;

	namespace Menu_Section
	{
		MenuScreen::MenuScreen()
		{
		}

		MenuScreen::~MenuScreen()
		{
		}

		void MenuScreen::init()
		{
			setHasScreenFinished(false);
			//_hasScreenFinished = false;
		}

		void MenuScreen::input()
		{
			/*if (IsKeyPressed(KEY_ONE))
			{
			#ifdef AUDIO
			PlaySound(pong_select_menu);
			#endif
			selectOption = PlayGame;
			isPlayer2CPU = true;
			isScreenFinished = true;
			}

			if (IsKeyPressed(KEY_TWO))
			{
			#ifdef AUDIO
			PlaySound(pong_select_menu);
			#endif
			selectOption = PlayGame;
			isPlayer2CPU = false;
			isScreenFinished = true;
			}

			if (IsKeyPressed(KEY_THREE))
			{
			#ifdef AUDIO
			PlaySound(pong_select_menu);
			#endif
			selectOption = Settings;
			isScreenFinished = true;
			}

			if (IsKeyPressed(KEY_FOUR))
			{
			#ifdef AUDIO
			PlaySound(pong_select_menu);
			#endif
			selectOption = Howtoplay;
			isScreenFinished = true;
			}

			if (IsKeyPressed(KEY_FIVE))
			{
			#ifdef AUDIO
			PlaySound(pong_select_menu);
			#endif
			selectOption = Credits;
			isScreenFinished = true;
			}

			if (IsKeyPressed(KEY_SIX))
			{
			selectOption = QuitGame;
			isScreenFinished = true;
			}*/
		}

		void MenuScreen::update()
		{
			#ifdef AUDIO
						UpdateMusicStream(pong_menu_song);
			#endif

			input();
		}

		void MenuScreen::draw()
		{
			sf::CircleShape shape(100.f);
			shape.setFillColor(sf::Color::Green);

			_window->draw(shape);


			//if (!font.loadFromFile("res\assets\sansation.ttf"))
			//{
			//	// error...
			//}

			//menuText.setFont(font);
			//menuText.setString("Simple Pong!");
			//menuText.setCharacterSize(defaultFontSize);
			//menuText.setFillColor(sf::Color::White);

			//Game::
			//Game::window.draw(menuText);
		}

		void MenuScreen::deInit()
		{

		}

		bool MenuScreen::finish()
		{
			return getHasScreenFinished();
		}
	}
}