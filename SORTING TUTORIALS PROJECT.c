#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
void bubble()
{
    int k,i,j,n,temp,a[20];
    printf("ENTER THE NUMBER OF ELEMENTS\t\t");
    scanf("%d",&n);
    printf("\nENTER THE NUMBERS\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("ENTER THE %d ELEMENT\t",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("THE PASSES ARE:\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;

                }
          for(k=0;k<n;k++)
          {printf("%d  ",a[k]);
           Sleep(500);
          }
          printf("\n");
        }
    }
    printf("THE SORTED ARRAY IS : \n\n");
    for(i=0;i<n;i++)
       {

        printf("%d,",a[i]);
       }



}

void insertion()
{
    int k,i,j,n,temp,a[20],l;
    printf("ENTER THE NUMBER OF ELEMENTS\t\t");
    scanf("%d",&n);
    printf("\nENTER THE NUMBERS\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("ENTER THE %d ELEMENT\t",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("THE PASSES ARE:\n\n");
    for(i=1;i<n;i++)
    {
        k=a[i];

        for(j=i-1;(j>=0)&&(k<a[j]);j--)
            {a[j+1]=a[j];
            }
        a[j+1]=k;

        for(l=0;l<n;l++)
          {printf("%d  ",a[l]);
            Sleep(500);
          }
          printf("\n");


    }
    printf("THE SORTED ARRAY IS : \n\n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);



}

void selection()
{
    int k,i,j,n,temp,a[20];
    printf("ENTER THE NUMBER OF ELEMENTS\t\t");
    scanf("%d",&n);
    printf("\nENTER THE NUMBERS\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("ENTER THE %d ELEMENT\t",i+1);
        scanf("%d",&a[i]);
    }
     printf("\n\n");
    printf("THE PASSES ARE:\n\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;


            }

        }
        for(k=0;k<n;k++)
          {printf("%d  ",a[k]);
             Sleep(500);
          }
          printf("\n");

    }
    printf("THE SORTED ARRAY IS : \n\n");
    for(i=0;i<n;i++)
        printf("%d,",a[i]);



}

void shell()
{
 int a[30];
 int i,j,k,l,tmp,n;
 printf("ENTER THE NUMBER OF ELEMENTS\t\t");
 scanf("%d", &n);
 printf("ENTER THE NUMBERS\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("ENTER THE %d ELEMENT\t",i+1);
        scanf("%d",&a[i]);
    }
     printf("\n\n");
    printf("THE PASSES ARE:\n\n");
 for(i=n/2; i>0; i=i/2)
 {
   for(j=i; j<n; j++)
   {
     for(k=j-i; k>=0; k=k-i)
     {
        if(a[k+i]>=a[k])
            break;
        else
        {
            tmp=a[k];
            a[k]=a[k+i];
            a[k+i]=tmp;

        }
         for(l=0;l<n;l++)
          {printf("%d  ",a[l]);
            Sleep(500);
          }
            printf("\n");
     }
   }
 }
 printf("THE SORTED ARRAY IS : \n\n");
 for(k=0; k<n; k++)
     printf("%d\t",a[k]);

}
void quick()
{
    int i,n,x[20];
    printf("ENTER THE NUMBER OF ELEMENTS\t\t");
    scanf("%d",&n);

   printf("\nENTER THE NUMBERS\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("ENTER THE %d ELEMENT\t",i+1);
        scanf("%d",&x[i]);
    }
     printf("\n\n");
    printf("THE PASSES ARE:\n\n");
    quicksort(x,0,n-1,n);

    printf("THE SORTED ARRAY IS : \n\n");
    for(i=0;i<n;i++)
    printf("%d  ",x[i]);



}
int partition(int x[],int lb,int ub)
{
    int up,down,pivot,a,temp,k;
    down=lb;
    up=ub;
    a=x[lb];
    while(down<up)
    {
        while(x[down]<=a)
        {
            down++;

        }
        while(x[up]>a)
        {
            up--;

        }
        if(down<up)
        {
            temp=x[down];
            x[down]=x[up];
            x[up]=temp;
        }



    }
    x[lb]=x[up];
    x[up]=a;
    pivot=up;



    return pivot;

}
void quicksort(int x[],int lb,int ub,int n)
{
    int j,k;
    if(lb<ub)
    {
        j=partition(x,lb,ub);


         for(k=0;k<n;k++)
            {printf("%d ",x[k]);
             Sleep(500);
            }
        printf("\n");


        quicksort(x,lb,j-1,n);

        quicksort(x,j+1,ub,n);

    }

}

void mergesort()
{
 int arr[30];
 int i,size;
 printf("ENTER THE NUMBER OF ELEMENTS\t\t");
 scanf("%d",&size);
 printf("\nENTER THE NUMBERS\n\n\n");
 for(i=0; i<size; i++)
 {
    printf("ENTER THE %d ELEMENT\t",i+1);
    scanf("%d",&arr[i]);
 }
  printf("\n\n");
    printf("THE PASSES ARE:\n\n");
 part(arr,0,size-1,size);
 printf("THE SORTED ARRAY IS : \n\n");

    for(i=0;i<size;i++)
       {

        printf("%d,",arr[i]);
       }

}

void part(int arr[],int min,int max,int size)
{
 int mid,k;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid,size);
   part(arr,mid+1,max,size);
   merge(arr,min,mid,max);
     for(k=0;k<size;k++)
   {printf("%d ",arr[k]);
    Sleep(500);
   }
   printf("\n");


 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m;
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}

void main()

{

    int cont,choice;
    printf("\n\n\n\t\t\t\tSORTING TUTORIALS\n\n\n\n");
    Sleep(2000);
    printf("DEFINITION\n\n");
    Sleep(1000);
    printf("Sorting is a process that organizes a collection of data into either ascending  or descending order.\n\n");
    Sleep(500);
    printf("There are many sorting algorithms, such as:\n\n");
    printf("1. BUBBLE SORT\n\n");
    printf("2. INSERTION SORT\n\n");
    printf("3. SELECTION SORT\n\n");
    printf("4. SHELL SORT\n\n");
    printf("5. QUICK SORT\n\n");
    printf("6. MERGE SORT\n\n");
    Sleep(2000);
    printf("WHICH TYPE OF SORTING DO YOU WANT TO LEARN\n\n");



    printf("ENTER YOUR CHOICE\t\t");
    scanf("%d",&choice);
    printf("ENTER YOUR CHOICE\n");
    switch(choice)
    {
        case 1:
            system("cls");
            printf("\t\t\tBUBBLE SORT\n\n\n");
            Sleep(500);
            printf("*In this method, to arrange elements in ascending order, to begin with, the 0th element is compared with the 1st element. \n\n");
            printf("*If it is found to be greater than the 1st element then they are interchanged. Then the 1st element is compared with the 2nd element, if it is found to be greater, then they are interchanged.\n\n");
            printf("*In the same way all the elements are compared with their next element and are interchanged if required.\n\n");
            printf("*As a result, after all the iterations the list becomes a sorted list. \n\n");



            bubble();
            break;

        case 2:
            system("cls");
            printf("\t\t\tINSERTION SORT\n\n\n");
            printf("*Insertion sort is a simple sorting algorithm that is appropriate for small inputs. \n\n");
            printf("*The list is divided into two parts: sorted and unsorted. \n\n");
            printf("*In each pass, the first element of the unsorted part is picked up, transferred to the sorted sub list, and inserted at the appropriate place.\n\n");
            printf("*A list of n elements will take at most n-1 passes to sort the data. \n\n");
            Sleep(500);
            insertion();
            break;

        case 3:
            system("cls");
            printf("\t\t\tSELECTION SORT\n\n\n");
            Sleep(500);
            printf("*This is the simplest method of sorting.\n\n");
            printf("*In this method, to sort the data in ascending order , the 0th element is compared with all other elements. If the 0th element is found to be greater than the compared element then they are interchanged .\n\n");
            printf("*So, after the first iteration , the smallest element is placed at the 0th position same procedure is repeated for the first element and so on.\n\n");
            printf("*A list of n elements requires n-1 passes to completely rearrange the data.\n\n");

            selection();
            break;

        case 4:
            system("cls");
            printf("\t\t\tSHELL SORT\n\n\n");
            Sleep(500);
            printf("*This type of sorting method makes use of the intrinsic strengths of Insertion sort. \n\n");
            printf("*Insertion sort is fastest when: \n\n");
            printf("-->The array is nearly sorted.\n\n");
            printf("-->The array contains only a small number of data items.\n\n");
             printf("Shell sort works well because:\n\n");
            printf("-->It always deals with a small number of elements.\n\n");
             printf("-->Elements are moved a long way through array with each swap and this leaves it more nearly sorted.\n\n");
            shell();
            break;

        case 5:
            system("cls");
            printf("\t\t\tQUICK SORT\n\n\n");
            Sleep(500);
            printf("*Quick sort is based on the divide-and-conquer manner.\n\n");
            printf("*It works as follows:\n\n-->First, it partitions an array into two parts.\n\n-->Then, it sorts the parts independently.\n\n-->Finally, it combines the sorted subsequences by a simple concatenation.\n\n");
            printf("*To partition the list, we first choose some element from the list for which we hope about half the elements will come before and half after. Call this element the pivot.\n\n");
            printf("*Then we partition the elements so that all those with values less than the pivot come in one sublist and all those with greater values come in another.\n\n");
            quick();
            break;

        case 6:
            system("cls");
            printf("\t\t\tMERGE SORT\n\n\n");
            Sleep(500);
            printf("*Mergesort algorithm is one important divide-and-conquer sorting algorithms.\n\n");
            printf("*It is a recursive algorithm which :\n\n");
            printf("-->Divides the list into halves, \n\n");
            printf("-->Sort each halve separately, and \n\n");
            printf("-->Then merge the sorted halves into one sorted array.\n\n");
            printf("*Merge sort isn’t an “in place” sort—it requires extra storage. However, it doesn’t require this storage “all at once”.\n\n");
            mergesort();
            break;


    }


}
