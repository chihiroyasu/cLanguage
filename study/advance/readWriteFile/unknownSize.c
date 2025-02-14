#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	FILE* file;
	int i,size;
	//	書き込むデータ
	char* rdata;
	//バイナリデータの書き込み
	file = fopen( "./test.bin", "rb" );
	if( file == NULL ){
		printf( "ファイルオープンに失敗しました。\n" );
		exit( 1 );
	}
	//	ファイルの最後までシーク(ファイルの読み出し位置をファイルの終端から0バイト目に設定)
	fseek(file, 0, SEEK_END);
	//	ファイルの大きさを取得(ファイルの読み出しの現在地を取得、現在地は終端なのでその値はファイルの大きさのバイト数に相当)
	size = ftell(file);
	//	メモリのサイズだけ、配列を動的に生成
	rdata = (char*)malloc(sizeof(char)*size);
	//	読み出し位置を先頭に戻す
	fseek(file,0,SEEK_SET);
	fread(rdata, sizeof(char), size, file);
	fclose(file);          // ファイルをクローズ(閉じる)
	//	結果を表示
	for(i = 0; i < size ; i++){
		printf("%x ",rdata[i]);
	}
	printf("\n");
	//	メモリ解放
	free(rdata);
    return 0;
}