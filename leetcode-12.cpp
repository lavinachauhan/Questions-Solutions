//week ->5 Assignment
// Assignment Question number-> 12


class Solution {
public:
    string intToRoman(int num) {

        int values[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string symbol[13]=
        {"M" , "CM" , "D" , "CD" , "C" ,
        "XC" , "L" , "XL" , "X" , "IX" ,
        "V" , "IV" , "I"};
        int i=0;
        string roman="";
        //13 is size of values and symbol array
        while(i<13)
        {
            while(num >= values[i])
            {
                roman+=symbol[i];
                num-=values[i];
            }
            i++;
        }
        return roman;
   }
};