
function countingValleys(steps, path) {
    let level = 0;
    let valleys = 0;

    for(let i = 0; i < steps; ++i) {
        if(path[i] == 'U') ++level;
        if(path[i] == 'D') --level;

        if(path[i] == 'U' && level == 0)
            ++valleys;
    }

    return valleys;
}

function main() {
    const prompt = require("prompt-sync")({sigint: true});

    let n = Number(prompt());
    let path = prompt();

    console.log(countingValleys(n, path));
}

main();
