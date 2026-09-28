#include <iostream.h>
using namespace std;
int main(){
    int a,b;
    cin >> a>>b;
    int choice;
    cout << "1.Add\n2.Sub\n";
    cin >>choice;

}
int add(int a, int b){
    return a+b;
}
int sub(int a,int b){
    if(a>=b){
        return a-b;
    }else{
        return b-a;
    }
}
    