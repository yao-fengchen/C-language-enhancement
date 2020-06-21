#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c,d;
	while(cin>>a>>b>>c>>d){
		if(pow(a,4) - 2 * pow(a,2) * b - pow(b,2) + 2 * d == 0 && 3 * a * b - pow(a,3) - 2 * c == 0)
			cout<<'Y'<<endl;
		else
			cout<<'N'<<endl;
	}
	return 0;
}
