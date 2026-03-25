#include <stdio.h>
int main(){
    int n, i, min, max;
    long long sum;
    min = 1000000;
    max = -1000000;
    sum = 0;
    int a[10000];
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
    printf("%d %d %lld\n", min, max, sum);
}