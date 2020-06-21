#include <iostream>
#include <math.h>
using namespace std;
double len(double x1,  double x2, double y1, double y2){
	return sqrt((y1-x1) * (y1-x1) + (y2-x2) * (y2-x2));
}
int main(){
	double a1, a2, b1, b2, c1, c2;
	while(cin>>a1>>a2>>b1>>b2>>c1>>c2){
		double a, b, c, p, s;
		a = len(a1, a2, b1, b2);
		b = len(b1, b2, c1, c2);
		c = len(a1, a2, c1, c2);
		p = (a + b + c) / 2;
		s = sqrt(p * (p-a) * (p-b) * (p-c));
		printf("%.2f\n",s);
	}
	return 0;
}