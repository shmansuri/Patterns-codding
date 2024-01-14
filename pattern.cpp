/*
3 2 1 
3 2 1 
3 2 1

*/
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"hello world";
    int n;
    cout<<"Enter any number";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
*/

/*
"""
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
"""


#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter any number";
    int n;
    cin>> n;
    int count=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
} 

*/

/*
*
* *
* * *
* * * *
* * * * *
*/

/*
#include<iostream>
using namespace std;
int main ()
{
cout<<"Entre any number";
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    for(int j=0; j<=i; j++)
    {
        cout<<"*"<<" ";
        
    }
    cout<<endl;
}

}
*/

/*
1
2 3
4 5 6
7 8 9 10
// */
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Enter a number";
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<=i; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }


/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
// first codding
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Enter a number";
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=i; j<2*i; j++)
//         {
//             cout<<j<<" ";

//         }
//         cout<<endl;
//     }
// }
 //

 // second way
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number";
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int value=i;
        for(int j=1; j<=i; j++)
        {
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }
}
*/

/*
1
2 1
3 2 1
4 3 2 1
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=i; j>0; j--)
//         {
//             cout<<j<<" ";

//         }
//         cout<<endl;
//     }
// }

/*
A A A
B B B
C C C
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             char ch='A'+i;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

/*
A B C
A B C
A B C
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             char ch='A'+j;
//             cout<<ch<<" ";

//         }
//         cout<<endl;
//     }
// }

/*
A B C 
D E F
G H I
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     int count=0;
//     for(int i=0; i<n;i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             char ch='A'+count;
//             cout<<ch<<" ";
//             count=count+1;
//         }
//         cout<<endl;
//     }
// }
/*
A B C
B C D
C D E
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=1; j<=n; j++)
//         {
//             char ch='A'+(i+j-1);
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

/*
A
B C
C D E
D E F G
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cout<<"Enter a number"<<endl;
//     cin>>n;
    
//     int i=1;
//     while(i <= n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             char ch='A'+(i+j-2);
//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

/*
D
C D
B C D
A B C D
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int col=1;
//         char start='A'+(n-row);
//         while(col<=row)
//         {
//             cout<<start<<" ";
//             start=start+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

/*

*****
****
***
**
*

*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
    
//     int row=n;
//     while(row>=1)
//     {
//         int col=1;
//         while(col<=row)
//         {
//             cout<<"*"<<" ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row-1;
//     }
// }

/*
         *
       * *
     * * *
   * * * *
 * * * * *  
 
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<" Enter a number"<<endl;
//     cin>>n;
//     int row=1;
//     while(row<=n)
//     {
//         // for space
//         int space=n-row;
//         while(space>=1)
//         {
//             cout<<" "<<" ";
//             space=space-1;
//         }

//         //for star
//         int col=1;
//         while(col<=row)
//         {
//             cout<<"*"<<" ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;

//     }
// }

/*

* * * * *
  * * * *
    * * *
      * *
        *
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;

//     int row=n;
//     //int count=0;
//     while(row>=1)
//     {
//         // for space
//         int space=n-row;
//         while(space>=1)
//         {
//             cout<<" "<<" ";
//             space=space-1;
//         }

//         // for star pattern

//         int col=row;
//         while(col>=1)
//         {
//             cout<<"*"<<" ";
//             col=col-1;
//         }
//         cout<<endl;
//         row=row-1;
//     }
// }

/*
1 1 1 1
  2 2 2
    3 3
      4
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Entert a  number"<<endl;
//     cin>>n;
//     for(int row=1; row<=n; row++)
//     {
//         // for space
//         int space=row-1;
//         for(space; space>=1; space--)
//         {
//             cout<<" "<<" ";
//         }
//         //for pattern
//         for(int col=n; col>=row; col--)
//         {
//             cout<<row<<" ";

//         }
//         cout<<endl;


//     }
// }

/*
       1
     2 2
   3 3 3
 4 4 4 4
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter any number"<<endl;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         //space
//         int space=n-row;
//         while(space>=1)
//         {
//             cout<<" "<<" ";
//             space=space-1;
//         }
//         // pattern
//         int col=1;
//         while(col<=row)
//         {
//             cout<<row<<" ";
//             col=col+1;

//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

/*
1 2 3 4
  2 3 4
    3 4
      4
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter any number"<<endl;
//     cin>>n;
//     int row=1;
//     while(row<=n)
//     {
//         // space
//         int space=row-1;
//         while(space>=1)
//         {
//             cout<<" "<<" ";
//             space=space-1;
//         }

//         //pattern 
//         int col=row;
//         while(col<=n)
//         {
//             cout<<col<<" ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }

// }

/*
    1
   121
  12321
 1234321
123454321

*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter any number"<<endl;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         // space
//         int space=n-row;
//         while(space>=1)
//         {
//             cout<<" "<<" ";
//             space=space-1;

//         }
//         // first pattern
//         int col=1;
//         while(col<=row)
//         {
//             cout<<col<<" ";
//             col=col+1;
//         }
//         // second pattern
//         int sec_col=row-1;
//         while(sec_col>=1)
//         {
//             cout<<sec_col<<" ";
//             sec_col=sec_col-1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter any number"<<endl;
//   cin>>n;
//   int row=n;
//   while(row>=1)
//   {
//     // first number pattern
//     int col1=1;
//     while(col1<=row)
//     {
//       cout<<col1<<" ";
//       col1=col1+1;
//     }

//     // first star
//     int star1=n-row;
//     while(star1>=1)
//     {
//       cout<<"*"<<" ";
//       star1=star1-1;
//     }
//     //second star
//     int star2=n-row;
//     while(star2>=1)
//     {
//       cout<<"*"<<" ";
//       star2=star2-1;
//     }
//     // second number pattern
//     int col2=row;
//     while(col2>=1)
//     {
//       cout<<col2<<" ";
//       col2=col2-1;
//     }
//     cout<<endl;
//     row=row-1;
//   }

// } 

/*

  *
 ***
*****
e
e
e
e
e
*****
*****
*****
*****
*****

*/
// #include<iostream>
// using namespace std;

// void pattern(int n)
// {
//   int row=1;
//   while(row<=(n/2+1))
//   {
//     //space
//     int space= (n/2+1)-row;
//     while(space>=1)
//     {
//       cout<<" ";
//       space=space-1;

//     }
//     // first satar

//     int col=1;
//     while(col<=row)
//     {
//       cout<<"*";
//       col=col+1;
//     }
//     // second star
//     int col2=row-1;
//     while(col2>=1)
//     {
//       cout<<"*";
//       col2=col2-1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
//   // pattern e ke liye
//   row=1;
//   while(row<=(n+2))
//   {
//     cout<<"e"<<endl;
//     row=row+1;
//   }
//   // pattern last star
//   row=1;
//   while(row<=n)
//   {
//     int col=1;
//     while(col<=n)
//     {
//       cout<<"*";
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
  
// }

// int main()
// {
//     int n;
//     cout<<"Enter any number"<<endl;
//     cin>>n;
//     if (n%2!=0)
//     {
//       pattern(n);
//     }
//     else{
//       cout<<"Enter odd number"<<endl;
//     }
    
// }

/*
     *
    * *
   * * *
  * * * *
 * * * * *

*/


// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter any number"<<endl;
//   cin>>n;
//   int row=1;
//   while(row<=n)
//   {
//     // space
//     int space=n-row;
//     while(space>=1)
//     {
//       cout<<" ";
//       space=space-1;
//     }
//     // for star
//     int col=1;
//     while(col<=row)
//     {
//       cout<<"*"<<" ";
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }

// }

/*

* * * * *
 * * * *
  * * *
   * *
    *
    
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter any number"<<endl;
//   cin>>n;
//   int row=n;
//   while(row>=1)
//   {
//     // space
//     int space=n-row;
//     while(space>=1)
//     {
//       cout<<" ";
//       space=space-1;
//     }
//     // print star
//     int col=1;
//     while(col<=row)
//     {
//       cout<<"*"<<" ";
//       col=col+1;
//     }
//     cout<<endl;
//     row=row-1;
//   }
// }

