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
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int temp = 0;
	int x = rand()%4;
    int q[4] = {a, b, c, d};
    int y = rand()%4;
     
	 for(int i = 0; i < 5; i++){
	 temp = q[x];
	 q[x] = q[y];
	 q[y] = temp;
	 }
     a = q[0];
	 b = q[1];
	 c = q[2];
	 d = q[3];
    

}
