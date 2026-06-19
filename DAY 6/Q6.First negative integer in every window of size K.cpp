class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        if(k > q.size() || k < 0) {
        // invalid case, just return original queue
        return q;
    }
        //Algo
        //step 1: pop first k from Q and put in Stack
        stack<int>s;
        
        for(int i=0;i<k;i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        
        //stap 2: Fetch from stack and pust into q
        while(!s.empty()){
            int val = s.top();
            s.pop();
            q.push(val);
        }
        
        //step 3: fetch frist (n-k) element from Q and push back into Q
        int t = q.size()-k;
        while(t--){
            int val = q.front();
            q.pop();
            q.push(val);
            
        }
        return q;
        
    }
};
