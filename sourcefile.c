#include<stdio.h>

int rowcheck(int arr[9][9]) {
    int i, j, k;
   
    for (i = 0; i < 9; i++) {
         int freq[10] = {0};
        for (j = 0; j < 9; j++) {
            freq[arr[i][j]]++;
        }
        
        for (k = 1; k <= 9; k++) {
            if (freq[k] != 1) {
                printf("the value %d came %d times in row:%d\n", k, freq[k], i + 1);
                return 0;
            }
        }
    }
    return 1;
}

int colcheck(int arr[9][9])
{
    int i,j,k;
    for(i=0;i<9;i++)
    {
        int freq[10]={0};
        for(j=0;j<9;j++)
        {
            freq[arr[j][i]]++;
        }
    
        for(k=1;k<=9;k++)
        {
            if(freq[k]!=1)
            {
                printf("the value %d came %d times in col:%d\n",k,freq[k],i+1);
                return 0;
            }
        }
    }
    return 1;
}

int boxcheck(int arr[9][9])
{
    int i,j,k;
    int x,y,count=0;
    for(x=0;x<9;x+=3)
    {     
        for(y=0;y<9;y+=3)
        {       
            int freq[10]={0};
            for(i=x;i<x+3;i++)
            {
                for(j=y;j<y+3;j++)
                {
                    freq[arr[i][j]]++;
                }
            }
            count++;
            for(k=1;k<=9;k++)
            {
                if(freq[k]!=1)
                {
                    printf("the value %d came %d times in box:%d\n",k,freq[k],count);
                    return 0;
                }
            }
        } 
    }
    return 1;           
}

int main()
{
    int arr[9][9] = 
    {
    {5, 3, 4, 6, 7, 8, 9, 1, 2},
    {6, 7, 2, 1, 9, 5, 3, 4, 8},
    {1, 9, 8, 3, 4, 2, 5, 6, 7},
    {8, 5, 9, 7, 6, 1, 4, 2, 3},
    {4, 2, 6, 8, 5, 3, 7, 9, 1},
    {7, 1, 3, 9, 2, 4, 8, 5, 6},
    {9, 6, 1, 5, 3, 7, 2, 8, 4},
    {2, 8, 7, 4, 1, 9, 6, 3, 5},
    {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };

    if(rowcheck(arr)==1 && colcheck(arr)==1 && boxcheck(arr)==1)
    {
        printf("success");
    }
    else
    {
        printf("failed");
    }
}
