var compose = function (functions) {

    return function (x) {
        return functions.reduceRight((acc, fn) => {
            return fn(acc);
        }, x);
    }

};
