#include <bits/stdc++.h>
using namespace std;
int add(int a, int b){
    return a+b;
}
int sub(int a,int b){
    if(a>=b){
        return a-b;
    }else{
        return b-a;
}
int Mul(int a, int b){
    return a*b;
}
int main(){
    int a,b;
    cin >> a >> b;
    int choice;
    cout << "1.Add\n2.Sub\n3.Mul\n";
    cin >>choice;
    int x=0;
    if(choice==1){
        x=add(a,b);
        cout << x;
    }else if(choice==2){
        x=sub(a,b);
        cout << x;
    }else if(choice == 3){
        x=mul(a,b);
        cout << x;
    }
}

}
    
