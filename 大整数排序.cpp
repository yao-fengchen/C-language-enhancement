#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    else
        return a < b;
}
int main(){
    int N;
    while(cin>>N){
        string str[N];
        for(int i = 0; i < N; i++)
            cin>>str[i];
        sort(str, str + N, cmp);
        for(int i = 0; i < N; i++)
            cout<<str[i]<<endl;
    }
    return 0;
}
