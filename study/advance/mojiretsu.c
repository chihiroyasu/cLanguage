#include <stdio.h>
#include <string.h>
#include <stdlib.h>  //atoi

int main(int argc, char** argv){
    /* 文字列の結合とコピーやその長さ */
    char s[10];
    int len;
    // 文字列のコピー
    strcpy(s, "ABC");
    printf("s=%s\n", s);
    // 文字列の結合
    strcat(s, "DEF");
    printf("s=%s\n", s);
    // 文字列の長さ
    len = strlen(s);
    printf("文字列の長さ：%d\n", len);


    /* 文字列の比較 */
    char s1[256],s2[256];
    printf("s1=");
    scanf("%s",s1);
    printf("s2=");
    scanf("%s",s2);
    if(strcmp(s1,s2)==0){
        printf("s1とs2は等しい\n");
    }else{
        printf("s1とs2は等しくない\n");
    }


    /* 文字列→数値の変換 */
    char sa[] = "1000";
    char sb[] = "12.345";
    int a;
    double b;
    a = atoi(sa);
    b = atof(sb);
    printf("a=%d b=%f\n",a,b);


    /* 数値→文字列への変換 */
    char s3[256],s4[256];
    int c = 100,d = 200;
    sprintf(s3,"%d",c);
    sprintf(s4,"bの値は%dです。",d);
    puts(s3);
    puts(s4);


    return 0;
}