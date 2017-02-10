/*
Multiples of 3 and 5

If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

#include <iostream>
using namespace std;

//attempt 2

// We would have to add:
// 3+6+9+12+......+999=3*(1+2+3+4+...+333)
// For n=5 we would get:
// 5+10+15+...+995=5*(1+2+....+199)
//and remove multiples sum of 15 i.e (3*5)

int SumDivisibleBy(int n,int target);
int Solution(int a,int b,int c);

int main(){
  cout<<"Enter number 1\n";
  int a,b,c,target;
  cin>>a;
  cout<<"Enter number 2\n";
  cin>>b;
  cout<<"enter the target\n";
  cin>>target;
  target=target-1;

  cout<<"\nSolution :"<<" "<<Solution(SumDivisibleBy(a,target),SumDivisibleBy(b,target),SumDivisibleBy(a*b,target));
  cout<<endl;
}

int SumDivisibleBy(int n,int target){
  int x = target/n;
  return ((x*(x+1))*n)/2;
}

int Solution(int a,int b,int c){
  return (a+b-c);
}


// attempt 1;

// int solution(int number);
//
// int main() {
//   int n;
//   cout<<"Enter number below witch result is required\n";
//   cin>>n;
//   cout<<endl<<"answer "<<solution(n-1);
//
//   return 0;
// }
//
// int solution(int number){
//   int a= 0;
//   while (number!=0) {
//   if ((number % 3 == 0 ) || (number % 5 == 0)) {
//     a=a+number;
//   }
//   number--;
// }
//
//   return a;
// }
