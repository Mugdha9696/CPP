// Q.1) Define a function to check whether a given number is a Prime number or not.
#include<iostream>
#include<cmath>
using namespace std;
void check(int);
int main()
{
    int num;
    cout<<"Enter a no: ";
    cin>>num;
    check(num);
    return 0;
}
void check(int num)
{
    int i, flag = 0;
    for(i=2; i<=sqrt(num); i++)
    {
        if(num%i == 0){
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Not Prime";
    else
        cout<<"Prime";
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.2) Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int find_highest_digit(int);
int main()
{
    int num, highest_value_digit;
    cout<<"Enter a number: ";
    cin>>num;
    highest_value_digit = find_highest_digit(num);
    cout<<"highest value digit in a given no = "<<highest_value_digit;
    cout<<endl;
}
int find_highest_digit(int num)
{
    int highest_digit = -1;
    while(num != 0)
    {
        int digit = num % 10;
        if(digit > highest_digit)
            highest_digit = digit;
        num = num/10;
    }
    return highest_digit;
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.3) Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int, int);
int main()
{
    int x, y, ans;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    ans = power(x, y);
    cout<<"x^y = "<<ans<<endl;
    cout<<"________________________________\n\n";
}
int power(int num, int power)
{
    int i=1, ans=1;
    while(i<=power)
    {
        ans = ans*num;
        i++;
    }
    return ans;
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.4) Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int fact(int);
int comb(int, int);
void draw_pattern();
int main()
{
    draw_pattern();
    return 0;
}
int fact(int num)
{
    int i, fact=1;
    for(i=num; i>0; i--)
        fact = fact*i;
    return fact;
}
int comb(int n, int r)
{
    int ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}
void draw_pattern()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i, j;
    for(i=1; i<=n; i++)
    {
        int k=0;
        for(j=1; j<=n*2 - 1; j++)
        {
            if(n%2 != 0)
            {
                if(j>=n+1-i && j<=n-1+i)
                {
                    if(i%2 == 0)
                    {
                        if(j%2 != 0)
                            cout<<" ";
                        else{
                            cout<<comb(i-1, k);
                            if(k!=i-1)
                                k++;
                        }
                    }
                    else
                    {
                        if(j%2 == 0)
                            cout<<" ";
                        else{
                            cout<<comb(i-1, k);
                            if(k!=i-1)
                                k++;
                        }
                    }
                }
                else
                    cout<<" ";
            }
            else
            {
                if(j>=n+1-i && j<=n-1+i)
                {
                    if(i%2 == 0)
                    {
                        if(j%2 != 0){
                            cout<<comb(i-1, k);
                            if(k!=i-1)
                                k++;
                        }
                        else
                            cout<<" ";
                    }
                    else
                    {
                        if(j%2 == 0){
                            cout<<comb(i-1, k);
                            if(k!=i-1)
                                k++;
                        }
                        else
                            cout<<" ";
                    }
                }
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.5) Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
void check_in_fibonacci(int);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    check_in_fibonacci(n);
    return 0;
}
void check_in_fibonacci(int number)
{
    cout<<"0 ";
    int cur = 0;
    int next = 1;
    int sum = 0;
    int flag = 0;
    while(sum <= number)
    {
        cout<<next<<" ";
        sum = cur + next;
        if(sum == number){
            flag = 1;
            cout<<number;
            break;
        }
        cur = next;
        next = sum;
    }
    if(flag == 1)
        cout<<"\nFound";
    else
        cout<<sum<<"\nNot found";
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.6) Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap_by_reference(int&, int&);
int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    swap_by_reference(a, b);
    cout<<"After swapping: "<<endl;
    cout<<"a = "<<a;
    cout<<"\nb = "<<b;
}
void swap_by_reference(int &m, int &n)
{
    int temp = m;
    m = n;
    n = temp;
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.7) Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int, int, int=0);
int main()
{
    int x, a, b, c;
    cout<<"How many numbers u want to add ? (2 OR 3)"<<endl;
    cin>>x;
    cout<<"__________________________________________________"<<endl;
    switch(x)
    {
        case 2:
            cout<<"Enter 2 no.s: ";
            cin>>a>>b;
            cout<<"Sum = "<<add(a,b);
            cout<<"\n__________________________________________________";
            break;
        case 3:
            cout<<"Enter 3 no.s: ";
            cin>>a>>b>>c;
            cout<<"Sum = "<<add(a,b,c);
            cout<<"\n__________________________________________________";
            break;
        default:
            cout<<"You can add 2 or 3 no.s only";
    }
}
int add(int x, int y, int z)
{
    return x+y+z;
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.8) Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
float area(int);
int area(int, int);
float area(float, float);
int main()
{
    int choice;
    cout<<"1.Area of circle\n2.Area of rectangle\n3.Area of triangle"<<endl;
    cout<<"____________________________________________________________________"<<endl;
    cout<<"Enter ur choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            int r;
            cout<<"Enter radius: ";
            cin>>r;
            cout<<"Area of circle = "<<area(r);
            break;
        case 2: 
            int l, b;
            cout<<"Enter length and breadth: ";
            cin>>l>>b;
            cout<<"Area of rectangle = "<<area(l,b);
            break;
        case 3:
            float base, height;
            cout<<"Enter base and height of the triangle: ";
            cin>>base>>height;
            cout<<"Area of triangle = "<<area(base,height);
            break;
        default:
            cout<<"Invalid choice";
    }
}
float area(int r)
{
    return (3.14*r*r);
}
int area(int l, int b)
{
    return l*b;
}
float area(float b, float h)
{
    return (0.5*b*h);
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.9) Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
int maximum(int, int);
float maximum(float, float);
int main()
{
    int a, b;
    float x, y;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    cout<<"Maximum = "<<maximum(a,b);
    cout<<"\n_____________________________________________"<<endl;
    cout<<"Enter 2 real no.s: ";
    cin>>x>>y;
    cout<<"Maximum = "<<maximum(x,y);
}
int maximum(int a, int b)
{
    return (a>b ? a:b);
}
float maximum(float a, float b)
{
    return (a>b ? a:b);
}
/*----------------------------------------------------------------------------------------------------------*/

// Q.10) Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
int add(int, int);
float add(float, float);
float add(int, float);
int main()
{
    int x, y, z;
    float a, b, c;

    cout<<"Enter 2 integers: ";
    cin>>x>>y;
    cout<<"Sum = "<<add(x,y)<<endl;
    cout<<"___________________________________________\n";

    cout<<"Enter 2 real numbers: ";
    cin>>a>>b;
    cout<<"Sum = "<<add(a,b)<<endl;
    cout<<"___________________________________________\n";

    cout<<"Enter 1 integer & 1 real no: ";
    cin>>z>>c;
    cout<<"Sum = "<<add(z,c)<<endl;
    cout<<"___________________________________________\n";

    return 0;
}
int add(int p, int q)
{
    return p+q;
}
float add(float p, float q)
{
    return p+q;
}
float add(int p, float q)
{
    return p+q;
}
