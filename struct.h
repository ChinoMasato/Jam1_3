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
	double r;//�T�C�Y
	double angle;//����
	int pene;//�ђʗ�
	double speed;//�X�s�[�h
	int cnt;//�J�E���g
	int movetype;//�ړ��p�^�[��
	int damege;
	int knd;//�摜�̎��
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
