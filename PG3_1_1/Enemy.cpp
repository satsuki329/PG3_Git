#include <iostream>
using namespace std;


// 自作クラス
class ENEMY {
public:
	void Update();

	void approach();
	void attack();
	void recession();

	bool endflag = true;

	// メンバ関数ポインタのテーブル
	static void (ENEMY::* table[])();

private:
	// メンバ関数ポインタのテーブルを参照するインデックス
	int index = 0,
		num = 0;
};
//axws

void ENEMY::approach() {
	cout << "敵の接近！\n" << endl;
}

void ENEMY::attack() {
	cout << "敵の攻撃！\n" << endl;
}

void ENEMY::recession() {
	cout << "敵の後退！\n" << endl;
}

void ENEMY::Update() {

	// 関数ポインタのテーブルから関数を実行
	(this->*table[index])();

	cout << "1を入力で次の行動,1以外で終了" << endl;
	scanf_s("%d", &num);

	if (num == 1) {
		index += 1;
		if (index == 3)
		{
			index = 0;
		}
	}
	else
	{
		endflag = false;
	}
}

// staticで宣言したメンバ関数ポインタテーブルの実体
void (ENEMY::* ENEMY::table[])() = {
  &ENEMY::approach , // インデックス番号0
  & ENEMY::attack, // インデックス番号1
  & ENEMY::recession  // インデックス番号2
};


int main()
{
	ENEMY my;

	while (my.endflag)
	{
		my.Update();
	}

	return 0;
}