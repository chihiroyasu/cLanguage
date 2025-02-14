// #include <stdio.h>

// int main(int argc, char** argv){
//     double one, two, three;
//     double sum, avg;
//     one = 1.2, two = 3.7, three = 4.1;
//     printf("%lf %lf %lf\n", one, two, three);
//     sum = one + two + three;
//     avg = sum / 3.0;
//     printf("合計値： %lf\n", sum);
//     printf("平均値： %lf\n", avg);
//     return 0;
// }


// #include <stdio.h>

// int main(int argc, char** argv){
//     double d[3];
//     double sum, avg;
//     int i;

//     d[0] = 1.2;
//     d[1] = 3.7;
//     d[2] = 4.1;
//     sum = 0.0;
//     for(i=0; i<3; i++){
//         printf("%lf ", d[i]);
//         sum += d[i];
//     }
//     printf("\n");
//     avg = sum / 3.0;
//     printf("合計値：%lf\n", sum);
//     printf("平均値:%lf\n", avg);
//     return 0;
// }



// #include <stdio.h>

// int main(int argc, char** argv) {
//     int n[] = { 5,4,3,2,1 };
// 	int i;
// 	for(i = 0; i < 5; i++){
// 		printf("n[%d]=%d ",i,n[i]);
// 	}
// 	printf("\n");
//     return 0;
// }



// #include <stdio.h>

// int main(int argc, char** argv){
//     char s1[4] = {'a', 'b', 'c', '\0'};   //	文字列"abc"
//     char s2[] = "HelloWorld.";   //	文字列"HelloWorld."
//     char s3[10];    //	最大10文字まで入る文字列

//     printf("文字列を入力してください。：");
//     scanf("%s", s3);
//     printf("s1 = %s\n", s1);
//     printf("s2 = %s\n", s2);
//     printf("s3 = %s\n", s3);
//     return 0;
// }



#include <stdio.h>

int main(int argc, char** argv) {
	int a[3][4];
	int m,n;
	//	二次元配列に値を代入
	for(m = 0; m < 3; m++){
		for(n = 0; n < 4; n++){
			a[m][n] = m+n;
		}
	}
	//	成分の表示
	for(m = 0; m < 3; m++){
		for(n = 0; n < 4; n++){
			printf("%d ",a[m][n]);
		}
		printf("\n");
	}
    return 0;
}