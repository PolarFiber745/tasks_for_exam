#include <iostream>
#include <cstdlib>

using namespace std;

int* multiplication(int *swap1, int *swap2, int* result, int n)
{
    int i=0;
	for(i=0;i<n;i++)
		result[i]=swap2[swap1[i] - 1];
	return swap1;
}

int* reversing(int *swap1, int *revers, int n)
{
    int i=0;
	for(i=0;i<n;i++)
		revers[swap1[i]-1]=i+1;
	return revers;
}

int main()
{
	int n;
	cout<<"enter the length of the arrays: ";
	cin >> n;
	int* swap1=(int*)malloc(n);
	int* swap2=(int*)malloc(n);
	int* result=(int*)malloc(n);
	int* revers=(int*)malloc(n);
	cout << "First array:\n";
	for(int i=0;i<n;i++)
		cin >> swap1[i];
	cout << "Second array:\n";
	for(int i=0;i<n;i++)
		cin >> swap2[i];
	multiplication(swap1, swap2, result, n);
	reversing(swap1, revers, n);
	cout << "multiplication:";
	for(int i=0;i<n;i++)
		cout << result[i] << " ";
	cout << "\nreversing:";
	for(int i=0;i<n;i++)
		cout << revers[i] << " ";
    free(swap1);
    free(swap2);
    free(result);
    free(revers);
    return 0;
}
