var TimeLimitedCache = function() {
    this.myMap=new Map();
};

/** 
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */
TimeLimitedCache.prototype.set = function(key, value, duration) {
    const alreadyExists=this.myMap.get(key);
    if(alreadyExists){
        clearTimeout(alreadyExists.timeoutId)
    }
    const timeoutId=setTimeout(()=>{
            this.myMap.delete(key)
        },duration)
    this.myMap.set(key,{value,timeoutId});
    return Boolean(alreadyExists)
};

/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {
    if(this.myMap.has(key)){
        return this.myMap.get(key).value;
    }
    return -1;
};

/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {
    return this.myMap.size;
};

/**
 * const timeLimitedCache = new TimeLimitedCache()
 * timeLimitedCache.set(1, 42, 1000); // false
 * timeLimitedCache.get(1) // 42
 * timeLimitedCache.count() // 1
 */
