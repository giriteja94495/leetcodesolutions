// https://leetcode.com/problems/lru-cache/


class LRUCache {
public:
    
   int capacity;
    // for retreiving the  least recently used element
    list<int> recent;
    
    // to check for the key element and for returning the value element of it  
    unordered_map<int,int> cache;
    
    // to store  the address of every key element in list iterator
    unordered_map<int,list<int>::iterator> pos;
    void helper(int key){
    // this is the black panther of our code..btw..black panther actor died today....
    // let's get back to the code ...if we find the key inside pos..we gotta update its address..so lets delete the element from recently used list
    if(pos.find(key)!=pos.end()){
        // if you found the key ,we have to update the recently used key to it ,so just remove  it
        recent.erase(pos[key]);
    }
        // if size exceeds
    else if(cache.size()>=capacity){
        // take the least frequently used element
        int old=recent.back();
        // delete it
        recent.pop_back();
        // remove that key value pair from cache
        cache.erase(old);
        // remove it from pos too
        pos.erase(old);
    }
        // push it into recent
    recent.push_front(key);
        //update its key to the beginning
    pos[key]=recent.begin();
}

    
    
    LRUCache(int capacity) {
        // constructor intialisation
        this->capacity=capacity;
    }
    
    int get(int key) {
     // if we didn't find the key element inside the cache ,we just return -1
     if(cache.find(key)==cache.end()){
         return -1;
     }
        // if the key  is present ,let's go to one helper function to handle different cases
        else{
            
            helper(key);
            return cache[key];
        }
    }
    
    void put(int key, int value) {
        helper(key);
        cache[key]=value;
    }
};
