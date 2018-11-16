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
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
			//{
			//	//buttonOption
			//	setHasScreenFinished(true);

			//}
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