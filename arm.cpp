#include <iostream>

using namespace std;


int main() {


  int a = 1; 



  while(a<= 1000)

  {

      int sum = 0;

      int temp = a;

      while(temp> 0)

      {

          int d = temp%10;

          sum = sum + (d*d*d);


          temp = temp/10;

      }

      if(sum == a)

      {

          cout<<a<<endl;

          a = a+1;

      }


      else

      {

          a = a+1;

          continue;

      }

  }

  return 0;

}
