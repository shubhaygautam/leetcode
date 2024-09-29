class AllOne {
public:
    unordered_map<string , int>mp;
    set<pair<int,string>>s;
    AllOne() {
        mp.clear();
        s.clear();
    }
    
    void inc(string key) {
        if(mp[key]==0)
        {
            mp[key]++ ;
            s.insert({mp[key],key});
        }
        
        else
        {
            s.erase(s.find({mp[key],key}));
            mp[key]++;
            s.insert({mp[key],key});
        }
    }
    
    void dec(string key) {
        
        if(mp[key]==1)
        {
            mp.erase(key);
        	s.erase(s.find({1,key}));
        }
        else
        {
        	s.erase(s.find({mp[key],key}));
            mp[key]--;
        	s.insert({mp[key],key});
		}
    }
    
    string getMinKey() {
       return s.size()>0?(pair<int,string>(*(s.begin())).second):"";
    }
    string getMaxKey() {
        return s.size()>0?(pair<int,string>(*(s.rbegin())).second):"";
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */