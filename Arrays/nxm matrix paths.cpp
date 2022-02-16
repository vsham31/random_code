//only applicable to traverse down and right side.

#include <bits/stdc++.h>

using namespace std;

int nxm_mat(int r, int c)
{
    if(r==1||c==1)
    return 1;
    
    return nxm_mat(r-1,c)+nxm_mat(r,c-1);
}


int main()
{
    cout<<nxm_mat(2,2);

    return 0;
}
