bubbleSort

// bubble sho

void bubbleSort(int a[],int n){
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
			// swap(&a[j]),&a[j+1]);
			int temp =a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}




int binarySearch(int a[],int low, int high, int key){
	while(low<=high){
		int mid =(low+high)/2;
		if(a[mid] == key)
			return mid;
			
		if(a[mid]<key)
			low = mid+1;
		else
			high = mid-1;
	}
	return -1;
}

