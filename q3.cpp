#include<iostream>
using namespace std;
int main()
{
        string str;
        int len,i,count=0;
 
        cout<<"Enter the string: ";
        getline(cin,str);
 
        for(i=0;i<str[0]!='\0';i++)
         {
                if(str[i]==' ')
                  {
                  count++;
                  }
         }
 		cout<<" The number of spaces in the string is: "<<count;
 		return 0;
}