#include <iostream>

using namespace std;

int f(int s, int p, int pn, int n){
    //cout<<s;
    int z=0;
    int w;
    w=(p+1)%2;
    s=s+pn;
    if(s==n){w=p; return(w);}
    if(s>n){return(w);}
    for(int i=0; i<9; i++){
        if (not((9-i)==pn)){
                if (9-i<n+1-s){
                        if(f(s,(p+1)%2,9-i,n)==w){z=1; return(w);}
                }
        }
    }
    if(z==0){return(p);}
}
int main(){
    int n, q;
    cout<<endl<<endl<<"#samaniny"<<endl<<endl;
    for(int h=1; h<36; h++){
        q=1;
        //cout<<endl<<endl<<"these are m(s):"<<endl;
        for(int m=0; m<9; m++){
                if (f(0,0,(9-m),h)==0){
                        q=0;
                        //cout<<m<<endl;
                        break;}
        }
        if(q==0){cout<<h<<"   "<<"A"<<endl;}
        if(q==1){cout<<h<<"   "<<"B"<<endl;}
    }
    int cmon;
    cin>>cmon;
return 0;
}


