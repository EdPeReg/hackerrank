#!/bin/bash

function get_occurence() {
    # Save the parameter.
    local string=$1

    # echo the string, find the letter 'a' and count it.
    local ocurrences=$(echo $string | grep -o a | wc -l)
    # This works like a return, seding it to stdout.
    echo "$ocurrences"
}

function repeated_string() {
    # Assign parameters.
    local string=$1
    local n=$2
    # Just doing some simple operations.
    local total=$n/${#string}
    local rem=$n%${#string}
    # Getting a substring from the string, this works like a slide.
    local substring=${string:0:$rem}

    total=$total*$(get_occurence $string)
    echo $(($total + $(get_occurence $substring)))
}

function main() {
    read -a string # The string works as an array.
    read n

    echo "$(repeated_string $string $n)"
}

main
