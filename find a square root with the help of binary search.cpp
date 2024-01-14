#include<iostream>
using namespace std;

int sqrroot_integer(int n)
{
    int s=0;
    int e=n;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while (s<=e)
    {
        int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        if(square>n)
        {
            e=mid-1;
        }
        else if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
         mid=s+(e-s)/2;

    }
    return ans;
}
 double  precise_squareroot(int precise,int tempSol,int n)
 {
   double  count=1;
   double ans=tempSol;
    for(int i=0;i<precise;i++)
    {
        count=count/10;
        for(double j=tempSol;j*j<n;j=j+count)
        {
            ans=j;
        }
    }
    return ans;
 }

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int tempSol=sqrroot_integer(n);
   cout<<"ANSWER IS " <<precise_squareroot(3,tempSol,n);
return 0;
}