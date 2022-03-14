#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

	long long n;

	while(cin >> n) {

		long long a, b, c, d, e = 0, f, i;

		a = n*(n+1)*(2*n+1)/6;
		b = (n+1)*n/2*(n+1)*n/2 - a;
		c = n*(n+1)/2*n*(n+1)/2;
		d = (n+1)*n/2*(n+1)*n/2*(n+1)*n/2 - c;
		
        for(i = 1; i <= n; i++)	
            e += i*i*i*i;
		
        f = (n+1)*n/2*(n+1)*n/2*(n+1)*n/2*(n+1)*n/2 - e;

		cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
	}

    return 0;
}