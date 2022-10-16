#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp, mn[3];
    cin>>n;
    for(int i=0;i<n;i)
    {
        int value;
        cin>>value;
        if(i<3)
        {
            mn[i]=value;
        }
        else
        {
            int pos=0;
            for(int j=0;j<n;j++)
            {
                if(mn[pos]<mn[j])
                {
                    mn[pos]=j;
                }
            }
        }
        if(value<mn[pos])
            {
                mn[pos]=value;
            }
        }


    }


    system("pause");
    return 0;
}

