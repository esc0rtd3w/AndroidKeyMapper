
#include <windows.h>
#include <stdio.h>

int ReadKey()
{
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD  mode;
	GetConsoleMode(hstdin, &mode);
	SetConsoleMode(hstdin, 0);

	INPUT_RECORD inrec;
	DWORD        count;

	do ReadConsoleInput(hstdin, &inrec, 1, &count);
	while ((inrec.EventType != KEY_EVENT) || inrec.Event.KeyEvent.bKeyDown);

	SetConsoleMode(hstdin, mode);

	return inrec.Event.KeyEvent.wVirtualKeyCode;
}

struct Android
{
	int UNKNOWN = 0;
	int MENU = 1;
	int SOFT_RIGHT = 2;
	int HOME = 3;
	int BACK = 4;
	int CALL = 5;
	int ENDCALL = 6;
	int ZERO = 7;
	int ONE = 8;
	int TWO = 9;
	int THREE = 10;
	int FOUR = 11;
	int FIVE = 12;
	int SIX = 13;
	int SEVEN = 14;
	int EIGHT = 15;
	int NINE = 16;
	int STAR = 17;
	int POUND = 18;
	int DPAD_UP = 19;
	int DPAD_DOWN = 20;
	int DPAD_LEFT = 21;
	int DPAD_RIGHT = 22;
	int DPAD_CENTER = 23;
	int VOLUME_UP = 24;
	int VOLUME_DOWN = 25;
	int POWER = 26;
	int CAMERA = 27;
	int CLEAR = 28;
	int A = 29;
	int B = 30;
	int C = 31;
	int D = 32;
	int E = 33;
	int F = 34;
	int G = 35;
	int H = 36;
	int I = 37;
	int J = 38;
	int K = 39;
	int L = 40;
	int M = 41;
	int N = 42;
	int O = 43;
	int P = 44;
	int Q = 45;
	int R = 46;
	int S = 47;
	int T = 48;
	int U = 49;
	int V = 50;
	int W = 51;
	int X = 52;
	int Y = 53;
	int Z = 54;
	int COMMA = 55;
	int PERIOD = 56;
	int ALT_LEFT = 57;
	int ALT_RIGHT = 58;
	int SHIFT_LEFT = 59;
	int SHIFT_RIGHT = 60;
	int TAB = 61;
	int SPACE = 62;
	int SYM = 63;
	int EXPLORER = 64;
	int ENVELOPE = 65;
	int ENTER = 66;
	int DEL = 67;
	int GRAVE = 68;
	int MINUS = 69;
	int EQUALS = 70;
	int LEFT_BRACKET = 71;
	int RIGHT_BRACKET = 72;
	int BACKSLASH = 73;
	int SEMICOLON = 74;
	int APOSTROPHE = 75;
	int SLASH = 76;
	int AT = 77;
	int NUM = 78;
	int HEADSETHOOK = 79;
	int FOCUS = 80;
	int PLUS = 81;
	int MENU2 = 82;
	int NOTIFICATION = 83;
	int SEARCH = 84;
	int TAG_LAST_KEYCODE = 85;
}AndroidKey;

// TODO: check if lowercase applies
int p2a(int key)
{
	switch (key)
	{
		case 123:// F12
			return AndroidKey.UNKNOWN;
			break;
		case 110:// NUM_DELETE
			return AndroidKey.SOFT_RIGHT;
			break;
		case 122:// F11
			return AndroidKey.MENU;
			break;
		case 36:// HOME
			return AndroidKey.HOME;
			break;
		case 8:// BACKSPACE
			return AndroidKey.BACK;
			break;
		case 45:// INSERT
			return AndroidKey.CALL;
			break;
		case 35:// END
			return AndroidKey.ENDCALL;
			break;
		case 48:// 0
			return AndroidKey.ZERO;
			break;
		case 96:// NUM_0
			return AndroidKey.ZERO;
			break;
		case 49:// 1
			return AndroidKey.ONE;
			break;
		case 97:// NUM_1
			return AndroidKey.ONE;
			break;
		case 50:// 2
			return AndroidKey.TWO;
			break;
		case 98:// NUM_2
			return AndroidKey.TWO;
			break;
		case 51:// 3
			return AndroidKey.THREE;
			break;
		case 99:// NUM_3
			return AndroidKey.THREE;
			break;
		case 52:// 4
			return AndroidKey.FOUR;
			break;
		case 100:// NUM_4
			return AndroidKey.FOUR;
			break;
		case 53:// 5
			return AndroidKey.FIVE;
			break;
		case 101:// NUM_5
			return AndroidKey.FIVE;
			break;
		case 54:// 6
			return AndroidKey.SIX;
			break;
		case 102:// NUM_6
			return AndroidKey.SIX;
			break;
		case 55:// 7
			return AndroidKey.SEVEN;
			break;
		case 103:// NUM_7
			return AndroidKey.SEVEN;
			break;
		case 56:// 8
			return AndroidKey.EIGHT;
			break;
		case 104:// NUM_8
			return AndroidKey.EIGHT;
			break;
		case 57:// 9
			return AndroidKey.NINE;
			break;
		case 105:// NUM_9
			return AndroidKey.NINE;
			break;
		case 106:// NUM_ASTERIX
			return AndroidKey.STAR;
			break;
		case 192:// TILDE
			return AndroidKey.POUND;
			break;
		case 38:// ARROW_UP
			return AndroidKey.DPAD_UP;
			break;
		case 40:// ARROW_DOWN
			return AndroidKey.DPAD_DOWN;
			break;
		case 37:// ARROW_LEFT
			return AndroidKey.DPAD_LEFT;
			break;
		case 39:// ARROW_RIGHT
			return AndroidKey.DPAD_RIGHT;
			break;
		case 19:// PAUSE
			return AndroidKey.DPAD_CENTER;
			break;
		case 33:// PAGE_UP
			return AndroidKey.VOLUME_UP;
			break;
		case 34:// PAGE_DOWN
			return AndroidKey.VOLUME_DOWN;
			break;
		case 114:// F3
			return AndroidKey.POWER;
			break;
		case 115:// F4
			return AndroidKey.CAMERA;
			break;
		case 27:// ESC
			return AndroidKey.CLEAR;
			break;
		case 65:// A
			return AndroidKey.A;
			break;
		case 66:// B
			return AndroidKey.B;
			break;
		case 67:// C
			return AndroidKey.C;
			break;
		case 68:// D
			return AndroidKey.D;
			break;
		case 69:// E
			return AndroidKey.E;
			break;
		case 70:// F
			return AndroidKey.F;
			break;
		case 71:// G
			return AndroidKey.G;
			break;
		case 72:// H
			return AndroidKey.H;
			break;
		case 73:// I
			return AndroidKey.I;
			break;
		case 74:// J
			return AndroidKey.J;
			break;
		case 75:// K
			return AndroidKey.K;
			break;
		case 76:// L
			return AndroidKey.L;
			break;
		case 77:// M
			return AndroidKey.M;
			break;
		case 78:// N
			return AndroidKey.N;
			break;
		case 79:// O
			return AndroidKey.O;
			break;
		case 80:// P
			return AndroidKey.P;
			break;
		case 81:// Q
			return AndroidKey.Q;
			break;
		case 82:// R
			return AndroidKey.R;
			break;
		case 83:// S
			return AndroidKey.S;
			break;
		case 84:// T
			return AndroidKey.T;
			break;
		case 85:// U
			return AndroidKey.U;
			break;
		case 86:// V
			return AndroidKey.V;
			break;
		case 87:// W
			return AndroidKey.W;
			break;
		case 88:// X
			return AndroidKey.X;
			break;
		case 89:// Y
			return AndroidKey.Y;
			break;
		case 90:// Z
			return AndroidKey.Z;
			break;
		case 188:// COMMA
			return AndroidKey.COMMA;
			break;
		case 190:// PERIOD
			return AndroidKey.PERIOD;
			break;
		case 18:// ALT
			return AndroidKey.ALT_LEFT;
			break;
		case 120:// F9
			return AndroidKey.ALT_RIGHT;
			break;
		case 16:// SHIFT
			return AndroidKey.SHIFT_LEFT;
			break;
		case 121:// F10
			return AndroidKey.SHIFT_RIGHT;
			break;
		case 9:// TAB
			return AndroidKey.TAB;
			break;
		case 32:// SPACEBAR
			return AndroidKey.SPACE;
			break;
		case 119:// F8
			return AndroidKey.SYM;
			break;
		case 118:// F7
			return AndroidKey.EXPLORER;
			break;
		case 117:// F6
			return AndroidKey.ENVELOPE;
			break;
		case 13:// ENTER
			return AndroidKey.ENTER;
			break;
		case 46:// DELETE
			return AndroidKey.DEL;
			break;
		case 116:// F5
			return AndroidKey.GRAVE;
			break;
		case 189:// MINUS
			return AndroidKey.MINUS;
			break;
		case 187:// EQUALS
			return AndroidKey.EQUALS;
			break;
		case 219:// LEFT_BRACKET
			return AndroidKey.LEFT_BRACKET;
			break;
		case 221:// RIGHT_BRACKET
			return AndroidKey.RIGHT_BRACKET;
			break;
		case 220:// BACKSLASH
			return AndroidKey.BACKSLASH;
			break;
		case 186:// SEMICOLON
			return AndroidKey.SEMICOLON;
			break;
		case 222:// APOSTROPHE
			return AndroidKey.APOSTROPHE;
			break;
		case 191:// SLASH
			return AndroidKey.SLASH;
			break;
		case 127:// F4
			return AndroidKey.AT;
			break;
		case 144:// NUMLOCK
			return AndroidKey.NUM;
			break;
		case 111:// NUM_SLASH
			return AndroidKey.HEADSETHOOK;
			break;
		case 109:// NUM_MINUS
			return AndroidKey.FOCUS;
			break;
		case 107:// NUM_PLUS
			return AndroidKey.PLUS;
			break;
		case 126:// F3
			return AndroidKey.MENU2;
			break;
		case 25:// F2
			return AndroidKey.NOTIFICATION;
			break;
		case 24:// F1
			return AndroidKey.SEARCH;
			break;
		case 145:// SCROLL_LOCK
			return AndroidKey.TAG_LAST_KEYCODE;
			break;
		default:
			break;
	}
	return key;
}

int main()
{
	char adbcmd[40];

	while (1)
	{
		// PC Key
		//sprintf_s(pkey, "%i", (char)ReadKey());
		//printf(pkey);

		// Android Key
		sprintf_s(adbcmd, "adb.exe shell input keyevent %i\n", p2a(ReadKey()));
		printf(adbcmd);
		system((char *)adbcmd);
	}

	return 0;
}