/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let res=[];
    let subArr=[];
    for(let i=0;i<arr.length;i++){
        subArr.push(arr[i]);
        if(subArr.length===size){
            res.push(subArr);
            subArr=[]
        }
    }
    if(subArr.length){
        res.push(subArr)
    }
    return res;
};
