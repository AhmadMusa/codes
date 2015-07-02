#include <iostream>
#include <cstdio>
using namespace std ;

int main()
{
//    freopen("in.txt", "r", stdin ) ;

    long long int a,b,c,d ;
    long long int noTest ;
    long long int max ;

    cin >> noTest ;

    while( noTest-- )
    {
        cin >> a >> b >> c >> d ;

        max = a ;
        if( max < b )   max = b ;
        if( max < c )   max = c ;
        if( max < d )   max = d ;

        if( a+b+c+d<2*max )                     cout << "banana" << endl ;
        else if( a==b && b==c && c==d )         cout << "square" << endl ;
        else if( a==c && b==d && a!=b && c!=d ) cout << "rectangle" << endl ;
        else                                    cout << "quadrangle" << endl ;
    }

    return 0 ;
}
