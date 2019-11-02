#pragma GCC optimize ("O3")
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <stack>
#include <unordered_map>
#define lld long long int
#define dbg1(vari1) cerr<<#vari1<<" = "<<(vari1)<<endl;
#define dbg2(vari1,vari2) cerr<<#vari1<<" = "<<(vari1)<<" "<<#vari2<<" = "<<(vari2)<<endl;
#define dbg3(vari1,vari2,vari3) cerr<<#vari1<<" = "<<(vari1)<<" "<<#vari2<<" = "<<(vari2)<<" "<<#vari3<<" = "<<(vari3)<<endl;
using namespace std;
const int mod = 1e9+7;
/* Iterative Function to calculate (x^y)%p
  in O(log y) */
lld fac[(int)2e5];
lld power(lld x, lld y, lld p)
{
    lld res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
lld modInverse(lld n, lld p)
{
    return power(n, p-2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
lld nCr(lld n, lld r, lld p)
{
   // Base case
   if (r==0)
      return 1;
    return (fac[n]* modInverse(fac[r], p) % p *
            modInverse(fac[n-r], p) % p) % p;
}
int main()
{
	//fill this factorial till the maximum required
	//by the functions above, precomputation saves
	//time, and saves from TLE.
	for(int i=2;i<=n;i++)
		fac[i]=(fac[i-1]*i)%mod;

}