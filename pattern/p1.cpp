#include <iostream>
using namespace std;
char convert ( char let){
//         if (let >= 'a' && let <= 'z')
// {
// let = let - 'a' + 'A';
// let = let - 32;
// }

return toupper(let) ;
}
int main(){
    char retlet = convert('/');
cout<<retlet;
// for (int i = 1; i <=4; i++)
// {
//     for ( int j  = 1; j<=5; j++)
//     {
//         cout<<"10" <<" ";
//     }
//     cout<<endl;
// }
// for (int i = 1; i<=5; i++){
//             int n = 5 ;
//     for( int j = 1; j<=5; j++){
//         cout<<n<<" ";
//             n--;
//     }
//     cout<<endl;
// }
// for (char i = 'a'; i<=101; i++){
//     for (int j = 'a'; j<=101; j++){
//         cout<<char(j)<<" ";
//     }
//     cout<<endl;
// }
//             int n = 1;
// for (int i = 1; i <=5; i++)
// {
//     for ( int j  = 1; j<=5; j++)
//     {
//         cout<<n<<" ";
//         n++;
//     }
//     cout<<endl;
// }
// for (int i = 1; i<=5; i++){
//     for(int j =1;j<=i;j++)
//     cout<<j <<" ";
//     cout<<endl;

// }
// for (int i = 1; i<=5; i++){
//     for(int j =i;j>=1;j--)
//     {
//     cout<<j <<" ";
//     }
//     cout<<endl;
// }
// for (int i = 1; i<=5; i++){
//     for(int j =1;j<=i;j++)
//     {
//             char name='a'+(i-1);
//     cout<<name <<" ";
//     }
//     cout<<endl;

// }
// for (int i = 5; i>=1; i--){
//     for(int j =i;j>=1;j--)
//     {
//     cout<<'*' <<" ";
//     }
//     cout<<endl;
// }
// for (int i = 1; i<=5; i++){
//     for(int j =5;j>=5-(i-1);j--)
//     {
//     cout<<j <<" ";
//     }
//     cout<<endl;
// }
return 0;
}
