#include<iostream>
#include<math.h>
using namespace std;
int jump(int arr[],int n,int k,int &count)
{
    count=0;
    int pos2 = sqrt(n);
    int pos1=0;
    while(k>arr[min(n,pos2)-1])
    {
        count++;
        pos1=pos2;
        pos2+=sqrt(n);
        if(pos1>=n)
            return -1;


    }
    for(int i=pos1;i<min(pos2,n);i++)
    {
        if(arr[i]>k)
            break;
        count++;
        if(arr[i]==k)
            return i;
    }
    return -1;
}
int main()
{
    int n,i,count=0;
    int j=0;
    cin>>n;
    int ar1[100];
    int ar2[100];
    for(i=0;i<n;i++)
    {
        int test_case,key;
        cin>>test_case;
        for(int k=0;k<test_case;k++)
        {
            cin>>ar1[k];
        }
        cin>>key;
        ar2[j++]=jump(ar1,test_case,key,count);
        ar2[j++]=count;
        }
        for(i=0;i<n*2;i=i+2)
        {
            if(ar2[i]!=-1)
            {
                cout<<"present"<<ar2[i+2]<<endl;
            }
            else{

               cout<<"not present"<<ar2[i+2]<<endl;

            }
        }
        return 0;
}
