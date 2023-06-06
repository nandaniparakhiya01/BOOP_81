#include<iostream>
using namespace std;

inline int sum(int a,int b )
{
	return a+b;
}
int main()
{
	int A,B;
	cout<<"Enter value of A :";
	cin>>A;
	cout<<"Enter value of B :";
	cin>>B;
	cout<<"Sum ="<<sum(A,B)<<endl;
	return 0;

}