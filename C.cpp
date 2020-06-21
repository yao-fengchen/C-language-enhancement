#include <iostream>
#include <string>
using namespace std;
string s1, s2;
char c;
int main(){
    while((c = getchar()) != '\n'){
        if(isalnum(c) && !islower(c) && !isupper(c))
            s2.push_back(c);
        else
            s1.push_back(c);
    }
    cout<<s1<<s2<<endl;
    return 0;
}