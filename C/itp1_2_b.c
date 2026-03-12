int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ( a < b && b < c ){ // do not write a < b < c, use logical operator(&&),means "and" a< b < cと書かないで、論理演算子(&&)を用いる これは"and"の意
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
