#pragma once
#pragma once
#include"struct.h"

#ifdef GL_INSTANCE
#define GL
#else
#define GL extern 
#endif

#include"function.h"
//�uGL �ϐ��u����ł����錾�Ɠ����錾�v�Ƃ���B
/*
��@hensuuokiba.cpp�@�Ł@int a;�@�Ɛ錾������
�@�@hensuu.h�@�Ł@GL int a;�@�Ɛ錾����B
  �@������GL�錾�������hensuu.h���C���N���[�h(#include�̂���)���Ă���΁A
    extern�錾�����Ȃ��Ă��ϐ����g���܂��B
*/

GL Player JIKI;
GL Option FORCE;
GL int flag[counts];
GL int stagecount;