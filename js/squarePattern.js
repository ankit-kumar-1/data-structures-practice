function printfirstRow(n) {
    var str = "";
    for (var i = 0; i < n; i++) {
        str = str + "*";
    }
    console.log(str);
}

function printPartialLine(n) {
    var str = "";
    str = str + "*";
    for (var i = 0; i < n - 2; i++) {
        str = str + " ";
    }
    str = str + "*";
    console.log(str);
}

function printFullSquare(n) {
    printfirstRow(n);
    for (var i = 0; i < n - 2; i++) {
        printPartialLine(n);
    }
    printfirstRow(n);
}

printFullSquare(5);