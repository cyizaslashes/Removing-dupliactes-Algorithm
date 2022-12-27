#include<iostream>
/*    Names:Cyiza Mugabo Christian 
Github:https://github.com/cyizaslashes

  */
using namespace std;
char *Removeduplicate()
{
	char str[50];
    cout<<"Enter a string with duplate characters:";
   cin>>str;
   cout<<endl;
   int index=0;
   int n=sizeof(str)/sizeof(str[0]);
   for (int i=0;i<n;i++)
   {
        int j;
        for(j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
               break;
            }
        }
        if(j==i)
        {
            str[index++]=str[i];
        }
   }
  cout<<"String with removed duplicates:"<<str;
}
int main()
{
   
  Removeduplicate();
   return 0;
}
