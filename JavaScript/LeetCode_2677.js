/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    //Method 1
    // let res=[];
    // let subArr=[];
    // for(let i=0;i<arr.length;i++){
    //     subArr.push(arr[i]);
    //     if(subArr.length===size){
    //         res.push(subArr);
    //         subArr=[]
    //     }
    // }
    // if(subArr.length){
    //     res.push(subArr)
    // }
    // return res;

    //Method 2
    const res=[]
    for(let i=0;i<arr.length;i+=size){
        res.push(arr.slice(i, i+size));
    }
    return res;
};
