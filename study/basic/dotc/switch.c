#include <stdio.h>

int main(int argc, char** argv){
    int num;
    printf("1~3の値を入力");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    default:
        printf("不適切にも程がある\n");
        break;
    }
    return 0;
}