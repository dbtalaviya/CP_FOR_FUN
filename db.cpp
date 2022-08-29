   
   #include<bits/stdc++.h>  
   using namespace std;

//-----------------------------------------------------------------------------------------
   #define db_bhai        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   #define test           int T; cin>>T; for(int t=1;t<=T;t++)
   #define ll             long long
   #define lli            long long int
   #define ld             long double
   #define yes            cout<<"Possible"<<endl
   #define no             cout<<"Impossible"<<endl
   #define f(i,x,n)       for(int i = x; i < n; i++)
   #define fo(i,x,n)      for(int i=x;i>=n;i--)
   #define pb             push_back
   #define pp             pop_back()
   #define all(v)         (v).begin(), (v).end()
   #define array_le_le    lli a[n]; f(i,0,n){cin>>a[i];}
   #define vector_le_le   vector<lli>v; f(i,0,n){int x; cin>>x; v.pb(x);}
//-----------------------------------------------------------------------------------------
   const long long        INF=1e18;
   const int32_t          MM=998244353;
   const int              N=1e7+5;
   const int32_t          M=1e9+7;
//-----------------------------------------------------------------------------------------
   #ifndef ONLINE_JUDGE  
   #define debug(x)       cout<<#x<<" "<<x<<endl
   #else
   #define debug(...)     
   #endif
//-----------------------------------------------------------------------------------------
    lli n,m;  
    string s[3110];
void solve()
{           
    cin>>n>>m;
    f(i,0,n)
    {
        cin>>s[i];
    }    
    string g[n];
    f(i,0,n)
    {
        g[i]=s[i];
    }
    f(i,0,n)
    {
        f(j,0,m)
        {
            if(g[i][j]!='#')
            {
                g[i][j]='^';
            }
        }
    }
    f(i,0,n)
    {
        f(j,0,m)
        if(g[i][j]=='^')
        {
            int cnt=0;
            if(i+1<n)
            {
                if(g[i+1][j]=='^')cnt++;
            }
            if(i-1>=0)
            {
                if(g[i-1][j]=='^')cnt++;
            }
            if(j+1<m)
            {
                if(g[i][j+1]=='^')cnt++;
            }
            if(j-1>=0)
            {
                if(g[i][j-1]=='^')cnt++;
            }
            if(cnt<2)
            {
                if(s[i][j]=='^')
                {
                    no;
                    return;
                }
                g[i][j]='.';
            }
        }
    }
        f(i,0,n)
    {
        f(j,0,m)
        if(g[i][j]=='^')
        {
            int cnt=0;
            if(i+1<n)
            {
                if(g[i+1][j]=='^')cnt++;
            }
            if(i-1>=0)
            {
                if(g[i-1][j]=='^')cnt++;
            }
            if(j+1<m)
            {
                if(g[i][j+1]=='^')cnt++;
            }
            if(j-1>=0)
            {
                if(g[i][j-1]=='^')cnt++;
            }
            if(cnt<2)
            {
                no;
                return;
            }
        }
    }
    yes;
    f(i,0,n)
    {
        cout<<g[i]<<endl;
    }
}

int main()
{
    db_bhai;
    test
    {
        cout<<"Case #"<<t<<": "; 
        solve();
    }
    return 0;
}






