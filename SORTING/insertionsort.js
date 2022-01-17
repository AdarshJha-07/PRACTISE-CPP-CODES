function insertionsort(arr){
  let j,temp;
    for(let i=1;i<arr.length;i++){
        j=i;
        while(j>=0&&arr[j]<arr[j-1]){
             temp=arr[j];
             arr[j]=arr[j-1];
             arr[j-1]=temp;
             j--;
        }
    }

}
let arr=[5,4,3,2,1,4,6,9,6,5,46,88];
insertionsort(arr);
console.log(arr);