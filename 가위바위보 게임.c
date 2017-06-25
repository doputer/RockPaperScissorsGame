#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
 
// ????? ????
void findwinner(int, int, int *, char *, char *);
void delay(int);
void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X=x;
	Cur.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
enum {
	BLACK,
	D_BLUE,
	D_GREEN,
	D_SKYBLUE,
	D_RED,
	D_VIOLET,
	D_YELLOW,
	GRAY,
	D_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};
void SetColor(int backcolor, int fontcolor)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backcolor*16+fontcolor);
}

int main()
{
	int key, gametype, computer, player1, player2, result; // 1??: computer vs player 2??: player1 vs player2
	char p1[9], p2[9];
	srand((unsigned)time(NULL));

	SetConsoleTitle(TEXT("????? ??"));
	SetColor(WHITE, BLACK);

	system("cls");

	printf("\n\n\n");
	printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
	printf("                               ¢x                                                          ¢x\n");
	printf("                               ¢x                     ????? ??                      ¢x\n");
	printf("                               ¢x                                                          ¢x\n");
	printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf(" ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
	printf(" ¢x                                                                                                                  ¢x\n");
	printf(" ¢x                                              ?? ??? ?????                                              ¢x\n");
	printf(" ¢x                                                                                                                  ¢x\n");
	printf(" ¢x                                                  1??    2??                                                  ¢x\n");
	printf(" ¢x                                                                                                                  ¢x\n");
	printf(" ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

	gotoxy(50, 25);
	printf("?");
	gametype=1;
	while(1)
	{
		if(kbhit())
		{
			key=getch();
			if(key==224 || key==0)
			{
				key=getch();
				switch(key)
				{
					case 75:
						gametype=1;

						gotoxy(59, 25);
						printf(" ");

						gotoxy(50, 25);
						printf("?");
						break;
					case 77:
						gametype=2;

						gotoxy(50, 25);
						printf(" ");

						gotoxy(59, 25);
						printf("?");
						break;
					default:
						break;
				}
			}
			else
			{
				if(key==13)
				{
					system("cls");
					break;
				}
			}
		}
	}

	if(gametype==1) // 1??
	{
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x                          1??                           ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf(" ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢x                                            ??, ??, ?? ????                                             ¢x\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢x                                              ??      ??      ?                                              ¢x\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

		gotoxy(46, 25);
		printf("?");
		player1=1;
		while(1)
		{
			if(kbhit())
			{
				key=getch();
				if(key==224 || key==0)
				{
					key=getch();
					switch(key)
					{
						case 75:
							if(player1==2)
							{
								gotoxy(56, 25);
								printf(" ");

								gotoxy(46, 25);
								printf("?");

								player1--;
							}
							else if(player1==3)
							{
								gotoxy(66, 25);
								printf(" ");

								gotoxy(56, 25);
								printf("?");

								player1--;
							}
							break;
						case 77:
							if(player1==1)
							{
								gotoxy(46, 25);
								printf(" ");

								gotoxy(56, 25);
								printf("?");

								player1++;
							}
							else if(player1==2)
							{
								gotoxy(56, 25);
								printf(" ");

								gotoxy(66, 25);
								printf("?");

								player1++;
							}
							break;
						default:
							break;
					}
				}
				else
				{
					if(key==13)
					{
						system("cls");
						break;
					}
				}
			}
		}

		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x         ???? ??, ??, ?? ???? ?¡³¡³¡³      ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		delay(1);
		system("cls");
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x         ???? ??, ??, ?? ???? ?¡´¡³¡³      ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		delay(1);
		system("cls");
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x         ???? ??, ??, ?? ???? ?¡´¡´¡³      ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		delay(1);
		system("cls");
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x         ???? ??, ??, ?? ???? ?¡´¡´¡´      ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		delay(1);
		
		computer=rand()%3+1;

		system("cls");
	
		findwinner(player1, computer, &result, p1, p2);
		
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x               Player: %s Computer: %s                ¢x\n", p1, p2);
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf(" ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		switch(result)
		{
			case 1:
				printf(" ¢x                                                   Player ??!                                                   ¢x\n");
				break;
			case 2:
				printf(" ¢x                                                  Computer ??!                                                  ¢x\n");
				break;
			default:
				printf(" ¢x                                                     ???!                                                      ¢x\n");
				break;
		}
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		system("pause");
	}
	else // 2??
	{
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x                          2??                           ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf(" ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢x                                            ??, ??, ?? ????                                             ¢x\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢x                                              ??      ??      ?                                              ¢x\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

		gotoxy(46, 25);
		printf("?");
		player1=1;
		while(1)
		{
			if(kbhit())
			{
				key=getch();
				if(key==224 || key==0)
				{
					key=getch();
					switch(key)
					{
						case 75:
							if(player1==2)
							{
								gotoxy(56, 25);
								printf(" ");

								gotoxy(46, 25);
								printf("?");

								player1--;
							}
							else if(player1==3)
							{
								gotoxy(66, 25);
								printf(" ");

								gotoxy(56, 25);
								printf("?");

								player1--;
							}
							break;
						case 77:
							if(player1==1)
							{
								gotoxy(46, 25);
								printf(" ");

								gotoxy(56, 25);
								printf("?");

								player1++;
							}
							else if(player1==2)
							{
								gotoxy(56, 25);
								printf(" ");

								gotoxy(66, 25);
								printf("?");

								player1++;
							}
							break;
						default:
							break;
					}
				}
				else
				{
					if(key==13)
					{
						system("cls");
						break;
					}
				}
			}
		}
	
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x                          2??                            ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf(" ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢x                                            ??, ??, ?? ????                                             ¢x\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢x                                              ??      ??      ?                                              ¢x\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

		gotoxy(46, 25);
		printf("?");
		player2=1;
		while(1)
		{
			if(kbhit())
			{
				key=getch();
				if(key==224 || key==0)
				{
					key=getch();
					switch(key)
					{
						case 75:
							if(player2==2)
							{
								gotoxy(56, 25);
								printf(" ");

								gotoxy(46, 25);
								printf("?");

								player2--;
							}
							else if(player2==3)
							{
								gotoxy(66, 25);
								printf(" ");

								gotoxy(56, 25);
								printf("?");

								player2--;
							}
							break;
						case 77:
							if(player2==1)
							{
								gotoxy(46, 25);
								printf(" ");

								gotoxy(56, 25);
								printf("?");

								player2++;
							}
							else if(player2==2)
							{
								gotoxy(56, 25);
								printf(" ");

								gotoxy(66, 25);
								printf("?");

								player2++;
							}
							break;
						default:
							break;
					}
				}
				else
				{
					if(key==13)
					{
						system("cls");
						break;
					}
				}
			}
		}

		system("cls");

		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x                 ??? ???? ?¡³¡³¡³                 ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		delay(1);
		system("cls");
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x                 ??? ???? ?¡´¡³¡³                 ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		delay(1);
		system("cls");
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x                 ??? ???? ?¡´¡´¡³                 ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		delay(1);
		system("cls");
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x                 ??? ???? ?¡´¡´¡´                 ¢x\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		delay(1);
		
		system("cls");

		findwinner(player1, player2, &result, p1, p2);
		
		printf("\n\n\n");
		printf("                               ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢x               Player1: %s Player2: %s                ¢x\n", p1, p2);
		printf("                               ¢x                                                          ¢x\n");
		printf("                               ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf(" ¢z¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢{\n");
		printf(" ¢x                                                                                                                  ¢x\n");
		switch(result)
		{
			case 1:
				printf(" ¢x                                                   Player1 ??!                                                  ¢x\n");
				break;
			case 2:
				printf(" ¢x                                                   Player2 ??!                                                  ¢x\n");
				break;
			default:
				printf(" ¢x                                                     ???!                                                      ¢x\n");
				break;
		}
		printf(" ¢x                                                                                                                  ¢x\n");
		printf(" ¢|¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢}\n");
		system("pause");
	}
	return 0;
}

void findwinner(int player1, int player2, int *result, char *p1, char *p2) // ??? ?? ??
{
	char p1_rsp[9], p2_rsp[9];
	if(player1==1) // p1? ??, ??, ? ??
		strcpy(p1_rsp, "??");
	else if(player1==2)
		strcpy(p1_rsp, "??");
	else
		strcpy(p1_rsp, "?  ");
	if(player2==1) // p2? ??, ??, ? ??
		strcpy(p2_rsp, "??");
	else if(player2==2)
		strcpy(p2_rsp, "??");
	else
		strcpy(p2_rsp, "?  ");

	strcpy(p1, p1_rsp);
	strcpy(p2, p2_rsp);

	if(player1==1 && player2==3 || player1==2 && player2==1 || player1==3 && player2==2) // p1 ??
		*result=1;
	else if(player1==1 && player2==2 || player1==2 && player2==3 || player1==3 && player2==1) // p2 ??
		*result=2;
	else // ???
		*result=0;
}

void delay(int time) // time/2? ?? delay ??? ??
{
	int delay;
	for(delay=0; delay<time; delay++)
			Sleep(500);
	printf("\n");
}