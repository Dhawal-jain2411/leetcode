/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let reverse = 0;
    let temp = x;
    if(x<0) return false ;
    if(x % 10 === 0 && x !== 0) return false;
    else{
        
        while(temp>0){
            reverse = reverse * 10 +(temp % 10);
            temp=Math.floor(temp/10);
        }
    }
    return x === reverse;
    
};