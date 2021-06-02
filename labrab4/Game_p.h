#ifndef Game_p
#define Game_p

enum Status {
	PLAY,            // ���� ������������
	USER_WIN,        // ����� �������
	BOT_WIN,         // ��� �������
	NOT_WIN          // �����. ���������� ���, �� � �� ���� ��� ��������� ������
};

struct Game {
	char bord[3][3];  // ������� ����
	bool isUserTurn;  // ��� ���. ���� ������������, �� isUserTurn = true
	char userChar;    // ������ ������� ������ ������������
	char botChar;     // ������ ������� ������ ���
	Status status;
};

Game initGame(char userChar);

void updateDisplay(const Game game);
void userTurn(Game* game);
void botTurn(Game* game);
bool updateGame(Game* game);

#endif