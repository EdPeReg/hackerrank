
function repeated_string(s, n) {
    let total = Math.floor(n / s.length)
    let remainder = n % s.length
    let subs = s.substring(0,remainder)
    total = total * s.replace(/[^a]/g, "").length

    return total + subs.replace(/[^a]/g, "").length
}

function main() {
    const prompt = require("prompt-sync")({sigint: true})

    let s = prompt()
    let n = Number(prompt())

    console.log(repeated_string(s, n))
}

main()
