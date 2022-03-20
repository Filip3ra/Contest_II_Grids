

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
