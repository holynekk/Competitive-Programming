/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    if(x < 2){
        return x;
    }
    
    let ans;
    let left = 1;
    let right = x;
    
    while(left <= right){
        let mid = Math.floor((left+right)/2);
        
        if(mid*mid <= x){
            left = mid;
            ans = left;
            left++;
        }else{
            right = mid-1;
        }
    }
    return ans;
    
};