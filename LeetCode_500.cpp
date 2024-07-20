class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector <string> output;
        unordered_map<char, int> rows({
            {'z',1},
            {'x',1},
            {'c',1},
            {'v',1},
            {'b',1},
            {'n',1},
            {'m',1},

            {'a',2},
            {'s',2},
            {'d',2},
            {'f',2},
            {'g',2},
            {'h',2},
            {'j',2},
            {'k',2},
            {'l',2},
        });

        int startingNum;
        for(string word : words){
            startingNum=rows[tolower(word[0])];
            bool oneRow=true;
            for(int j=0; j<word.size();j++){
                if(rows[tolower(word[j])]!=startingNum){
                    oneRow=false;
                    break;
                }
            }
            if(oneRow) output.push_back(word);
        }
        return output;
    }
};
