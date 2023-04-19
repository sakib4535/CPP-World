# include<iostream>
# include<string>
using namespace std;

int main(){
    string s;
    int count = 0;

    // Get value from user
    
    cout << "Enter a String: ";
    cin >> s;

    // Count the numbe rof vowels is s

    for(char c: s){
        bool isVowel = (c== 'a' || c== 'e' || c =='i' || c == 'j' || c == 'u');
        if(isVowel){
            count ++;
        }
    }

    cout << "The number of Vowels in: " << s << " is " << count << "." << endl;

    return 0;
}
