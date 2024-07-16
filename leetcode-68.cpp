class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> ans;
        vector<string> currentline;
        int TotalCharactersInCurrentLine = 0;

        for(int i = 0; i < words.size(); i++)
        {
            string currentword = words[i];
            int SpaceNeeded = currentline.size();


            if(TotalCharactersInCurrentLine + SpaceNeeded + currentword.size() > maxWidth)
            {
                int extraSpace = maxWidth - TotalCharactersInCurrentLine;
                int spaceInBetween = extraSpace / max(1, (int)currentline.size() -1);
                int remainSpace = extraSpace % max(1,(int)currentline.size() -1); 

                //fully justified
                for(int i = 0; i < currentline.size()-1; i++)
                {
                    for(int s=0; s < spaceInBetween; s++)
                    {
                        currentline[i] +=' ';
                    }

                    if(remainSpace > 0)
                    {
                        currentline[i] +=' ';
                    }

                    remainSpace--;
                }
                //left justified
                if(currentline.size() == 1)
                {
                    while(extraSpace--)
                    {
                        currentline[0] += ' ';
                    }
                }
                string final="";

                for(auto wordswithspaces:currentline)
                {
                    final += wordswithspaces;
                }

                ans.push_back(final);
                
                currentline.clear();
                TotalCharactersInCurrentLine = 0;
            }

            currentline.push_back(currentword);
            TotalCharactersInCurrentLine += currentword.size();
        }

        string final="";
        for(auto lastlinewords:currentline)
        {
            final += lastlinewords + ' ';
        }

        final.pop_back();

        int spaces = maxWidth - final.size();

        while(spaces--)
        {
            final += ' ';
        }
        ans.push_back(final);

        return ans;
        
    }
};