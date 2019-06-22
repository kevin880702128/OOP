#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    while(cin >> a >> b >> c)
    {
        if(a > b)
        {
            if(b > c) //a > b > c
            {
                if(b+c > a)
                {
                    if(b*b+c*c==a*a)
                    {
                        cout << "Right Triangle" << "\n";
                    }
                    else if(b*b+c*c<a*a)
                    {
                        cout << "Obtuse Triangle" << "\n";
                    }
                    else if(b*b+c*c>a*a)
                    {
                        cout << "Acute Triangle" << "\n";
                    }
                }
                else
                {
                    cout << "Not Triangle" << "\n";
                }
            }
            else
            {
                if(a > c) //a > c > b
                {
                    if(b+c > a)
                    {
                        if(b*b+c*c==a*a)
                        {
                            cout << "Right Triangle" << "\n";
                        }
                        else if(b*b+c*c<a*a)
                        {
                            cout << "Obtuse Triangle" << "\n";
                        }
                        else if(b*b+c*c>a*a)
                        {
                            cout << "Acute Triangle" << "\n";
                        }
                    }
                    else
                    {
                        cout << "Not Triangle" << "\n";
                    }
                }
                else //c > a > b
                {
                    if(a+b > c)
                    {
                        if(b*b+a*a==c*c)
                        {
                            cout << "Right Triangle" << "\n";
                        }
                        else if(b*b+a*a<c*c)
                        {
                            cout << "Obtuse Triangle" << "\n";
                        }
                        else if(b*b+a*a>c*c)
                        {
                            cout << "Acute Triangle" << "\n";
                        }
                    }
                    else
                    {
                        cout << "Not Triangle" << "\n";
                    }
                }
            }
        }
        else //b > a
        {
            if(a > c) //b > a > c
            {
                if(a+c > b)
                {
                    if(a*a+c*c==b*b)
                    {
                        cout << "Right Triangle" << "\n";
                    }
                    else if(a*a+c*c<b*b)
                    {
                        cout << "Obtuse Triangle" << "\n";
                    }
                    else if(a*a+c*c>b*b)
                    {
                        cout << "Acute Triangle" << "\n";
                    }
                }
                else
                {
                    cout << "Not Triangle" << "\n";
                }
            }
            else //b, c > a
            {
                if(b > c) //b > c > a
                {
                    if(a+c > b)
                    {
                        if(a*a+c*c==b*b)
                        {
                            cout << "Right Triangle" << "\n";
                        }
                        else if(a*a+c*c<b*b)
                        {
                            cout << "Obtuse Triangle" << "\n";
                        }
                        else if(a*a+c*c>b*b)
                        {
                            cout << "Acute Triangle" << "\n";
                        }
                    }
                    else
                    {
                        cout << "Not Triangle" << "\n";
                    }
                }
                else //c > b > a
                {
                    if(a+b > c)
                    {
                        if(b*b+a*a==c*c)
                        {
                            cout << "Right Triangle" << "\n";
                        }
                        else if(b*b+a*a<c*c)
                        {
                            cout << "Obtuse Triangle" << "\n";
                        }
                        else if(b*b+a*a>c*c)
                        {
                            cout << "Acute Triangle" << "\n";
                        }
                    }
                    else
                    {
                        cout << "Not Triangle" << "\n";
                    }
                }
            }
        }
    }
    return 0;
}
