# define M 1000000007
long long powe(int n,int p){
    if (p==0) return 1;
    if (p==1) return n;
        long long ans=powe(n,p/2)%M;
        ans*=(ans)%M;
        ans%=M;
    if (p%2==1) return (n*ans)%M;
    else return (ans)%M;
}
long long power(int N,int R)
{
    //Your code here
    return powe(N,R);
}