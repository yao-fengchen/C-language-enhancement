#include <iostream>
using namespace std;
double d, x, y, t;
int main(){
    while(cin>>d>>x>>y>>t){
        if(d / y > d / x + t)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}