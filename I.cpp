#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string word1, word2;
        cin>>word1>>word2;
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        if(word1 == word2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}