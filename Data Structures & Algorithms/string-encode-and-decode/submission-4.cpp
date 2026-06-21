class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";

        if (strs.size() == 0) return "";
        for(string e : strs){
            int n = e.size();
            string temp = format("{:03}", n); 

            cout<< temp<<"/n";

            s = s+temp;
            s = s+e;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        
        int n = s.size();
        if (n == 0) return {};
        if (n < 3) return {};
        int i = 0;
        while (i < n) {
            string lstr = s.substr(i, 3);
            int l = stoi(lstr);

            string d ;
            d= s.substr(i+3,l);

            ans.push_back(d);
            i = i+l+3;
        }

        return ans;
    }
};
