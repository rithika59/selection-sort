#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n;
	int *p;

	cout<<"Enter the size of array: \n";
	cin>>n;

	p = new int[n];
	cout<<"Enter the array elements to be sorted. \n";
	for(int i =0; i<n ;++i)
	{
	cin>>p[i];
	}

	for(int i=0; i<n; ++i)
	{
		for(int j=i; j<n; ++j)
		{
			if(p[i]>p[j])
			{
				swap((p+i),(p+j));
			}
		}
	}
	
	cout<<"sorted array is : \n";
	for(int i =0; i<n; ++i)
	{
		cout<<p[i]<<" ";
	}

	cout<<endl;

	return 0;
}
