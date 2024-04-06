class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> p; 
        // pq will automatically sort the queue in order from top to bottom
        // top is the greatest, bottom is the smallest
        // in this case, when we insert a new node into the pq, 
        // the top will be the most step to take to climb
        
        int i;
        
        for( i = 0; i<heights.size()-1; i++){
            int diff;
            
            diff = heights[i+1]-heights[i];
            
            // only insert a new node into pq if the diff > 0
            // because if diff <= 0, means no need to climb
            if(diff > 0){
                p.push(diff);

                bricks-= diff;

                // if run out of brick, pop the most step needs to take, 
                // we will use a ladder and restore the bricks used.
                if(bricks < 0){
                    bricks += p.top();
                    p.pop();
                    ladders--;
                }
                
                if(ladders < 0) {
                    break;
                }
            }
        
        }
        return i;
    }
};