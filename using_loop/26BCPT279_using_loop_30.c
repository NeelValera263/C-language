

int main(){
    int a,b,d,n[500],i,j;
    for(i=1;i<501;i++){
        n[i-1] = i;
        // d=n[i]%i;
        // if(d==0){
        //     printf("%d\n",n);
        //     }
        for(j=1;j<501;j++){
            d=n[i-1]%j;
            if(d==0){
             printf("%d\n",n);
             }
        }
    }    
}