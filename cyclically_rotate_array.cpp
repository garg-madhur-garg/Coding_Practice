void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void rotate(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        swap(arr[0], arr[i]);     //this is the concept
    }
}