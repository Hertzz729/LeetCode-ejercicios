#include <iostream>
#include <string>
using namespace std;

bool isValid(string s){
    int m=s.size(), c,cp, m2=s.size();
    for(int i=0; i<m; i++){
        c=s[i];
        if(c==40 || c==91 || c==123){ //condicion para que encuentre corchetes de apertura
            for(int j=i+1; j<m; j++){
                cp=s[j];
                if(c==cp-1 ||c==cp-2){//condicion para que encuentre el respectivo conrchete de cierre
                    m2-=2;
                    break;
                }
                else if(j==m-1){ //si recorre todo el string sin encontrar su cierre regresa false
                    return false;
                }
            }
        }
    }
    // si m2==0 significa que se todos los parentesis tenian pares y estaban ordenados de manera correta
    if(m2!=0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    string cor="{}()}";
   // isValid(cor);
    cout<<isValid(cor);
}
