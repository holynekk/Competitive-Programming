/**
 * @param {number[]} pushed
 * @param {number[]} popped
 * @return {boolean}
 */
var validateStackSequences = function(pushed, popped) {
    let arr = [];
    for(let i = 0; i < pushed.length; i++){
        arr.push(pushed[i]);
        while(arr.length && popped.length && arr[arr.length-1] === popped[0]){
            arr.pop();
            popped.shift();
        }       
    }
    if(popped.length === 0){
            return true;
        }return false;
}