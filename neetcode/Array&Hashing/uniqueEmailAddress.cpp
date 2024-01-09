class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueSet;
        int n = emails.size();
        vector<string> tempList;
        for(int i = 0;i<n;i++){
            string tempEmail="";
            bool flagAt = false;
            bool flagPlus = false;

            for(int j = 0;j<emails[i].size();j++){
                if(emails[i][j] == '+'){
                    flagPlus = true;
                }
                if(emails[i][j] == '@'){
                    flagAt = true;
                }

                if(!flagPlus && emails[i][j] != '.'){
                    tempEmail.push_back(emails[i][j]);
                }else if(flagAt){
                    tempEmail.push_back(emails[i][j]);
                }
            }

            uniqueSet.insert(tempEmail);
        }
        return uniqueSet.size();

    }
};