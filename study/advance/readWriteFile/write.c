#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
    FILE *file;										// ファイルポインタ（出力用）
	file = fopen("./sample.txt", "w"); 		// ファイルを書き込み用にオープン(開く)
	if (file == NULL) {			 					// オープンに失敗した場合
		printf("ファイルが開けません。\n");			// エラーメッセージを出して
		exit(1);									// 異常終了
	}
	//	ファイルにデータを書き込む
	fprintf(file,"HelloWorld\n");		// ファイルに書く
	fprintf(file,"ABCDEF\n");
	fclose(file);         				// ファイルをクローズ(閉じる)
    return 0;
}