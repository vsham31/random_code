#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={10,0,3,4,0,22},count=0;
    
    for(int i=0;i<6;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
        
    }
    
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<",";
    }
        
    
    return 0;
}
