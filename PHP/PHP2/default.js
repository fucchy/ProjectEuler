let number;
let a;
let result;
let x = 0;
let flag = false;

function run(x){
    a = [];
    let new_row = [];
    let count = 0;
    
    while(x % 2 == 0){
        count++;
        x /= 2;
    }
    new_row = [2,count];
    a.push(new_row);

    count = 0;

    while(x % 3 == 0){
        count++;
        x /= 3;
    }
    if((x != 1)||(count != 0)){
        new_row = [3,count];
        a.push(new_row);
    }

    count = 0;

    while(x != 1){
        let p = 0;

        // 素数をa.length行目に新しく付け加える
        temp = a.length + 1;
        while(a.length != temp){
            for(j = 1;(a[a.length - 1][0] + (j * 2)) <= x;j++){
                for(i = 0;i < a.length;i++){
                    if((a[a.length - 1][0] + (j * 2)) % a[i][0] == 0){
                        flag = true;
                        break;
                    }
                }
                if(flag == false){
                    p = a[a.length - 1][0] + (j * 2)
                    new_row = [p,0];
                    a.push(new_row);
                    break;
                }
                flag = false;
            }
        }

        flag == false;
        count = 0;

        if((x % p) == 0){
            while((x % p) == 0){
                count++;
                x /= p;
            }
            new_row = [p,count];
            a.push(new_row);
        }
    }
}

function kick(){
    number = document.getElementById("number");
    result = document.getElementById("result");

    run(number.value);

    let s = "";
    for(i = 0;i < a.length - 1;i++){
        if(a[i][1] != 0){
            s = s + a[i][0] + "<sup>" + a[i][1] + "</sup>・";
        }
    }
    s = s + a[a.length-1][0] + "<sup>" + a[a.length-1][1] + "</sup>";
    result.innerHTML = "<p>入力した数値:" + number.value + " = " + s + "</p>";
}