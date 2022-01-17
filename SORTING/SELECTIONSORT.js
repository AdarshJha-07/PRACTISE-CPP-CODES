function selectionsort(arr){
    
    let x,temp,min;
    for(let i=0;i<arr.length-1;i++){
         min=arr[i];
        for(let j=i;j<arr.length;j++){
            if(min>arr[j])
            {min=arr[j];
                x=j;
            }

        }
        if(min!=arr[i])
        {
        temp=arr[i];
        arr[i]=arr[x];
        arr[x]=temp;}
       // swap(arr[i],arr[x]);
    }

}
let arr=[9,8,7,7,5,4,2,2,1];
selectionsort(arr);
console.log(arr);