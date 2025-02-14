// #include <stdio.h>
// #include <string.h>

// //	学生のデータを入れる構造体
// struct student{
// 	int id;			//	学生番号
// 	char name[256];	//	名前
// 	int age;		//	年齢
// };

// int main(int argc,char** argv){
//     struct student data;
// 	data.id = 1;	//	番号を設定
// 	strcpy(data.name,"山田太郎");	//	名前を設定
// 	data.age = 18;	//	年齢を設定
// 	//	データの内訳を表示
// 	printf("学生番号:%d 名前:%s 年齢:%d\n",data.id,data.name,data.age);
//     return 0;
// }


#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[256];
    int age;
};

// 構造体の名前をtypedefで定義
typedef struct student student_data;

int main(int argc, char** argv){
    int i;
    student_data data[] = {
        {1, "太郎", 18},
        {2, "佐藤", 19},
        {3, "隆", 18},
        {4, "優子", 18}
    };
    // データの内訳を表示
    for(i=0;i<4;i++){
        printf("学生番号:%d 名前:%s 年齢:%d\n", data[i].id, data[i].name, data[i].age);
    }
    return 0;
}
