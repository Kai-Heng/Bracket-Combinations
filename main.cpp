#include <iostream>
#include <string>
using namespace std;

long long factorial(int n){
  long long result = 1;
  for(int i = 1; i<=n; i++){
    result *=i;
  }

  return result;
}

long long choose(int n, int k){
  long long numerator = factorial(n);
  long long denominator = factorial(k) * factorial(n-k);
  return numerator/denominator;
}

long long BracketCombinations(int num) {
  
  if(num <= 1){
    return 1;
  }

  return choose(2 * num, num) / (num + 1);
}

// keep this function call here
int main(void) { 
   
  cout << BracketCombinations(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
