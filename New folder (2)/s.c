#include <stdio.h>
/*
int main()
{

    int n,i,j,min;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

int main() {

int n,i,j;
scanf("%d", &n);
int len = 2*n-1;
int min1,min2,min;
  // Complete the code to print the pattern.
  // for rows
  for ( i=1; i <=len; i++) {
      // for col
      for ( j=1; j<=len; j++) {
        // min diff btn vertical sides
        min1 = i<=len-i ? i -1 : len-i;
        // min diff btn horizontal sides
        min2 = j<=len-j ? j -1 : len-j;
        // min diff btn vertical & horizontal sides
        min = min1<=min2 ? min1 : min2;
        // print
        printf("%d ",n-min);
      }
      printf("\n");
  }
return 0;
}*/

/*
int i,j,n;
int a[2*n-1][2*n-1];
scanf("%d",&n);

    //FILLING OUT ARRAY LAYER BY LAYER

for(i=0;i<n;i++)
{
    for(j=i;j<2*n-1-i;j++)
    {
        a[i][j]=n-i;                    //filling out the top row
        a[2*n-2-i][j]=n-i;         //filling out the bottom row
        a[j][i]=n-i;                    //filling out the left column
                    a[j][2*n-2-i]=n-i;         //filling out the right column
    }
}

    // PRINTING OUT THE ARRAY

for(i=0;i<2*n-1;i++)
{
    for(j=0;j<2*n-1;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}*/
int main()
{

    int n,i,j;
    int array[500];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=n;i>0;i--)
    {
        j=array[i];
        array[i]=array[i-1];
        array[i-1]=j;
        printf("%d",array[i]);
    }
}

