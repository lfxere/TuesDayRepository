//　ゲームルール
//ゲーム開始時に、0～50までのランダムな数字を10個用意します。
//プレイヤーとCPUは、その中から1つの数字を選択します。
//数字の大きさを比較し、大きい数字を出した方に3点加算します。
//同じ数字だった場合は、プレイヤーとCPUの両方に1点加算します。
//この勝負を7回繰り返します。
//7回終了後、得点の高い方を勝者とします。

//プログラミングの仕様
//プレイヤーは、1～10番の中から番号を入力して数字を選択してください。
//CPUは、ランダムに番号を選択してください。
//一度選択した番号は、プレイヤー・CPUともに再度選択できません。
//毎回、選択した数字・勝敗・現在の得点を表示してください。
//7回の勝負が終了したら、最終得点と勝者を表示してください。

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(void)
{
	//変数宣言
	int Player;
	int Score;
	int PlayerCard;
	int EnemyCard;
	int i;
	int PlayerInput = 0;


	//乱数の初期化
	srand((unsigned int)time(NULL));
	//内容
	cout << "CPUより大きな数字を出して点数を稼ぎ勝利してください" << endl;

