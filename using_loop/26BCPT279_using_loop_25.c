

int main(){
    int i,c,n,s,d[100],a,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    a = n;
    for(i=0;i<100;i++){
        n/=10;
        c++;
        if(n==0){
            break;
        }
    }
    c = j;
    s=0;
   
        for(i=0;i<c;i++){
            d[i]=a%10;
            a/=10;
    }
    for(i=0;i<c;i++){
        s++;
           if(d[i-1]==d[c-s]){
                printf("Its a palidrom number.");
    } else{
        printf("Its not a palindrom number.");
    }
    }
    
    }