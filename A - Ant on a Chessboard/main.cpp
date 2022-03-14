
// verificar --> https://saicheems.wordpress.com/2013/11/29/uva-10161-ant-on-a-chessboard/


#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){

    int l, c, raiz, aux;

    int n = 1;
    cin >> n;
    while(n!=0){

        raiz = ceil(sqrt(n));   //obtenho o teto da raiz quadrada do n informado
        aux = (raiz * raiz) - raiz + 1;
        l = c = raiz;

        if(raiz%2 == 0){
            if(n>aux)
                c -= n - aux;
            else
                l -= aux - n;                
        }
        else{
            if(n>aux)
                l -= n - aux;
            else
                c -= aux - n;
        }

        cout << l << " " << c << endl;
        cin >> n;
    }

    return 0;
}

/*
#include<cmath>
#include<cstdio>
 
int n, x, y;
 
int main() {
    for(;;) {
        scanf("%d", &n);
        if(n == 0) break;
 
        int root = ceil(sqrt(n));
        int c = root * root - root + 1;
        x = y = root;
 
        if(root % 2 == 0) {
            if(n > c) y -= n - c;
            else x -= c - n;
        } else {
            if(n > c) x -= n - c;
            else y -= c - n;
        }
 
        printf("%d %d\n", x, y);
    }
}
*/