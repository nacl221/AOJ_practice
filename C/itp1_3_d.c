int main(){
    int a, b, c, i, t;
    t = 0;
    scanf("%d %d %d", &a, &b, &c);
    for ( i = a; i <= b; i++){
         if( c % i == 0){ // calculate the remainder of c to check if i is a divisor of c 余りを計算してiがcの約数かを判断する
            t = t + 1;
         }
         else;
    }
    printf("%d\n", t);
    return 0;
}