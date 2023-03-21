// bubble sort
// #include <stdio.h>
// void bublesort(int a[],int n){
//     int temp;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
// }
// void insertionsort(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         int key=a[i];
//         int j=i-1;
//         while(j>=0 && a[j]>key){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=key;
//     }
// }

// void selectionsort(int a[],int n){
//     int small,temp;
//     for(int i=0;i<n-1;i++){
//         small=i;
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 small=j;
//                 temp=a[j];
//                 a[j]=a[i];
//                 a[i]=temp;
//                 for(int k=0;k<n;k++){
//                     printf("%d ",a[k]);
//                 }
//                 printf("\n");
//             }
//         }
//     }
// }
// void merge(int a[],int n, int l, int mid,int r){
// int n1=mid-l+1;
// int n2=r-mid;
// int arr1[n1];
// int arr2[n2];
// for(int i=0;i<n1;i++){
//     arr1[i]=a[l+i];
// }
// for(int i=0;i<n2;i++){
//     arr2[i]=a[mid+1+i];
// }
// int i=0,j=0,k=l;
// while(i<n1 && j<n2){
//     if(arr1[i]<arr2[j]){
//         a[k++]=arr1[i++];
//     }
//     else{
//         a[k++]=arr2[j++];
//     }
// }
// while(i<n1){
//     a[k++]=arr1[i++];
// }
// while(j<n2){
//     a[k++]=arr2[j++];
// }
// }
// void mergesort(int a[],int n ,int  l, int r){
//     int mid;
//     if(l<r){
//         mid=(l+r)/2;
//         mergesort(a,n,l,mid);
//         mergesort(a,n,mid+1,r);
//         merge(a,n,l,mid,r);
//     }
// }
// int partition(int a[], int n, int l ,int r){
//     int pivot=a[r],temp;
//     int i=l-1,j=l;
//     for(j=l;j<r;j++){
//         if(a[j]<pivot){
//             i++;
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//         }
//     }
//     temp=a[i+1];
//     a[i+1]=a[r];
//     a[r]=temp;
//     return i+1;
// }

// void quicksort(int a[],int n,int l, int r){
//     int p;
//     if(l<r){
//     p=partition(a,n,l,r);
//     quicksort(a,n,l,p-1);
//     quicksort(a,n,p+1,r);
//     }
// }


// void printarray(int a[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }

// int main(){
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
    // bublesort(arr,n);
    // printarray(arr,n);
//     // insertionsort(arr,n);
//     // printarray(arr,n);
//     // selectionsort(arr,n);
//     // mergesort(arr,n,0,n-1);
//     // printarray(arr,n);
//     quicksort(arr,n,0,n-1);
//     printarray(arr,n);
// return 0;
// }


// // #include <stdio.h>
// // int binarysearch(int a[],int l,int r,int val){
// //     int mid;
// //     if(r>=l){
// //         mid=(l+r)/2;
// //     if(a[mid]==val){
// //         return mid+1;
// //     }
// //     else if(a[mid]>val){
// //         return binarysearch(a,l,mid-1,val);
// //     }
// //     else{
// //         return binarysearch(a,mid+1,r,val);
// //     }
// //     }
// //     return -1;
// // }

// // int main(){
// //     int p=0,val;
// //     int a[]={20,40,50,60,70,80,100,120,230};
// //     scanf("%d",&val);
// //     p=binarysearch(a,0,8,val);
// //     printf("%d\n",p);
// //     if(p==-1){
// //         printf("Element not found");
// //     }
// //     else{
// //         printf("%d is found in %d position",val,p);
// //     }
// // return 0;
// // }


#include <stdio.h>  
void heapify(int a[], int n, int i)  
{  
    int largest = i;  
    int left = 2 * i + 1;  
    int right = 2 * i + 2;  
    if (left < n && a[left] > a[largest])  
        largest = left;  
    if (right < n && a[right] > a[largest])  
        largest = right;  
    if (largest != i) {  
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        heapify(a, n, largest);  
    }  
}  
void heapSort(int a[], int n)  
{  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(a, n, i);  
    for (int i = n - 1; i >= 0; i--) {  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heapify(a, i, 0);  
    }  
}  
void printArr(int arr[], int n)  
{  
    for (int i = 0; i < n; ++i)  
    {  
        printf("%d", arr[i]);  
        printf(" ");  
    }  
          
}  
int main()  
{  
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting array elements are - \n");  
    printArr(a, n);  
    heapSort(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
    return 0;  
}  
