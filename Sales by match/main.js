
function sockMerchant(n, ar) {
    let total = counter = 0; 

    for(let i = 0; i < n; ++i) {
        counter = 1;

        if(ar[i] != 0) {
            for(let j = i + 1; j < n; ++j) {
                if(ar[i] == ar[j]) {
                    ++counter;
                    ar[j] = 0;
                }
            }
        }
        total += Math.floor(counter / 2);
    }

    return total;
}

function main() {
    const prompt = require("prompt-sync")({sigint: true});

    let n = Number(prompt());
    let numbers = prompt();
    let ar = numbers.split(" ").map(Number);
    
    console.log(sockMerchant(n, ar));
}

main();
