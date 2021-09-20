#!/bin/bash

function counting_valleys() {
    local steps=$1
    local path=$2
    local level=0
    local valley=0

    for((i=0; i<$steps; ++i))
    do
        echo $i
        if [ ${path:$i:1} == 'U' ]; then
            let ++level
        fi

        if [ ${path:$i:1} == 'D' ]; then
            let --level
        fi

        if [ ${path:$i:1} == 'U' ] && [ $level -eq 0 ]; then
            let ++valley
        fi
    done

    echo "$valley"
}

function main() {
    local filename='test.txt'
    local words=()

    # Get each line and save it in an array.
    while read line;
    do
        # Append each line.
        words+=($line)
    done < $filename # Read each line.

    local steps=${words[0]}
    local path=${words[1]}

    echo "$(counting_valleys $steps $path)"
}

main
