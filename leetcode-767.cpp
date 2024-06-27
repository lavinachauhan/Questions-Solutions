//week ->5 Assignment
// Assignment Question number-> 06

class Solution {
public:
    string reorganizeString(string s) {
        
        int hash[26]={0};

        //count the occurence of characters of s
        for(int i=0;i<s.size();i++) 
        {
            // s[i]-'a' implicit typecasting e.g s[i]=c
            // 'c'-'a'=99-97 -> 2
            // 2 represents the index number of hash array
            hash[s[i]-'a']+=1;  
        }

        //find the maximum occured character and its maximum number of occurence
        char max_occ_ch;
        int max_occ=INT_MIN;
        for(int i=0;i<26;i++)
        {
            if(hash[i]>max_occ)
            {
                max_occ=hash[i];
                max_occ_ch=i+'a';
                //e.g -> i=1 ,a=97 -> 1+97=98 -> implicit typecasting make 98 = b
                //that means max_occ_ch='b';
            }
        }

        //initialise ith indexes with max_occ_ch
        int index=0;
        while(max_occ > 0 && index <s.size())
        {
            s[index]=max_occ_ch;
            max_occ--;
            index+=2;
        }
        if(max_occ !=0)
        {
            return "";
        }
        else{
            hash[max_occ_ch -'a']=0;
        }

        //initialise remaining characters to ith indexes
        for(int i=0;i<26;i++)
        {
            while(hash[i]>0)
            {
                index=index >= s.size()? 1:index;
                s[index]=i+'a';
                hash[i]-=1;
                index=index+2;
            }
        }
        return s;
    }
};