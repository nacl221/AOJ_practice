#include <stdio.h> // make it a habit to include this from now on これからこれを習慣づける
int main(){
    int n, i, min, max;
    long long sum; // use long long to prevet overflow オーバーフローを防ぐためにlon longを用いる
    min = 1000000;
    max = -1000000; // set initial values 初期値を設定する
    sum = 0;
    int a[10000]; //mean [10,000 number] in a aの中に10000個の数が入るのを意味している
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
        sum = sum + a[i];
    }
    printf("%d %d %lld\n", min, max, sum); // use %lld BC use long long : long longを用いたため%lldを用いる
    return 0;
}