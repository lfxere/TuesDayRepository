#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260707_Header2_tsugami.h"
using namespace std;

int main(void)
{
	//変数
	int ans;
	//乱数の初期化
	srand((unsigned int)time(NULL));

	ans = rand() % MAX + MIN;
	//ゲームのインフォメーション
	cout << "CPUと対戦してランダムな数字を当てましょう。3つ当てると勝利です。" << endl;

	Game(ans);

	return 0;
}