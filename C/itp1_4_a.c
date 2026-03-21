int main(){
    int a, b, d, r;
    double f; //define variable(rational numbers) 変数(有理数)の定義
    scanf("%d %d", &a, &b);
    d = a / b;
    r = a % b; //calculation of remainder 余りの計算 
    f = 1.0000 * a / b; //division of rational numbers 有理数の割り算
    printf("%d %d %.5f\n", d, r, f); // display rational numbers .5 means 5 decimal places 有理数の表示 .5は小数第5位の意味
    return 0;
}