#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
   int n;
   cin >> n;
   vector<int> ans;

   while(--n>=0)
   {
      int a,i=0,sum=0;
      cin >> a;
      while(++i<=(int)sqrt(a))
      {
         int b=a/i;
         sum=(a==b*i?sum+i+b:sum);
      }
      if(a*2==sum)
         ans.push_back(sum-a);
   }

   for(int i=0;i<ans.size();cout<<ans.at(i)<<((i!=ans.size()-1)?" ":""),i++);

   return 0;
}
