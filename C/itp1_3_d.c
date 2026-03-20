int main(){
    int a, b, c, i, t;
    t = 0;
    scanf("%d %d %d", &a, &b, &c);
    for ( i = a; i <= b; i++){
         if( c % i == 0){
            t = t + 1;
         }
         else;
    }
    printf("%d\n", t);
    return 0;
}