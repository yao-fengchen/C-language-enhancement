#include <iostream>
#include <cctype>
using namespace std;
string s, s1, s2, s3;
int main(){
    while(cin>>s){
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i]) || isupper(s[i]))
                s1.push_back(s[i]);
            else if(isalnum(s[i]))
                s2.push_back(s[i]);
            else
                s3.push_back(s[i]);
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
        cout<<s3<<endl;
    }
    return 0;
}
