int main(){
    double r,S,L;
    scanf("%lf", &r);
    S = 1.00000 * r * r * 3.141592653589;
    L = 1.00000 * 2 * r * 3.141592653589;
    printf("%.5f %.5f\n", S, L);
    return 0;
}