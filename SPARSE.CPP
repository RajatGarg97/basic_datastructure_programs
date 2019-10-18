
 //to use array making use of either char or string

#include<bits/stdc++.h>
struct sparse{
int col;
int row;
int val;
} ;

int main()
{
    int a[3][3],size=0,i,j,k;
    
    for(i=0;i<3;i++)
    {
     for( j=0;j<3;j++) {
    scanf("%d",&a[i][j]);

     }


    }
    printf("Sparse Matrix\n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      printf("%d\t",a[i][j]);

   }
   printf("\n");
   }
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++){

     if(a[i][j]!=0)
     size++;
	}
	}
     sparse c[10];
    k=0;
     for(i=0;i<3;i++)
     {
     for(j=0;j<3;j++)
     {
      if(a[i][j]!=0) {
      c[k].row=i;
      c[k].col=j;
      c[k].val=a[i][j];
      k++;
      }

     }
      }
     printf("row \t col \t values\n");

    for(k=0;k<size;k++){

    printf("%d\t",c[k].row);
    printf("%d\t",c[k].col);
    printf("%d\n",c[k].val);


    }


    return 0;



}


