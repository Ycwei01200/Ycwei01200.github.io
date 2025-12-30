//Legendre's formula
int calczero(int n){
    ll count=0,temp=5;
    while(n/temp>0){
        count+=n/temp;
        temp*=5;
    }
    return count;
    
}
//因為五的因數一定比2多，所以通常要計算某個數字或是階層的'0'時，我們會透過計算5的數字，來求出該數字有多少'0'
//這就是Legendre's formula
