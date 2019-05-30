class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        auto lpntr = height.begin();
        auto rpntr = height.end();
        int largestArea = 0;
        rpntr--;
        
        while (lpntr != rpntr){
            int dist = rpntr - lpntr;
            auto limitpntr = *lpntr == min(*lpntr,*rpntr) ? lpntr : rpntr;
            
            int curLargestArea = (*limitpntr)*dist;
            if(curLargestArea > largestArea){
                largestArea = curLargestArea;
            }
            
            if (limitpntr == rpntr){
                rpntr--;
            }
            else{
                lpntr++;
            }
            
            
        }
        return largestArea;
         
        
            
        
    }
};
