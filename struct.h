#pragma once
struct Player {
	double x;
	double y;
	double r;
	double speed;
};

struct Option {
	double x;
	double y;
	double r;
	double speed;
	int power;
	int Ocount;
	int Oflag;
};

struct Ballet {
	double x;//x
	double y;//y
	double r;//サイズ
	double angle;//向き
	int pene;//貫通力
	double speed;//スピード
	int cnt;//カウント
	int movetype;//移動パターン
	int damege;
	int knd;//画像の種類
	int flag;
};

struct Enemy {
	int flag;
	int count;
	double x;
	double y;
	int MovePattern;
	int HP;
	double speed;
};

struct Circle {
	double x;
	double y;
	double r;
};
