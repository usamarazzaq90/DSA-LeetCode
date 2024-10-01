/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var newArray=[];
    for(let i=0;i<arr.length;i++){
        let x=fn(arr[i],i);
        newArray.push(x);
    }
    return newArray;
};
