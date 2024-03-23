#include<iostream>
using namespace std;


int  B_S_F(int arr[],int s,int e,int k)
{  
    if(s>e)
    {
        return -1;
    }

   int mid = s+(e-s)/2;

    if(arr[mid]==k)
    {
        if (mid == 0 || arr[mid - 1] != k) {
            return mid;  // First occurrence found
        } else {
            return B_S_F(arr, s, mid - 1, k);
        }

    }

    else if(k>arr[mid])
    {
        return B_S_F(arr, mid+1 , e, k);
    }
    else if(k<arr[mid])
    {
       return  B_S_F(arr, s , mid-1, k);
    }

return mid ;
}
int  B_S_L(int arr[],int s,int e,int k)
{  
    if(s>e)
    {
        return -1;
    }

    int mid = s+(e-s)/2;

    if(arr[mid]==k)
    {
        if (mid == e || arr[mid + 1] != k) {
            return mid;  // Last occurrence found
        } else {
            return B_S_L(arr, mid + 1, e, k);
        }

    }

    else if(k>arr[mid])
    {
        return B_S_L(arr, mid+1 , e, k);
    }
    else if(k<arr[mid])
    {
       return  B_S_L(arr, s , mid-1, k);
    }

return mid ;
}
int main(){
int arr[4]={1,2,4,4};
int  s=B_S_F(arr,0,3,4);
cout<<s<<" "<<endl;

int  r=B_S_L(arr,0,3,4);
cout<<r<<" "<<endl;
return 0;
}