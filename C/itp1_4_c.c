int main(){
    int a, b, i, r;
    char op;
    while(1){
        scanf("%d %c %d", &a, &op, &b);
        if (op == '?') break;
        if(op == '+'){ //if op == '+',calculate using addition op == '+'なら、加算を用いて計算
            r = a + b;
        }
        if(op == '-'){
            r = a - b;
        }
        if(op == '*'){
            r = a * b;
        }
        if(op == '/'){
            r = a / b;
        }
        printf("%d\n", r);
    }
    return 0;
}  //memo 加算=addition(V add) 減算==subtraction(V subtract) 乗算=multiplication(V multiply) 除算==dividion(V divide A by B)