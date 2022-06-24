#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define fo for(int i = 0; i<n; i++)
#define ft for(int i = 0; i<t; i++)
#define wt while(t--)
#define wn while(n--)


void solve(){

    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    int x = 0, r = 0;
    while(1) {
		for(int i=0; i<n; i++){
			if(s[i] =='a'+x){
				s[i] = '*';
				r++;
			}
			if(r == k) {
				break;
			}
		}
		x++;
		if(r == k) {
			break;
		}
	}

    for(int i=0; i<n; i++) {
		if(s[i]!='*') {
			cout << s[i];
		}
	}

    //Implementation is taken from GFG. link: https://www.geeksforgeeks.org/remove-the-first-and-last-occurrence-of-a-given-character-from-a-string/
    // while(k--){
    //     for(int i = 0; ; i++){
    //         if (s[i] == 'a'){
    //             s.erase(s.begin()+i);
    //             break;
    //         }
    //         else if(s[i]=='b'){
    //             s.erase(s.begin()+i);
    //             break;
    //         }
    //         else if(s[i] == 'z') {
    //             s.erase(s.begin()+i);
    //             break;
    //         }
    //     }
    // }
    // cout << s << endl;

    

    
}

int main() {
   
    solve();

    return 0;
}
	
