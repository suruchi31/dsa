#include<iostream>
using namespace std;
void swap(int *xp,int*yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
void bubble_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
		}
	}
}
int main()
{
	int arr[100],n;
	cout<<"Enter how many elements u want to enter into array b/w 1-100:";
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"array before sortning is"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i];
	bubble_sort(arr,n);
	cout<<"\n sorted array"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i];
	return 0;


}

