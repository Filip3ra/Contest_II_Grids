#include <iostream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;

int x = 0, y = 1;

/* Essas funções abaixo descrevem o padrão de movimentação 
   que deve ser feito no eixo X e Y partindo do ponto 0, 1.
   Cada movimento vai alterar o valor de X ou Y, e assim vou
   gerando as coordenadas correspondentes.  
*/

void esquerda(){
    x--;
}

void baixo(){
    y--;
}

void diagonal_1(){
    x++;
    y--;
}

void direita(){
    x++;
}

void cima(){
    y++;
}

void diagonal_2(){
    x--;
    y++;
}

/* A ideia foi criar um vector que guarda a string com as coordenadas,
   de modo que ao pedir pra imprimir a coordenada correspondente ao 
   valor K basta acessar o vector na posição K. Desse modo fica mais 
   fácil pré-processar o valor máximo de 100.000 e depois apenas
   acessá-lo diretamente.

   obs: StringStream foi usado para concatenar int com string.
*/

int main(int argc, char const *argv[]){

    int n = 0, i = 1, pos = 2;
    int aux;
    stringstream sstm;
    vector<string> vet;

    vet.push_back("0 0");
    vet.push_back("0 0");
    vet.push_back("0 1");

    n = 100002;
    while (pos < n){

        aux = i;

        while(i > 0){
            esquerda();
            sstm << x << " " << y;
            vet.push_back(sstm.str());
            sstm.str("");
            --i;
            pos++;
            if(pos >= n) break;
        }

        if(pos >= n) break;
        i = aux;
        
        while(i > 0){
            baixo();
            sstm << x << " " << y;
            vet.push_back(sstm.str());
            sstm.str("");
            --i;
            pos++;
            if(pos >= n) break;
        }

        if(pos >= n) break;

        i = aux;

        while(i > 0){
            diagonal_1();
            sstm << x << " " << y;
            vet.push_back(sstm.str());
            sstm.str("");
            --i;
            pos++;
            if(pos >= n) break;
        }
        
        if(pos >= n) break;
        i = aux;

        while(i > 0){
            direita();
            sstm << x << " " << y;
            vet.push_back(sstm.str());
            sstm.str("");
            --i;
            pos++;
            if(pos >= n) break;
        }

        if(pos >= n) break;
        i = aux;

        while(i+1 > 0){
            cima();
            sstm << x << " " << y;
            vet.push_back(sstm.str());
            sstm.str("");
            --i;
            pos++;
            if(pos >= n) break;
        }

        if(pos >= n) break;
        i = aux;

        while(i > 0){
            diagonal_2();
            sstm << x << " " << y;
            vet.push_back(sstm.str());
            sstm.str("");
            --i;
            pos++;
            if(pos >= n) break;
        }

        if(pos >= n) break;
        i = aux;
        ++i;
    }


    while(cin >> n){
        cout << vet.at(n) << endl;
    }

    return 0;
}