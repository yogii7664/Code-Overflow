package main

import (
    "fmt"
    "strconv"
)

func A(n int) int {
    f := make([]int, n+1, n+2)
    if n < 2 {
        f = f[0:2]
    }
    f[0] = 0
    f[1] = 1
    for i := 2; i <= n; i++ {
        f[i] = f[i-1] + f[i-2]
    }
    return f[n]
}

func B(n int) int {
    if n <= 1 {
        return n
    }
    return B(n-1) + B(n-2)
}

func main() {
    for i := 0; i <= 9; i++ {
        fmt.Print(strconv.Itoa(A(i)) + " ")
    }
    fmt.Println("")
    for i := 0; i <= 9; i++ {
        fmt.Print(strconv.Itoa(B(i)) + " ")
    }
    fmt.Println("")
}
