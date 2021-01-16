#include <iostream>
#include <stdio.h>
using namespace std;


int NCR(int n, int r){
  if(r==0 || n == r){
    return 1;
  }
  else{
    return NCR(n-1, r-1) + NCR(n-1, r);
  }
}

int fact(int n){
  if(n == 0) return 1;
  return fact(n-1)*n;
}

int nCr(int n, int r){
  int numerator, denominator;
  numerator = fact(n);
  denominator = fact(r) * fact(n-r);
  return numerator/denominator;
}


int main() {
 int result =  nCr(4, 2);
  std::cout << "Hello World!\n "<< result<<endl;
}