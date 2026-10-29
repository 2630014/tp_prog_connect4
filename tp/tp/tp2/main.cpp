#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::string;
using std::cin;

bool mathing = true;

void board(char board2d[6][7]) // afficher le tableau
{
	bool mathing = true;

	while (mathing)
	{
		cout << "_______________" << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << '|';
			for (int j = 0; j < 7; j++)
			{
				cout << board2d[i][j] << '|';
			}
			cout << endl << "---------------" << endl;
		}
		break;
	}

}
void playerplaying(char board2d[6][7]) //la fonction du joueur quand il joue
{
	int row = 0;
	cin >> row;
	
	for (int E = 5; E >= 0; E--)
	{

		
		if (board2d[E][row] == ' ')
		{
			board2d[E][row] = 'R';

			break;
		}
	}

	board(board2d);

	system("pause");
	system("cls");
}
void rules() // règles du jeu
{
	cout << "hello there! " << endl << "this is connect 4, a game when you need to aling 4 tolkens in line or in diagonal" << endl << "you are playing red" << endl << "good luck!" << endl;

	system("pause");
	system("cls");
}
void checkwin(char board2d[6][7]) // la vérification des cases et des victoires
{

}
void bootyplaying(char board2d[6][7]) // la fonction de l'autre connard quand il joue
{

}
void game() // 
{
	bool GameLoop;

	char board2d[6][7] = {
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
	};

	rules();

	while (GameLoop = true)
	{ 
		board(board2d);

		playerplaying(board2d);

		bootyplaying(board2d);

		checkwin(board2d);
	}

}

void main()
{

	game();

}