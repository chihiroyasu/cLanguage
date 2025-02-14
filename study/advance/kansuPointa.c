#include <stdio.h>

// 関数のプロトタイプ宣言
void func1();
void func2();

int main(int argc,char** argv){
    void (*fp)() = func1;	//	関数ポインタをfunc1で初期化
	fp();	//	関数fpを実行
	fp = func2;
	fp();	//	関数fpを実行
    return 0;
}

//	関数1
void func1(){
	printf("func1\n");
}

//	関数2
void func2() {
	printf("func2\n");
}