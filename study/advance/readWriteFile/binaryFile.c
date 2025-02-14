#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE* file;
	int i;
	//	書き込むデータ
	char wdata[] = { 0x10 , 0x1a , 0x1e , 0x1f };
	char rdata[4];
	//バイナリデータの書き込み
	file = fopen("./test.bin","wb");
	if(file == NULL){
		printf("ファイルオープンに失敗しました。\n");
		exit(1);
	}
	fwrite(wdata,sizeof(char),sizeof(wdata),file);
	fclose(file);          // ファイルをクローズ(閉じる)

	//バイナリデータの読み込み
	file = fopen("./test.bin","rb");
	if(file == NULL){
		printf("ファイルオープンに失敗しました。\n");
		exit(1);
	}
	fread( rdata, sizeof(char), sizeof(rdata), file );
	fclose(file);          // ファイルをクローズ(閉じる)
	//	結果を表示
	for(i = 0; i < sizeof(rdata) ; i++){
		printf("16進数:%x ",rdata[i]);
	}
    for(i = 0; i < sizeof(rdata) ; i++){
		printf("10進数:%d ",rdata[i]);
	}
	printf("\n");
    return 0;
}