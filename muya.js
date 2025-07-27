function muya (x,y){
    for(let i = 0; i < y; i++) {
        let ans;
     if(i%2==0){ 
         ans = "# "
     }
     else{
         ans = " #"
     }
     let n = Math.floor(y/2);
     console.log(ans.repeat(n));
    }

}

muya(5, 10);