void primos(int n){

    bool prim;

    for(int i=2;n>0;i++){


             prim=true;
        for(int j=2;j<i;j++ ){
            if(i%j==0){
                prim=false;
                break;
            }
        }
        if(prim)
        {
            --n ;

            cout<<i<<" ";

        }


    }

}


int main()
{
    int n;
    cin>>n;

    primos(n);
    return 0;
}