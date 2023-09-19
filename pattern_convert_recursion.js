// Khu de quy bang vong lap
function f(n) {
    if(n === n0) return C
    return (g(n, f(n - 1)))
}

function f(n) {
    k = n0
    F = C
    while(k < n) {
        k ++
        F = g(k, F);
    }
    return F
}

// Khu de quy duoi
function P(X) {
    if (B(X)) D(X)
    else {
        A(X)
        P(f(X))
    }
}

function P(X) {
    while(!B(X)) {
        A(X)
        X = f(X)
    }
    D(X)
}

// Khu de quy dung stack, 1 lan goi de quy
function P(X) {
    if (C(X)) D(X)
    else {
        A(X)
        P(f(X)) // Push => X: F(X)
        B(X)
    }
}

function P(X) {
    createStack(Stack)
    while(!C(X)) {
        A(X)
        Stack.push(X)
        X => F(X)
    }

    D(X)

    while(!Stack.empty()) {
        Stack.pop()
        B(X)
    }
}

// Khu de quy dung stack, 2 lan goi de quy
function P(X) {
    if(C(X)) D(X)
    else {
        A(X); P(f(X));
        B(X); P(g(X));
    }
}

function P(X) {
    
}