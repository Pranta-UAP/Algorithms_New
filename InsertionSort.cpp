///................................................Code...................................................................
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int arr[MAX];
int main()
{
///.............................................Variable................................................................
    int n,element,j,i,k;
    scanf("%d",&n);
///.............................................Input in Array......................................................
    for( k=0; k<n; k++)
        scanf("%d",&arr[k]);
///............................................Sorting.................................................................
    for( i=0; i<n; i++)
    {

        element = arr[i];
        j=i;

        while(j>0 && arr[j-1]>element)
        {
            arr[j] = arr[j-1];
            j = j-1;
        }
        arr[j] = element;
    }
///.........................................................Output...................................................
    for(int k=0; k<n; k++)
        printf("%d ",arr[k]);
    printf("\n");
///.........................................................END........................................................

    return 0;
}
