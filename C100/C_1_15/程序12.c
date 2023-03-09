//题目：判断101-200之间有多少个素数，并输出所有素数。
#include <math.h>
#include<stdio.h>
int main() {
    int i = 0;
    for (i = 100; i <= 200; i++) {
        //因为所有的数都可以被1整除，所以从2开始试
        int j = 0;
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }    
        }
        //跳出循环后，如果该数和i相等，则是素数
        if (i == j) {
            printf("%d  ", i);
        }
    }
}