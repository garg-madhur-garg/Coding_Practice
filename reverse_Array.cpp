//User function Template for C++

int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}
string reverseWord(string str){
    
  //Your code here
//   string str2 = str;
//   int len = str.length();
//   for(int i = 0; i < len; i++)
//   {
//       str2[i] = str[len- i - 1];
//   }
  
//   return str2;

    int len = str.length();
    for(int i = 0; i < len/2; i++)
    {
        swap(str[i], str[len - i - 1]);
    }
    
    return str;
}