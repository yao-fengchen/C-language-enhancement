#include <iostream>
#include <algorithm>
using namespace std;
string s;
int main(){
    while(cin>>s){
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
    return 0;
}
