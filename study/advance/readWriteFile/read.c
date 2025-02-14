// /* 1行ずつ読み取る */
// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE 256

// int main(int argc, char** argv){
//     FILE *file;   // ファイルポインタ(読み込み用)
//     char line[SIZE];   // 読み込む行
//     line[0] = '\0';    // 初期化(空文字列)
//     file = fopen("./sample.txt", "r");  // ファイルを読み込み用にオープン
//     if (file == NULL){
//         printf("ファイルが開けません\n");
//         exit(1);
//     }
//     // ファイルのデータを読み込む
//     while (fgets(line, SIZE, file) != NULL) {
//         printf("%s", line);
//     }
//     fclose(file);
//     return 0;
    
// }






/* 1文字ごと読み込み */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE *file;                                   // ファイルポインタ（読み込み用）
	int c;                                        //  読み込む文字のコード
	file = fopen("./sample.txt", "r");    // ファイルを読み込み用にオープン(開く)
	if (file == NULL) {                    // オープンに失敗
		printf("ファイルが開けません。\n");  // エラーメッセージ
		exit(1);    // 異常終了
	}
	//    ファイルのデータ読み込む
	while ((c=fgetc(file)) != EOF){
		printf("%c",(char)c);
	}
	fclose(file);          // ファイルをクローズ(閉じる)
    return 0;
}