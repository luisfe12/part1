void pitagoras(int n){

    for(int i=100;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if(i*i+j*j==k*k){
                    if(i+j+k==n){
                        cout<<i*j*k;
                    }

                }

            }
        }

    }

}

int main()
{
    int n=1000;

    pitagoras(n);

    return 0;
}