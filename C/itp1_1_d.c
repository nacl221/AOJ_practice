int main(){
    int S, h = 0, m = 0, s = 0;
    scanf("%d",&S);
    h = S / 3600; //calculate hour causion,its 3600s not 60m 時間の計算　注意、60分ではなく3600秒
    m = (S % 3600) / 60;
    s = S % 60;
    printf("%d:%d:%d\n", h, m, s); //Output to h:m:s h:m:sの順に出力
    return 0;
}
