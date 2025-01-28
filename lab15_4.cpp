#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int R[] = {a,b,c,d};
	for(int i=3;i>0;i--){
		int N = rand()% i;	
		int temp = R[i];
		R[i] = R[N];
		R[N] = temp;
	}
	a = R[0];
	b = R[1];
	c = R[2];
	d = R[3];
	
}
//Do not modify source code above this line
