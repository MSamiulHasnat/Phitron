#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i;
  int n;
  int ar[n];
  int x,v;
  
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
    scanf("%d ",&ar[i]);
  }
  
  scanf("%d %d",&x,&v);
  
  ar[x]=v;
  
  for(i=n-1;i>=0;i=i-1)
    {
      printf("%d ",ar[i]);
    }
    
  return 0;
}




// #include <stdio.h>

// int main(){
//     //write your code here
//     int n;
//     scanf("%d", &n);

//     int array[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &array[i]);
//     }
    
//     int x, v;
//     scanf("%d %d ", &x, &v);
    
//     array[x] = v;

//     for(int i = n-1; i >= 0; i--){
//         printf("%d ", array[i]);
//     }
// }