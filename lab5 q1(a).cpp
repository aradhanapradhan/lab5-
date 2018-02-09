#include <iostream>
using namespace std;

class bubblesort
{
	public:

	
   void sort(int arr[], int n)
   {
   	
   	for(int j=0;j<n;j++)
   	{
   		for(int k=0;k<(n-j)-1;k++)
   		{
   			if(arr[k]>arr[k+1])
   			{
   			           int temp=arr[k];
   				arr[k]=arr[k+1];
   				arr[k+1]=temp;
   			}
   		}
   	}
  }
  
  void print(int arr[],int n)
  {
  	cout<<"the sorted list is"<<endl;
  	for(int i=0;i<n;i++)
  	{
  		cout<<arr[i]<<" ";
  	}
  }	
};
  
   	int main()
   	{
   	int arr[100]; int n,temp;
   	cout<<"enter the number of elements in the array"<<endl;
   	cin>>n;
   	cout<<"enter the elements of array"<<endl;
   	for(int i=0;i<n;i++)
   	{
   		cin>>arr[i];
   	}
   	   bubblesort b;
   	   b.sort(arr,n);
   	   b.print(arr,n);
   	}
   	
   		