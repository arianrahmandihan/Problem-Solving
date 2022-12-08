#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,len;
    cout<<"Enter the Array length: ";
      cin>>len;
      char arr2[30]={"abcccc"};
    int arr[len];
      cout<<"\n";
       cout<<"Enter the Number for array :";
    for(i=0; i<len; i++){
      cin>>arr[i];
     cin>> arr[0]='a';
     cin>> arr[1]='b';
     cin>> arr[2]='c';
    }

      for(i=0; i<len; i++){
      cout<<arr[i];
      cout<<("\n");
    }
getch();
if(arr[i]==arr2[j])
        {
            temp=i+1;
            while(arr[i]==arr2[j])
            {
                i++;
                j++;
            }

            if(arr2[j]=='\0')
            {
                cout<<"This is matched"<<temp;
                exit(0);
            }
            else
            {
                i=temp;
                temp=0;
            }



if(temp==0)
        cout<<"This is not matched"<<temp;;


    return 0;
}
