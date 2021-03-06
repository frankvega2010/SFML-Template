#ifndef MENU_H
#define MENU_H
#include "game.h"
#include "setup/screens.h"

namespace Juego
{
	enum menuOptions {
		buttonPlay = 10,
		buttonControls,
		buttonSettings,
		buttonCredits,
		buttonQuit
	};

	namespace Menu_Section
	{
		class MenuScreen :public Screens
		{
		private:
		public:
			MenuScreen();
			~MenuScreen();
			void init();
			void input();
			void update();
			void draw();
			void deInit();
			bool finish();
		};

		/*void UpdateMenuScreen();
		void InitMenuScreen();
		bool FinishMenuScreen();
		void DrawMenu();*/
	}
}
#endif // MENU_H