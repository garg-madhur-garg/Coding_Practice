class Solution
{
    public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    void sort012(int a[], int n)
    {
    //     int c0 = 0;
    //     int c1 = 0;
    //     int c2 = 0;
        
    //     for(int i = 0; i < n; i++){
    //         if(a[i] == 0){
    //             c0++;
    //         }
    //         else if(a[i] == 1){
    //             c1++;
    //         }
    //         else{
    //             c2++;
    //         }
    //     }
        
    //     // for(int i = 0; i < c0; i++){
    //     //     a[i] = 0;
    //     // }
    //     // for(int i = 0; i < c1; i++){
    //     //     a[i+c0] = 1;
    //     // }
    //     // for(int i = 0; i < c2; i++){
    //     //     a[i + c0 + c1] = 2;
    //     // }
    //     int cnt = 0;
        
    //     for(int i = 0; i < c0; i++){
    //         a[cnt] = 0;
    //         cnt++;
    //     }
        
    //     for(int i = 0; i < c1; i++){
    //         a[cnt] = 1;
    //         cnt++;
    //     }
        
    //     for(int i = 0; i < c2; i++){
    //         a[cnt] = 2;
    //         cnt++;
    //     }
    // }
    
    int l = 0;
    int m = 0;
    int h = n-1;
    while(m <= h){
        if(a[m] == 0){
            swap(a[m], a[l]);
            m++;
            l++;
        }
        else if(a[m] == 1){
            m++;
        }
        else{
            swap(a[m], a[h]);
            h--;
        }
    }
}
    
};