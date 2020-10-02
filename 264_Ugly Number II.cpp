/*
Leetcode problem no .-  264
problem name -Ugly Number II
Difficulty - Medium

*/

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<long long >v;
        set<long long >s;
        v.push_back(1);
        int ind_2 , ind_3 , ind_5;
        ind_2 = ind_3 = ind_5 = 0;
        n--;
        long long res_2 , res_3 ,res_5,min_p;
        while(n){
            res_2 = 2*v[ind_2];
            res_3 = 3*v[ind_3];
            res_5 = 5*v[ind_5];
            min_p = min(res_2 , min(res_3,res_5));
            
            if(min_p == res_2){
                if(s.find(min_p)==s.end()){
                    v.push_back(min_p);
                    s.insert(min_p);
                    n--;
                }
                ind_2++;
                
            }
            if(min_p == res_3){
               if(s.find(min_p)==s.end()){
                    v.push_back(min_p);
                     s.insert(min_p);
                    n--;
                }
                ind_3++;
                
            }
            if(min_p == res_5){
                if(s.find(min_p)==s.end()){
                    v.push_back(min_p);
                    s.insert(min_p);
                    n--;
                }
                ind_5++;
                
            }
        }
        for(auto x:v){
            cout<<x<<" ";
        }
        return v.back();
        
        
    }
};
