int main(){
    int i, x;
    for( i = 1; i <= 10000; i++ ){ // "less than 10,000" includes 10,000 10,000を超えないは10,000も含む
        scanf("%d", &x);
        if ( x == 0 ) break; // if meet the condition, break the loop 条件を満たしたのならば、ループから抜ける
        printf("Case %d: %d\n", i, x);
    }
    return 0;
}