// https://dev.to/sagar/three-dots---in-javascript-26ci#:~:text=When%20three%20dots%20(%E2%80%A6)%20is,an%20array%20into%20a%20list.

function countingValleys(steps, path) {
    let level = 0;

    // ... operator will spread the path, getting an array of characters.
    // This allows us to iterate in each value using reduce(), the most important
    // thing is the accumulator (sum) that will be added in each iteration and our 
    // value, which it's the current value in each iteration.
    return [...path].reduce((sum, value) => {
        if(value == 'U') { ++level; } else { --level }
        if(value == 'U' && level == 0) { ++sum; }
        return sum;
    }, 0);
}

function main() {
    const prompt = require("prompt-sync")({sigint: true});

    let n = Number(prompt());
    let path = prompt();

    console.log(countingValleys(n, path));
}

main();
