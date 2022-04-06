class Solution {
public:
    int minBitFlips(int start, int goal) {
        string st(toBinary(start));
        string gl(toBinary(goal));
        int i=st.size()-gl.size();
        if(st.size()<gl.size()){
            i=gl.size()-st.size();
        } 
        for(int j=0;j<i;j++){
            if(gl.size()>st.size()) st+="0";
            if(gl.size()<st.size()) gl+="0";
        }
        int count=0;
        for(int j=0;j<st.size();j++){
            if(gl[j]!=st[j]){
                count++;
            } 
        }
        cout<<st<<endl;
        cout<<gl<<endl;
        cout<<count;
        return count;
    }
    
    string toBinary(int n){
        string r;
        while (n != 0){
            r += ( n % 2 == 0 ? "0" : "1" );
            n /= 2;
            }
            return r;
        }
};
