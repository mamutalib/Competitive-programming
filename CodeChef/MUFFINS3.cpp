#include <cstdio>

int main(){
	int T, N;
	scanf("%d", &T);
	while(T--){
		scanf("%d", &N);
		// The answer is floor(N/2) plus one.  This is
		// the smallest integer strictly greater than
		// half of N, and therefore the smallest integer
		// that results in Chef making exactly 1 package.
		printf("%d\n", N/2+1);
	}
	return 0;
}