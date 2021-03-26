#include<iostream>
using namespace std;
int length(const char* a)
{
    int dem=0;
    while(a[dem]!='\0')
    {
        dem++;

    }
    return dem;
}

char* reverse(const char *a)
{
    char* str= new char[length(a)];

    for(int i=0; i<length(a); i++)
    {
        *(str+i)=*(a+length(a)-i-1);
    }
    return str;
}

char* delete_char(const char* a, char c)
{
    char* str=new char[length(a)];
    for(int i=0; i<length(a); i++)
        *(str+i)=*(a+i);
    for(int i=0; i<length(a); i++)
    {
        if(*(str+i)==c)
        {
            for(int j=i; j<length(str); j++)
            {
                *(str+j)=*(str+j+1);
            }
            i--;
        }
    }
    return str;
}


char* pad_right(const char* a, int n)
{
    char* str=new char[n];
    for(int i=0; i<n; i++)
    {
        if(i>=length(a))
        {
            *(str+i)=' ';
        }
        else
        {
            *(str+i)=*(a+i);
        }
    }
    return str;
}

char* pad_left(const char* a, int n)
{
    char* str=new char[n];
    int aa=0;
    for(int i=0; i<n; i++)
    {
        if(i>=n-length(a))
        {
            *(str+i)=*(a+aa);
            aa++;
        }
        else
        {
            *(str+i)=' ';
        }
    }
    return str;
}

char* trim_left(const char* a)
{
    int dem=0,luu;

    for(int i=0; i<length(a); i++)
    {
        if(*(a+i)==' ')
        {
            dem++;
        }
        else
        {
            luu=i;
            break;
        }
    }
    char *str=new char [length(a)-dem];
    for(int i=0; i<length(a)-dem; i++)
    {
        *(str+i)=*(a+luu+i);
    }
    for(int i=length(a)-dem; i<length(a); i++)
    {
        *(str+i)='\0';
    }
    return str;
}

char* trim_right(const char* a)
{
    int dem=0,luu;

    for(int i=length(a)-1; i>=0; i--)
    {
        if(*(a+i)==' ')
        {
            dem++;
        }
        else
        {
            luu=i;
            break;
        }
    }
    char *str=new char [length(a)-dem];
    for(int i=0; i<length(a)-dem; i++)
    {
        *(str+i)=*(a+i);
    }
    for(int i=length(a)-dem; i<length(a); i++)
    {
        *(str+i)='\0';
    }
    return str;

}

main()
{
    char a[1000]="   abcdefgh   ";
    cout<<a<<endl;
    char* daonguoc=reverse(a);
    cout <<daonguoc << endl;
    delete [] daonguoc;
    char* xoachar=delete_char(a,'d');
    cout <<xoachar << endl;
    delete [] xoachar;
    char* donphai=pad_right(a, 15);
    cout <<donphai << endl;
    delete [] donphai;
    char* dontrai=pad_left(a,15);
    cout <<dontrai<<endl;
    delete [] dontrai;
    char *cattrai=trim_left(a);
    cout<<cattrai<<endl;
    delete [] cattrai;
    char *catphai=trim_right(a);
    cout<<catphai<<endl;
    delete[] catphai;
}
