#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"

//�`��ɂ��Ẵv���O����
void GRAPH_ENETYPE1() {
	for (int i = 0; i < Monsternum; i++) {
		if (MONSTER[i].flag == 1 && MONSTER[i].MovePattern == 1) {//�G�̎�ނ���������΂����ɏ�����ǉ�
			DrawCircle(MONSTER[i].x, MONSTER[i].y, MONSTER[i].r, GetColor(255, 0, 0), true);
			//DrawGraph(MONSTER[i].x - 29, MONSTER[i].y - 24, MONSTER[number].knd, true);//�摜�̏ꍇ�͂����g���Ă�
		}
	}
}

void GRAPH_ENESHOT1(){
	for (int i = 0; i < Monster_shotnum; i++) {
		if (MONSTERSHOT[i].flag == 1) {
			DrawCircle(MONSTERSHOT[i].x, MONSTERSHOT[i].y, MONSTERSHOT[i].r, GetColor(255, 0, 0), false);
			//DrawGraph(MONSTERSHOT[i].x - 29, MONSTERSHOT[i].y - 24, MONSTERSHOT[number].knd, true);//�摜�̏ꍇ�͂����g���Ă�
		}
	}
}

void GRAPH_ENEMY() {
	GRAPH_ENETYPE1();
}