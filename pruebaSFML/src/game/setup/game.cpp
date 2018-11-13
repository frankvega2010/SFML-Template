#include "game.h"

#include "Screens/gameplay.h"
#include "Screens/menu.h"
#include "Screens/gameover.h"
#include "Screens/settings.h"
#include "Screens/credits.h"
#include "Screens/controls.h"
#include "setup/screens.h"

using namespace Juego;
using namespace Gameplay_Section;
using namespace GameOver_Section;
using namespace Menu_Section;
using namespace Settings_Section;
using namespace Credits_Section;
using namespace Controls_Section;

namespace Juego
{
	enum GameScreens
	{
		Play = 1,
		Menu,
		Controls,
		GameOver,
		Quit,
		Credits,
		Settings,
		MaxGameScreens
	};

	Screens* gameScreens[MaxGameScreens];

	sf::RenderWindow* _window = new sf::RenderWindow();

	Game::Game()
	{
		_screenHeight = 0;
		_screenWidth = 0;

		_buttonOption = 0;

		_defaultFontSize = 0;
		_defaultFontSizeGameplayText = 0;
		_defaultFontSizeGameplayScore = 0;

		setScreenWidth(1300);
		setScreenHeight(800);
		//sf::RenderWindow* _window = new sf::RenderWindow();
		_window->create(sf::VideoMode(getScreenWidth(), getScreenHeight()), "SFML Template");
		//_window.create(sf::VideoMode(getScreenWidth(), getScreenHeight()), "SFML Template");
		//_isScreenFinished = false;
	}

	Game::~Game()
	{

	}

	void Game::setScreenWidth(int screenWidth)
	{
		_screenWidth = screenWidth;
	}

	int Game::getScreenWidth()
	{
		return _screenWidth;
	}

	void Game::setScreenHeight(int screenHeight)
	{
		_screenHeight = screenHeight;
	}

	int Game::getScreenHeight()
	{
		return _screenHeight;
	}

	void Game::setGameScreen(int gameScreen)
	{
		_gameScreen = gameScreen;
	}

	int Game::getGameScreen()
	{
		return _gameScreen;
	}

	int Game::getDefaultFontSize()
	{
		return _defaultFontSize;
	}

	int Game::getDefaultFontSizeGameplayText()
	{
		return _defaultFontSizeGameplayText;
	}

	int Game::getDefaultFontSizeGameplayScore()
	{
		return _defaultFontSizeGameplayScore;
	}

	int Game::getButtonOption()
	{
		return _buttonOption;
	}

	void Game::setButtonOption(int buttonOption)
	{
		_buttonOption = buttonOption;
	}

	void Game::init()
	{

		for (int i = 0; i < MaxGameScreens; i++)
		{
			gameScreens[i] = NULL;
		}

		gameScreens[Menu] = new MenuScreen();
		gameScreens[Play] = new GameplayScreen();
		gameScreens[Controls] = new ControlsScreen();
		gameScreens[Settings] = new SettingsScreen();
		gameScreens[GameOver] = new GameOverScreen();
		gameScreens[Credits] = new CreditsScreen();

		/*_buttonOption = 0;
		_defaultFontSize = 60;
		_defaultFontSizeGameplayText = 30;
		_defaultFontSizeGameplayScore = 120;*/



		_gameScreen = Menu;
		gameScreens[Menu]->init();
		//InitMenuScreen(); pantallas[Menu]->init();
	}

	void Game::update()
	{
		switch (_gameScreen)
		{
		case Menu:
		{
			//UpdateMenuScreen();
			gameScreens[Menu]->update();

			if (gameScreens[Menu]->finish()) //pantallas[Menu]->hasScreenFinished();
			{
				gameScreens[Menu]->deInit();
				switch (_buttonOption)
				{
				case buttonPlay:
				{
#ifdef AUDIO
					StopMusicStream(pong_menu_song);
#endif
					//gameScreens[Play]->restart();
					_gameScreen= Play;
					gameScreens[Play]->init();
					break;
				}
				case buttonSettings:
				{
					_gameScreen= Settings;
					gameScreens[Settings]->init();
					break;
				}
				case buttonCredits:
				{
					_gameScreen= Credits;
					gameScreens[Credits]->init();
					break;
				}
				case buttonControls:
				{
					_gameScreen= Controls;
					gameScreens[Controls]->init();
					break;
				}
				case buttonQuit:
				{
					#ifdef AUDIO
										StopMusicStream(pong_menu_song);
					#endif

					_gameScreen= 0;
					return;
					break;
				}
				}
			}
		}
		break;
		case Settings:
		{
			gameScreens[Settings]->update();

			if (gameScreens[Settings]->finish())
			{
				gameScreens[Settings]->deInit();
				_gameScreen= Menu;
				gameScreens[Menu]->init();
			}
		}
		break;

		case GameOver:
		{
			gameScreens[GameOver]->update();

			if (gameScreens[GameOver]->finish())
			{
				gameScreens[GameOver]->deInit();
				switch (_buttonOption)
				{
				case buttonMenu:
				{
#ifdef AUDIO
					PlayMusicStream(pong_menu_song);
#endif

					_gameScreen= Menu;
					gameScreens[Menu]->init();
					break;
				}
				case buttonRestart:
				{
					//gameScreens[Play]->restart();
					_gameScreen= Play;
					gameScreens[Play]->init();
					break;
				}
				}
			}
		}
		break;

		case Play:
		{
			gameScreens[Play]->update();
			//UpdateGameplayScreen();

			if (gameScreens[Play]->finish())
			{
				gameScreens[Play]->deInit();
				_gameScreen= GameOver;
				gameScreens[GameOver]->init();
			}
		}
		break;
		case Credits:
		{
			gameScreens[Credits]->update();

			if (gameScreens[Credits]->finish())
			{
				gameScreens[Credits]->deInit();
				_gameScreen= Menu;
				gameScreens[Menu]->init();
			}
		}
		break;
		case Controls:
		{
			gameScreens[Controls]->update();

			if (gameScreens[Controls]->finish())
			{
				gameScreens[Controls]->deInit();
				_gameScreen= Menu;
				gameScreens[Menu]->init();
			}
		}
		break;
		}
	}

	void Game::draw()
	{
		_window->clear(sf::Color::Black);
		//_window.clear(sf::Color::Black);

		gameScreens[_gameScreen]->draw();

		_window->display();
		//_window.display();
	}

	void Game::deInit()
	{
		
	}

	void Game::execute()
	{
		sf::Clock deltaClock;
		sf::Time deltaTime;
		

		
		init();
		while (_window->isOpen())
		{
			sf::Event event;
			while (_window->pollEvent(event))
			{
				// "close requested" event: we close the window
				if (event.type == sf::Event::Closed)
					_window->close();
			}

			update();
			if (_gameScreen == 0) return;
			draw();
			deltaTime = deltaClock.restart();
		}
		deInit();
	}
}