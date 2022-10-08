var isValid = function (inputString) {
    let expectedBrackets = [];

    for (let letter = 0; letter < inputString.length; letter++) {
        if (inputString[letter] == '{') {
            expectedBrackets.push('}');
        } else if (inputString[letter] == '[') {
            expectedBrackets.push(']');
        } else if (inputString[letter] == '(') {
            expectedBrackets.push(')');
        }
        else if (expectedBrackets.pop() !== inputString[letter]) {
            return false;
        }
    }

    return !expectedBrackets.length;
};
