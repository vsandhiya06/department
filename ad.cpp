#include<iostream>
using namespace std;

int main()
{
	int A[]={1,2,7,4,1}, max=0;
	for(int i=0;i<5;i++){

		if(A[i] > max){
            max = A[i];
		}
	}
	cout << max;
}
