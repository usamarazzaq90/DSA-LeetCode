/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
    // return new Promise((res,rej)=>{
    //     promise1.then((val1)=>{
    //         promise2.then((val2)=>res(val1+val2))
    //     })
    // })
    return new Promise(async (res,rej)=>{
        const sum=await Promise.all([promise1,promise2]);  //It will return all resolved promises in an array e.g., [2,5]
        res(sum[0]+sum[1]);
    })
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */
