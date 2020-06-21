#include <iostream>
#include <cctype>
using namespace std;
string s;
int flag[100] = {0};
int main(){
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(tolower(s[i]) == 'g' && tolower(s[i + 1]) == 'z' && tolower(s[i + 2]) == 'u'){
            flag[i] = flag[i + 1] = flag[i + 2] = 1;
            i += 2;
        }
    }
    for(int i = 0; i < s.size(); i++)
        if(flag[i] != 1)
            cout<<s[i];
    return 0;
}