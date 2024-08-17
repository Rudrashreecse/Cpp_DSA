#include<iostream>
using namespace std;
class Palindrome{
public:
    void isPalindrome(int num){
        int temp = num;
        int result = 0;
        while(temp){
            result = result*10 + temp%10;
            temp /= 10;
        }
        if(result == num) cout<<num<<" is palindrome"<<endl;
        else cout<<num<<" is not palindrome"<<endl;
    }
    void isPalindrome(string str){
        string s = str;
        int n = str.size();
        int i = 0,j = n-1;
        while(i<j)
        {
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
            i++;
            j--;
        }
        if(str == s) cout<<str<<" is palindrome"<<endl;
        else cout<<str<<" is not palindrome"<<endl;
    }
};
int main(){
    Palindrome Number;
    Palindrome String;
    cout<<"Enter the type : "<<endl;
    cout<<"1 : Number"<<endl;
    cout<<"2 : String"<<endl;
    int x;
    cin>>x;
    string s1;
    switch(x){
        case 1:
            int a;
            cout<<"Enter a number : ";
            cin>>a;
            Number.isPalindrome(a);
            break;
        case 2:
            cout<<"Enter a string : ";
            cin>>s1;
            Number.isPalindrome(s1);
            break;
        default:
            cout<<"Invalid"<<endl;
    }
    return 0;
}