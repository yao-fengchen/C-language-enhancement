#include <iostream>
#include <string>
using namespace std;
string s;
char c;
int main(){
    while((c = getchar()) != '\n'){
        if(islower(c)){
            c += 3;
            if(c > 'z')
                c -= 26;
        }else if(isupper(c)){
            c += 3;
            if(c > 'Z')
                c -= 26;
        }
        s.push_back(c);
    }
    cout<<s<<endl;
    return 0;
}
