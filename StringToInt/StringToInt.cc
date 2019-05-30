class Solution {
public:
    int myAtoi(string str) {
        
        // going through the first white spaces
        int whitey = 0;
        while(isspace(str[whitey])){
            whitey++;
        }
        
        int arr[1000]; 
        bool neg = false;
        if (str[whitey] == '-' || str[whitey] == '+'){
            if(str[whitey]=='-'){
                neg = true;
            }
            whitey++;
        }
        
        int i = 0;
        while(isdigit(str[whitey]) ){
            
            arr[i]=str[whitey];
            arr[i]=arr[i]-48;
            i++;
            whitey++;
        }
        
        
        int exp = 0;
        int startingNum = 0;
        for(int j = i-1 ; j >=0; j--){
            int prev = startingNum;
            startingNum = startingNum + arr[j]*pow(10,exp);
            exp++;
            if(startingNum < prev){
                if(neg){
                    return INT_MIN;
                }
                else{
                    return INT_MAX;
                }
                    
            }
            
        }
        if(neg){
            return -1*startingNum;
        }
        return startingNum;
    }
};
