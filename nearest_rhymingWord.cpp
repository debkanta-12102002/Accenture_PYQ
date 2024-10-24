//given a string and an input string. from that word that rhymes the most with the given word and if two wors rhymes the most then the word with less character count 
//4
//gender blender blunder under
//thunder
#include <bits/stdc++.h>

using namespace std;
int longestCommonSuffix(const string& word1, const string& word2){
    int i = word1.size() - 1;
    int j = word2.size() - 1;
    int length = 0;

    // Compare the words from the end
    while (i >= 0 && j >= 0 && word1[i] == word2[j]) {
        length++;
        i--;
        j--;
    }

    return length;
}

string findBestRhymingWord(const vector<string>& arr, const string& input){
    string ans="";
    int max_length=0;
    for(auto word:arr){
        int current_length=longestCommonSuffix(word,input);
        if(current_length>max_length || current_length==max_length && word.size()<ans.size()){
            ans=word;
            max_length=current_length;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
    
    string input;
    cin>>input;

    string result = findBestRhymingWord(arr, input);

    cout<< result << endl;

    return 0;
}