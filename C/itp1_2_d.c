int main(){
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if ( W >= x + r && H >= y + r && x - r >= 0 && y - r >= 0 ){ // don't cross the right side, top, left side and under 右側を超えないか、上側を超えないか、左側を超えないか、下側を超えないか確認
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}