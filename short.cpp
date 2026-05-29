// Bubble Sort
// in C


#include <stdio.h>
int main(){
    int n,a[100],t;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }

    for(int i=0;i<n;i++) printf("%d ",a[i]);
}


Bubble Sort in CPP

#include <stdio.h>
int main(){
    int n,a[100],t;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }

    for(int i=0;i<n;i++) printf("%d ",a[i]);
}


Selection Sort in C 
#include <stdio.h>
int main(){
    int n,a[100],i,j,min,t;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min]) min=j;
        t=a[i]; a[i]=a[min]; a[min]=t;
    }

    for(i=0;i<n;i++) printf("%d ",a[i]);
}


Selection Sort in CPP 

#include <iostream>
using namespace std;
int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min]) min=j;
        swap(a[i],a[min]);
    }

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

Insertion Sort in C 

#include <stdio.h>
int main(){
    int n,a[100],i,j,key;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    for(i=0;i<n;i++) printf("%d ",a[i]);
}

Insertion Sort in CPP 

#include <iostream>
using namespace std;
int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=1;i<n;i++){
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

Merge Sort (Short C++)

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

Quick Sort in  (C)

#include <stdio.h>

void quick(int a[],int l,int h){
    if(l>=h) return;
    int i=l,j=h,p=a[l],t;
    while(i<j){
        while(a[i]<=p&&i<h) i++;
        while(a[j]>p) j--;
        if(i<j){t=a[i];a[i]=a[j];a[j]=t;}
    }
    t=a[l];a[l]=a[j];a[j]=t;
    q(a,l,j-1);
    q(a,j+1,h);
}

int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    quick(a,0,n-1);

    for(int i=0;i<n;i++) printf("%d ",a[i]);
}


Heap Sort (C++)

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    make_heap(a,a+n);
    sort_heap(a,a+n);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}


| Sorting   | Best       | Average    | Worst      |
| --------- | ---------- | ---------- | ---------- |
| Bubble    | O(n)       | O(n²)      | O(n²)      |
| Selection | O(n²)      | O(n²)      | O(n²)      |
| Insertion | O(n)       | O(n²)      | O(n²)      |
| Merge     | O(n log n) | O(n log n) | O(n log n) |
| Quick     | O(n log n) | O(n log n) | O(n²)      |
| Heap      | O(n log n) | O(n log n) | O(n log n) |
