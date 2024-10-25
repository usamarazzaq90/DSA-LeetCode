/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    //Method 1
    // if(Object.keys(obj).length==0) return true
    // return false

    //Method 2
    if(Array.isArray(obj)){
        return obj.length===0
    }
    else{
        let arr=Object.keys(obj)
        return arr.length===0
    }
};
