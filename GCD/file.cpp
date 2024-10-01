#include "file.h"
using namespace std;


int gcd(int u, int v){
/* We will use Euclid's algorithm for computing the GCD*/
int r;
while (v != 0){
r = u % v; // computer remainder
u = v;
v = r;
}
return u;
}
