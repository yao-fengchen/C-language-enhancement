#include <iostream>
using namespace std;
string s;
int flag[100] = {0};
int main(){
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'g' && s[i + 1] == 'z' && s[i + 2] == 'u'){
            flag[i] = flag[i + 1] = flag[i + 2] = 1;
            i += 2;
        }
    }
    for(int i = 0; i < s.size(); i++)
        if(flag[i] != 1)
            cout<<s[i];
    return 0;
}