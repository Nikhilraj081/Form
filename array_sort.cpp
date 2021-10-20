/*
* We've been given an input array that should be sorted in ascending order.
* We begin with the first element and the i=0 index, and if the element at 
  i+1 is greater than the first, we swap the elements at index I and i+1.
  If none of the above applies, no swapping will take place.
* The value of " I " is now incremented, and the previous two steps
  are repeated until the array is exhausted.
* The last index will be ignored because it has already been sorted.
* The array's largest element will now be at the last index.
* We'll now set i=0 once more and repeat the steps above, which will 
  eventually place second largest in second last place in the array. 
* The array's last two indexes are now sorted.

*/
#include<iostream>
using namespace std;
void algorithm(int arr[20],int size)
{

	cout<<"sorted array:"<<"\n";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[]={83,1,45,95,45,52,11,47,0,45,67,82};
	int size=sizeof(arr)/sizeof(arr[0]);
	algorithm(arr,size);
}
