/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {

    //Method # 1
    // const res={};
    // for(let i=0;i<this.length;i++){
    //     let key=fn(this[i]);
    //     if(!res.hasOwnProperty(key)){
    //         res[key]=[]
    //     }
    //     res[key].push(this[i])
    // }
    // return res;

    // Method #  2 
    const res={};
    for(const obj of this){
        let key=fn(obj);
        res[key]=res[key] || []; //Logical OR
        res[key].push(obj)
    }
    return res;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */
