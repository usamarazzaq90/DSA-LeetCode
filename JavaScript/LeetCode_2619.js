/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    //Method 1
    // let size=this.length
    // if(size){
    //     return this.at(size-1)
    // }
    // return -1

    //Method 2
    if(this.length){
        return this[this.length-1]
    }
    return -1
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */
