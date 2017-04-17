#include<stdio.h>
#include<iostream>
#include <sstream>
#include <ctype.h>
#include <string.h>
#include<typeinfo>
#include<vector>
#include <stdlib.h>
#include<string>
using namespace std;
class Palindrome{
  char* checkforpal;
public:
  Palindrome(char* x): checkforpal(x){}
  bool palchecker()
  {
    printf("%s\n", checkforpal);
    printf("Checking for changes");
    bool ispalindrome=true;
    int i=0;
    while(i<(strlen(checkforpal)))
      {
	if(checkforpal[i]!=checkforpal[(strlen(checkforpal)-1)-i])
          {

            ispalindrome=false;
            break;
          }
        i++;
      }
    return ispalindrome;
  }

} ;

int main(){
  char *whatschecked=(char *)malloc(200);

  cout<<"Enter a sentence";
  //fgets(whatschecked, 200, stdin);                                          

  scanf("[^\n]s", whatschecked);
  Palindrome x(whatschecked);
  cout<<x.palchecker();
  return 0;
}
