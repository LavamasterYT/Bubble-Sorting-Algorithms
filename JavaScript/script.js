var output = document.getElementById("output");
var num = [];

for (var i = 0; i < 21; i++) {
    num[i] = Math.floor((Math.random() * 10) + 1)
}

addToOutput(createString());

var flag = false;
var done = false;

while (!done) {
    flag = false;

    for (var i = 0; i < num.length; i++) {
        if (i < num.length - 1) {
            if (num[i] > num[i + 1]) {
                flag = true;
                Swap(i, i + 1);
            }
        }
    }

    addToOutput(createString());

    if (!flag) {
        done = true;
        break;
    }
}

function addToOutput(input) {
    var node = document.createElement("p");
    var textnode = document.createTextNode(input);
    node.appendChild(textnode);
    output.appendChild(node);
}

function createString() {
    var string = "";
    for (var i = 0; i < num.length; i++) {
        string += num[i] + " ";
    }
    return string;
}

function Swap(index, sindex) {
    var x = num[index];
    var y = num[sindex];

    num[index] = y;
    num[sindex] = x;
}