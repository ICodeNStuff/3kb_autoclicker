//You will need the tcc (Tiny C Compiler) to compile this.
#include <windows.h>

int main(void)
{
  POINT M_POS;
  system("echo                      			      The 3kb Clicker.");
  HWND f_W;
  while(1)
  {
    while(GetAsyncKeyState(VK_LBUTTON))
    {
      f_W = GetForegroundWindow();
      GetCursorPos(&M_POS);
      srand(time(NULL));
      SendMessage(f_W, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(M_POS.x, M_POS.y));
      Sleep(rand() % 60);
      SendMessage(f_W, WM_LBUTTONUP, 0, MAKELPARAM(M_POS.x, M_POS.y));
      Sleep(25 + rand() % 30);
    }
                        
  }
        
  return 0;
}
