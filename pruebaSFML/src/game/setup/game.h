#ifndef GAME_H
#define GAME_H

#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

#include "Screens/gameplay.h"
#include "Screens/menu.h"
#include "Screens/gameover.h"
#include "Screens/settings.h"
#include "Screens/credits.h"
#include "Screens/controls.h"
#include "setup/screens.h"

//#include "raylib.h"

namespace Juego
{
	//extern sf::RenderWindow window;
	extern sf::RenderWindow* _window;

	class Game 
	{
	private:
		int _screenWidth;
		int _screenHeight;
		int _gameScreen;
		int _defaultFontSize;
		int _defaultFontSizeGameplayText;
		int _defaultFontSizeGameplayScore;
		int _buttonOption;
	public:
		
		Game();
		~Game();
		void setScreenWidth(int screenWidth);
		int getScreenWidth();
		void setScreenHeight(int screenHeight);
		int getScreenHeight();
		int getGameScreen();
		void setGameScreen(int gameScreen);
		int getDefaultFontSize();
		int getDefaultFontSizeGameplayText();
		int getDefaultFontSizeGameplayScore();
		int getButtonOption();
		void setButtonOption(int buttonOption);
		void init();
		void update();
		void draw();
		void deInit();
		void execute();
	};

	

	extern bool isScreenFinished;

	extern int selectOption;

	extern sf::Time deltaTime;

	//extern Sound pong_hit_wall;
	//extern Sound pong_hit_player;
	//extern Sound pong_player_scored;
	//extern Sound pong_match_end;
	//extern Sound pong_select_menu;
	//extern Sound pong_select_option1;
	//extern Sound pong_select_option2;

	//extern Music pong_menu_song;

	//void Execute();
}
#endif // GAME_H