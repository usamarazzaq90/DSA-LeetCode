/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    // Method # 1
    // return new Promise((res,rej)=>{
    //     setTimeout(()=>{
    //     res();
    // }, millis)
    // })

    // Method # 2
    return new Promise((res)=>setTimeout(res,millis))

    // Method # 3
    // await new Promise((res)=>setTimeout(res,millis))
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */
