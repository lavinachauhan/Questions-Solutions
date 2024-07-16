
int sherlockAndAnagrams(string s) {
    
    int count_of_pairs=0;
    unordered_map<string,int> anagramatic_pairs;
    
    
    int i=0;
    while(i<s.size())
    {
        int j=1;
        while(j<=s.size()-i)
        {
            string substring=s.substr(i,j);
            sort(substring.begin(),substring.end());
            anagramatic_pairs[substring]++;
            j++;
        }
        i++;
    }
    
    for(auto i:anagramatic_pairs)
    {
        int count=i.second;
        if(count>1)
        {
            count_of_pairs+=(count*(count-1)/2);
        }
    }
    
    return count_of_pairs;
}
