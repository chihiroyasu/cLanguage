// #include <stdio.h>
// #include <string.h>

// typedef struct{
//     int id;
//     char name[256];
//     int age;
// }student_data;

// // 構造体のデータを表示する関数
// void setData(student_data*, int, char*, int);
// void showData(student_data*);

// int main(int argc, char** argv){
//     student_data data[4];
//     int i;
//     int id[] = {1, 2, 3, 4};
//     char name[][256] = {" 山田", "佐藤", "太田", "なかた"};
//     int age[] = {18, 19, 18, 18};
//     // データの設定
//     for(i=0;i<4;i++){
//         setData(&data[i], id[i], name[i], age[i]);
//     }
//     // データの内訳を表示
//     for(i=0;i<4;i++){
//         showData(&data[i]);
//     }
//     return 0;
// }

// //データのセット
// void setData(student_data* data, int id, char* name, int age){
//     data->id = id;
//     strcpy(data->name,name);
//     data->age = age;
// }
// //データの表示
// void showData(student_data* data){
//     printf("学生番号:%d 名前:%s 年齢:%d\n", data->id, data->name, data->age);
// }










#include <stdio.h>

//	データを入れる構造体
typedef struct{
	int a;
	double d;
}num_data;

//	二種類の値設定関数
void dealData1(num_data data);		//	値渡し
void dealData2(num_data* pData);	//	ポインタ渡し

int main(int argc, char** args) {
    num_data n1 = { 1, 1.2f },n2 = { 1, 1.2f };
	printf("n1のアドレス:0x%x n2のアドレス:0x%x\n",&n1,&n2);
	dealData1(n1);
	dealData2(&n2);
	printf("n1.a = %d n1.d = %f\n",n1.a,n1.d);   // 値渡しは関数内で引数のコピーを行っていて異なる変数なので(アドレスが異なる)反映されない
	printf("n2.a = %d n2.d = %f\n",n2.a,n2.d);   // ポインタ渡しはアドレスを渡すので値の変更は反映される
    return 0;
}

void dealData1(num_data data)
{
	printf("a=%d f=%f\n",data.a,data.d);
	printf("dealData1にわたってきたデータのアドレス:0x%x\n",&data);
	//	値の変更
	data.a = 2;
	data.d = 2.4;
}
void dealData2(num_data* pData)
{
	printf("a=%d f=%f\n",pData->a,pData->d);
	printf("dealData2にわたってきたデータのアドレス:0x%x\n",pData);
	//	値の変更
	pData->a = 2;
	pData->d = 2.4;
}