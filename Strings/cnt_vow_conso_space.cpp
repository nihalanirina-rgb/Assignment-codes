#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<cctype>
using namespace std;
//COUNT VOWELS AND CONSONANTS
int countVowel_Conso(string s){
   int cntV=0;
   int cntC=0;
     for(char c:s){
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
         cntV++;
        }

} cntC=s.size()-cntV;
return cntV;
return cntC;
}



int main(){
   string s="nihalani";
   int ans=countVowel_Conso(s);
   cout<<ans<<endl;

}