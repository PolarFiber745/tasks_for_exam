#include <iostream>
#include <cstdlib>

using namespace std;

int chet(int *swap1, int n)
{
    int visited[n];
    int i,j,len = 0, s = 0;
    for(i=0; i<n; i++)
        visited[i]=0;
    for(i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            visited[i] = 1;
            len++;
            j = swap1[i]-1;
            while(j != i)
            {
                visited[j] = 1;
                len++;
                j = swap1[j]-1;
            }
            s=(len%2)+1+s;
            len=0;
        }
    }
    return s;
}

int main()
{
	int n;
	cout<<"enter the length of array: ";
	cin >> n;
	int* swap1=(int*)malloc(n);
	cout << "enter your array:\n";
	for(int i=0;i<n;i++)
		cin >> swap1[i];
    int s = chet(swap1, n);
    if(s%2==0)
        cout << "even";
    else
        cout << "odd" ;
    free(swap1);
    return 0;
}
