class MyHashMap {
    vector<list<pair<int, int>>> hashMap{769};

public:
    MyHashMap() {}
    
    void put(int key, int value) {
        int hash = key % 769;

        for (auto& p : hashMap[hash]) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }

        hashMap[hash].emplace_back(key, value);
    }
    
    int get(int key) {
        int hash = key % 769;

        for (auto& p : hashMap[hash]) {
            if (p.first == key) {
                return p.second;
            }
        }

        return -1;
    }
    
    void remove(int key) {
        auto& bucket = hashMap[key % 769];

        for (auto it = bucket.begin(); it != bucket.end(); it++) {
            if (it->first == key) {
                bucket.erase(it);
                return;
            }
        }
    }
};