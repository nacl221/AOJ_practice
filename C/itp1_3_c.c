int main(){
    int x, y, i, t;
    for ( i = 0; i <= 3000; i++){
        scanf("%d %d", &x, &y);
        if ( x == 0 && y == 0) break;
        if ( x > y ){
             t = x;
             x = y;
             y = t;
             printf("%d %d\n", x, y);
        }
        else printf("%d %d\n", x, y);
    }
    return 0;
}