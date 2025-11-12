#include<iostream>
using namespace std;
int main (){
   int n,i;
   cout<<"enter the no. :"<<endl;
   cin>>n;
   i=1;
   while (i<=n){
      if (n%i==0){
        int j=1,k=0;
        while (j<=i){
            if (i%j==0)
                 k++;
                 j++;
        }
        if (k==2)
        cout<<i<<"is a prime factor of"<<n<<endl;
      }     
      i++;
   }
    return 0;
}