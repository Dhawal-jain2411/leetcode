/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let ones=0;
    let tenths=0;
    let hunds=0;
    let thou=0;
    for (let  i =s.length -1; i>=0 ; i--){
        if(s[i]==='I') ones+=1 ;
        if(s[i]==='V') ones+=5 ;
        if(s[i]==='I' && s[i+1]==='V') ones-=2;
        if(s[i]==='I' && s[i+1]==='X') ones-=2;
        if(s[i]==='X') tenths+=10 ;
        if(s[i]==='L') tenths+=50 ;
        if(s[i]==='X' && s[i+1]==='L') tenths-=20;
        if(s[i]==='X' && s[i+1]==='C') tenths-=20;
        if(s[i]==='C') hunds+=100 ;
        if(s[i]==='D') hunds+=500 ;
        if(s[i]==='C' && s[i+1]==='M') hunds-=200;
        if(s[i]==='C' && s[i+1]==='D') hunds-=200;
        if(s[i]==='M') thou+=1000;
    }
    let result=thou+hunds+tenths+ones; 
    return result;
};