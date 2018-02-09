#include <iostream>
using namespace std;

class quicksort
{
    public:
    void partition(int a[],int l,int u)
    {
      int v,i,j,temp;
      v=a[l];
      i=l;
      j=u+1;
    
      do
      {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
   }

    void print(int a[],int l,int u)
    {
        int n;	
       cout<<"\nArray after sorting:";
    
       for(int i=0;i<n;i++)
       {
       	cout<<a[i]<<" ";
       }	
    }
 };   
    int main()
    {
      int a[50],n,i,l,u;
      cout<<"How many elements?"<<endl;
      cin>>n;
      cout<<"Enter array elements:";
    
      for(i=0;i<n;i++)
        cin>>a[i];
        
      quicksort q;
      q.partition(a,l,u);
      q.print(a,l,u);
      return 0;        
    }
