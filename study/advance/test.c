#include <stdio.h>

int main(int argc, char** argv){
    int a = 10;
    int *p = &a;
    //printf(p);
    printf("あ");
    printf("%d\n", *p);

    int arr[3] = {1, 2, 3};
    int *gas = arr; // arrは&arr[0]に暗黙亭に変換される
    printf("%d\n", gas);
    printf ("%d\n", gas[0]);
    printf ("%d\n", *(gas+0));
    printf ("%d\n", *gas);

    // gas[0] は *(gas + 0) と同じ
    printf("gas[0]: %d\n", gas[0]);   // 1
    printf("*(gas + 0): %d\n", *(gas + 0)); // 1
    printf("*gas: %d\n", *gas);       // 1

    // gas[1] は *(gas + 1) と同じ
    printf("gas[1]: %d\n", gas[1]);   // 2
    printf("*(gas + 1): %d\n", *(gas + 1)); // 2
    return 0;
}