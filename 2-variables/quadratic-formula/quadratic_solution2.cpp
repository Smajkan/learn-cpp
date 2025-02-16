#include <iostream>
#include <cmath>

int main() {
  // x = (-b+-sqrt(b^2-4ac) / 2a)
  //Declaring variables: a,b,c (decimal nums)
  double a,b,c;

  //Prompting user
  //a variable
  std::cout<<"Enter a: ";
  std::cin>>a;
  //b variable
  std::cout<<"Enter b: ";
  std::cin>>b;
  //c variable
  std::cout<<"Enter c: ";
  std::cin>>c;
  
  //Roots declaration:
  double root1, root2;
  
  //Doing calculations earlier, not to complicate in the final formula
  double double_b = b*b;
  double ac_calc = 4*(a*c);
  double to_be_squared = std::sqrt(double_b - ac_calc);

  //calculation for + sign
  root1 = (-b + to_be_squared) / (2*a);
  //Calculation for - sign
  root2 = (-b - to_be_squared) / (2*a);
  std::cout<<"Root 1 is "<<root1<<"\n";
  std::cout<<"Root 2 is "<<root2<<"\n";

  return 0;
}
