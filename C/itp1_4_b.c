int main(){
    double r,S,L;
    scanf("%lf", &r); //in this case, use %lf 
    S = 1.00000 * r * r * 3.141592653589; // in this case, use 3.141592653589 instead of pie 今回はπの代わりに3.141592653589を用いる
    L = 1.00000 * 2 * r * 3.141592653589;
    printf("%.5f %.5f\n", S, L);
    return 0;
}