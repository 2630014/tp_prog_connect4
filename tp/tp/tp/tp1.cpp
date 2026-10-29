#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void main()
{
	bool GameLoop = true;
	bool WchoixJ = true;
	bool WchoixQ = false;

	string case1 = " ";
	string case2 = " ";
	string case3 = " ";
	string case4 = " ";
	string case5 = " ";
	string case6 = " ";
	string case7 = " ";
	string case8 = " ";
	string case9 = " ";
	int choixJ = 0;
	int choixQ = 0;

	srand(time(0));

	cout << "salut, bienvenu dans mon tic-tac-toe." << endl << "voici les regle, tu dois reussire a alligne trois x avant ton adversaire. " << endl << "bonne chance!" << endl << endl << endl;

	cout << "-----" << endl;
	cout << case1 << "|" << case2 << "|" << case3 << endl;
	cout << "-----" << endl;
	cout << case4 << "|" << case5 << "|" << case6 << endl;
	cout << "-----" << endl;
	cout << case7 << "|" << case8 << "|" << case9 << endl;
	cout << "-----" << endl << endl << endl;


	while (GameLoop)
	{
		choixJ = 0;
		choixQ = rand() % 9;
		cout << " ecris le numero de la case que tu as choisi de jouer: ";
		cin >> choixJ;

		while (WchoixJ)
		{
			if (choixJ == 1 && case1 == " ")
			{
				case1 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else if (choixJ == 2 && case2 == " ")
			{
				case2 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else if (choixJ == 3 && case3 == " ")
			{
				case3 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else if (choixJ == 4 && case4 == " ")
			{
				case4 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else if (choixJ == 5 && case5 == " ")
			{
				case5 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else if (choixJ == 6 && case6 == " ")
			{
				case6 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else if (choixJ == 7 && case7 == " ")
			{
				case7 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else if (choixJ == 8 && case8 == " ")
			{
				case8 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else if (choixJ == 9 && case9 == " ")
			{
				case9 = "x";

				WchoixJ = false;
				WchoixQ = true;
			}
			else 
			{
				cout << " don't you dare! DON'T YOU DARE!!!" << endl << endl;
				cout << " put a good number next time...  ";

				system("pause");
			}

			system("cls");

			cout << "-----" << endl;
			cout << case1 << "|" << case2 << "|" << case3 << endl;
			cout << "-----" << endl;
			cout << case4 << "|" << case5 << "|" << case6 << endl;
			cout << "-----" << endl;
			cout << case7 << "|" << case8 << "|" << case9 << endl;
			cout << "-----" << endl << endl << endl;

			break;

		}

		while (WchoixQ)
		{
			if (choixQ == 1 && case1 == " ")
			{
				case1 = "o";

			}
			else if (choixQ == 2 && case2 == " ")
			{
				case2 = "o";

			}
			else if (choixQ == 3 && case3 == " ")
			{
				case3 = "o";

			}
			else if (choixQ == 4 && case4 == " ")
			{
				case4 = "o";

			}
			else if (choixQ == 5 && case5 == " ")
			{
				case5 = "o";

			}
			else if (choixQ == 6 && case6 == " ")
			{
				case6 = "o";

			}
			else if (choixQ == 7 && case7 == " ")
			{
				case7 = "o";

			}
			else if (choixQ == 8 && case8 == " ")
			{
				case8 = "o";

			}
			else if (choixQ == 9 && case9 == " ")
			{
				case9 = "o";

			}
			else (choixQ = rand() % 9);
			

			cout << "-----" << endl;
			cout << case1 << "|" << case2 << "|" << case3 << endl;
			cout << "-----" << endl;
			cout << case4 << "|" << case5 << "|" << case6 << endl;
			cout << "-----" << endl;
			cout << case7 << "|" << case8 << "|" << case9 << endl;
			cout << "-----" << endl << endl << endl;

			if (case1 == "x" && case5 == "x" && case9 == "x")
			{
				cout << "I hate u :(" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case1 == "o" && case5 == "o" && case9 == "o")
			{
				cout << "I won!" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case2 == "x" && case5 == "x" && case8 == "x")
			{
				cout << "I hate u :(" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case2 == "o" && case5 == "o" && case8 == "o")
			{
				cout << "I won!" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case3 == "x" && case5 == "x" && case7 == "x")
			{
				cout << "I hate u :(" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case3 == "o" && case5 == "o" && case7 == "o")
			{
				cout << "I won!" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case1 == "x" && case2 == "x" && case3 == "x")
			{
				cout << "I hate u :(" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case1 == "o" && case2 == "o" && case3 == "o")
			{
				cout << "I won!" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case3 == "x" && case6 == "x" && case9 == "x")
			{
				cout << "I hate u :(" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case3 == "o" && case6 == "o" && case9 == "o")
			{
				cout << "I won!" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case7 == "x" && case8 == "x" && case9 == "x")
			{
				cout << "I hate u :(" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case7 == "o" && case8 == "o" && case9 == "o")
			{
				cout << "I won!" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case1 == "x" && case4 == "x" && case7 == "x")
			{
				cout << "I hate u :(" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case1 == "o" && case4 == "o" && case7 == "o")
			{
				cout << "I won!" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case4 == "x" && case5 == "x" && case6 == "x")
			{
				cout << "I hate u :(" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case4 == "o" && case5 == "o" && case6 == "o")
			{
				cout << "I won!" << endl;

				system("pause");

				GameLoop = false;
			}
			else if (case1 != " " && case2 != " " && case3 != " " && case4 != " " && case5 != " " && case6 != " " && case7 != " " && case8 != " " && case9 != " ")
			{
				cout << "your game is fucking broken!" << endl;

				GameLoop = false;
			}
			system("pause");
			WchoixQ = false;
			WchoixJ = true;
		}
	}

  
}