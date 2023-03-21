const readline = require("readline-sync");
  
let t = Number(readline.question());
while(t--){
    let n, m, p = 0, q;
    let c = (readline.question());
    let s = "codeforces";
    for (let i = 0; i < s.length(); i++) {
        if (s[i] === c) {
            p = 1;
            break;
        }
    }
    if (p === 1) {
        console.log("YES");
    }
    else {
        console.log("NO");
    }
}
