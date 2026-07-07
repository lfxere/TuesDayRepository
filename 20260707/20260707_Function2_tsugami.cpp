#include<iostream>
#include "20260707_Header2_tsugami.h"
using namespace std;

//ゲーム
void Game(int answer)
{
	//変数
	int playerInput = 0;
	int i;
	cout << "===============GameStart================" << endl;
	for (i = 0; i < ROUND; i++)
	{
		cout << i + 1 << "回目です\n";

		playerInput = InputCheck(MIN, MAX);

		if (playerInput == answer)
		{
			cout << "Hit" << endl;
			break;
		}
		else
		{
			cout << "Miss" << endl;
		}

	}

	//答えを表示
	cout << "Answer:" << answer << endl;

	if (i <= ROUND)
	{
		cout << "Player's Winner" << endl;
	}
	else
	{
		cout << "CPU's Winner" << endl;
	}

}

//入力チェック
int InputCheck(int min, int max)
{
	//変数
	int num;
	//入力チェック
	while (true)
	{
		//入力
		cout << "0～9までの数字が入力してください。" << endl;
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}

	}

	return num;
}