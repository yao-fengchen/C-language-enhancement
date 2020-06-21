#include <iostream>
using namespace std;
long long mul(long long n){
    if(n == 1)
        return 1;
    else
        return n * mul(n - 1);
}
int main(){
    long long n, sn = 0;
    cin>>n;
    for(long long i = 1; i <= n; i++)
        sn += mul(i);
    cout<<sn<<endl;
    return 0;
}