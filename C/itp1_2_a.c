int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    if ( a < b ){ // write if at the first branch 
        printf("a < b\n"); // don't forget \n behind "word" "文字"の後ろに\nを忘れるな 
    } else if ( a > b ){ // write else if from the second branch onward 第二分岐以降はelse if
        printf("a > b\n"); 
    } else { // write else at the last branch 最後の分岐ではelse
        printf("a == b\n");
    }
    return 0;
}
