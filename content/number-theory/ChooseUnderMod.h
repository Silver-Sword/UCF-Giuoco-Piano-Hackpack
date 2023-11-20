/**
 * Author: 
 * Date: 2022-11-15
 * License: ???
 * Source: GeeksforGeeks
 * Description: Returns the value of $nCr$ \% $mod$ using Fermat's little theorem.
 * [kactl version not yet tested]
 * Status: used before and on GeeksforGeeks; not personally stress tested
 *
 * Details: ---
 *
 */
#pragma once
#include "ModPow.h"

// could also use kactl's modInverse
int modInverse(int n)
{
    return modpow(n, mod - 2); // set 
}
 
int nCrModPFermat(int n, int r)
{
   if (n<r) return 0;
   if (r == 0) return 1;
 
   vi fac (n + 1);
   fac[0] = 1;
 
   for (int i = 1; i <= n; i++)
       fac[i] = fac[i - 1] * i % mod;
 
   return (fac[n] * modInverse(fac[r]) % mod * modInverse(fac[n - r]) % mod) % mod;
}
