#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector<char> ch = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
        vector<string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        string temp = "";
        
        
        for(int i=0;i<words.size();i++)
        {
            for(auto x : words[i])
            {
                auto it = find(ch.begin(),ch.end(),x);
                int index = distance(ch.begin(),it);

                temp += code[index];	
            }
            
            s.insert(temp);
            temp = "";
            
        }
        
        return s.size();
        
    }
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif	
	
	Solution H;
	vector<string> words = {"gin", "zen", "gig", "msg"};

	cout<<H.uniqueMorseRepresentations(words);

	return 0;
}