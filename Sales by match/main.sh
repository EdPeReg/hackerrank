#!/bin/bash

function sockMerchant() {
    local total=0
    local counter=0
    local n=$1       # Saving the first argument.
    shift            # Shift all arguments to the left (original $1 gets lost)
    local ar=("$@")  # Rebuild the array with the rest of the arguments.

    for((i=0; i<$n; ++i))
    do
        counter=1
        if [ ${ar[i]} -ne 0 ]; then
            for((j=i+1; j<$n; ++j))
            do
                if [ ${ar[j]} -eq ${ar[i]} ]; then
                    let ++counter
                    ar[j]=0
                fi
            done
        fi

        let total+=$counter/2
    done

    echo "$total" # Sending the value to stdout.
}

function main() {
    read n
    read -a ar

    # Assigning the function output using the $() command substitution.
    echo "$(sockMerchant $n ${ar[@]})"
}

main

