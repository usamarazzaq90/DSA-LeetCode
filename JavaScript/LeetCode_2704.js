/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {

    // Method # 1
    // return ({
    //     toBe: function(value){
    //         if (val===value){
    //             return true
    //         }
    //         else throw "Not Equal"
    //     },
    //     notToBe: function(value){
    //         if (val!==value){
    //             return true
    //         }
    //         else throw "Equal"
    //     }
    // })


    //Method#2
    return{
        toBe: v=> (v===val) ? true : (()=>{throw "Not Equal"})(),
        notToBe: v=> (v!==val) ? true : (()=>{throw "Equal"})()
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
