#include "pch.h"
#include "game.h"
#ifdef _DEBUG
int main()
{
  
    Game aGame("A Space Shooter");
    aGame.run();
}

#else
#include <Windows.h>
int __stdcall WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR     lpCmdLine,
   int       nShowCmd
)
{
  Game aGame("The Guardian Legend");
  aGame.run();
}

#endif // _DEBUG
