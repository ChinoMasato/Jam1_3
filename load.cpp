#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"

//読み込みについてのプログラム
void Load() {
	//image[] = LoadGraph("");
	image[0] = LoadGraph("image/hpba.png");
	image[1] = LoadGraph("image/force_transparent.png");
	image[2] = LoadGraph("image/jiki.png");
}