void Leaders(int* arr,int len)
{

    for(int i=0;i<len;i++){
        for(int j=i ; j<len ; j++){
            if(arr[i]<arr[j]){
                break;
            }
            if(j==len-1)
                cout<<arr[i]<<" ";
        }
    }

}
