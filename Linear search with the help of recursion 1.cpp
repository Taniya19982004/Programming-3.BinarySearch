#include<iostream>
using namespace std;

bool L_S(int arr[],int size,int k)
{
    if(size==0)
    return false ;
        if (arr[0]==k)
        {
            return true;
        }
   return  L_S(arr+1,size-1,k);

   
}
int main(){
int arr[4]={4,5,1,2};
int s=L_S(arr,4,9);
cout<<s<<" ";
return 0;
}