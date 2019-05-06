#include "SDL.h"
#include "GameStateManager.h"
#include "Menu.h"
int main(int argc, char *argv[])
{
	GameStateManager manager;
	manager.SetState(new Menu());
	manager.GameLoop();
	return 0;
}