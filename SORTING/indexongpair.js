let count =0;

function merge(arr,left_s,left_e,right_s,right_e)
{
    let a1=[];
    let a2=[];
    for(let x=left_s;x<=left_e;x++){
        a1.push(arr[x]);
    }
    for(let x=right_s;x<=right_e;x++){
        a2.push(arr[x]);
    }
   // console.log(a1,a2);
    let i=0,k=left_s;
    let j=0;

    while(i<a1.length&&j<a2.length){

     if(a1[i]<=a2[j]){
         arr[k]=a1[i];
         i++;
         k++;
         
     }
     else {
         count+=(a1.length-i);
         arr[k]=a2[j];
         j++;
         k++;
     }

    }
    //console.log("i",i,"k",k);
    while(i<a1.length){
        arr[k]=a1[i];
        i++;
        k++;
    }
    //console.log("j",j,"k",k);
    while(j<a2.length){
        arr[k]=a2[j];
        j++;
        k++;
    }
   // console.log("k",k);

}

function mergesort(arr,start,end){
    if(start>=end)return;
let mid=Math.floor((start+end)/2);
mergesort(arr,start,mid);
mergesort(arr,mid+1,end);
merge(arr,start,mid,mid+1,end);

}
let arr=[1,2,3,4,5];
mergesort(arr,0,arr.length-1);

//merge(arr,0,2,3,5);
console.log(count);
