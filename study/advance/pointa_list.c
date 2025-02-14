// #include <stdio.h>

// #define SIZE    5

// int main(int argc,char** argv){
//     //  サイズSIZEの配列を用意する。
//     int ar1[SIZE];
//     char ar2[SIZE];
//     int i;
//     int* p1 = NULL;
//     char* p2 = NULL;
//     //  値を代入
//     for(i = 0; i < SIZE; i++){
//         ar1[i] = i;
//         ar2[i] = 'A'+i;
//     }
//     //  ポインタにアドレスを代入
//     p1 = &ar1[0];
//     p2 = &ar2[0];
//     //  値を出力
//     for(i = 0; i < SIZE; i++){
//         printf("ar1[%d]=%d *(p1+%d)=%d ",i,ar1[i],i,*(p1+i));
//         printf("ar2[%d]=%c *(p2+%d)=%c\n",i,ar2[i],i,*(p2+i));
//     }
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

#define SIZE	3
                                
int main(int argc,char** argv){
    double d[3] = { 0.2 , 0.4 , 0.6 };
    double *p1 = NULL,*p2 = NULL;
	int i;
	p1 = d;	//	p1にdのアドレスを代入
	p2 = d;	//	p2にdのアドレスを代入
	for( i = 0 ; i < 3; i++){
		printf("%f %f %f\n",*(d+i),p1[i],*p2);  // p1を配列のように扱う
		p2++;	//	p2のアドレスをインクリメント
	}
    return 0;
}