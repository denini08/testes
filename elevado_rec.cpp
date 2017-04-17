#include <iostream>

using namespace std;

int eleva(int n, int num, int res){
	if(n == 0) return 0;
	
	if(num == ((2 * n)-1)){
		return res;
	}
	num = num + 2;
	res = res + num;
	return eleva(n,num,res);
}
int main(){
	int numero = 10;
	int a;
	a = eleva(numero,1,1);
	cout << "o numero e: " << a;
	
}