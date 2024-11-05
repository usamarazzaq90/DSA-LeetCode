class EventEmitter {
    
    /**
     * @param {string} eventName
     * @param {Function} callback
     * @return {Object}
     */
    eventMap={}; //event -> Set

    subscribe(eventName, callback) {
        if(!this.eventMap.hasOwnProperty(eventName)){
            this.eventMap[eventName]=new Set()
        }
        this.eventMap[eventName].add(callback);
        return {
            unsubscribe: () => {
                this.eventMap[eventName].delete(callback);
            }
        };
    }
    
    /**
     * @param {string} eventName
     * @param {Array} args
     * @return {Array}
     */
    emit(eventName, args = []) {
        const res=[];
        (this.eventMap[eventName] ?? [])
            .forEach((callback)=>res.push(callback(...args)));
        return res
    }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */
