#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,tp,x,ans;
	cin >> t;
	while(t--){
	    x = 0;
	    cin >> tp;
	    x = 52/tp;
	    ans = 52-(x*tp);
	    cout << ans <<endl;
	}
	return 0;
}
