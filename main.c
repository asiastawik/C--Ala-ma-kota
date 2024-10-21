#include <stdio.h>

int main(int argc, char **argv)
{
    /*
    printf("Ala ma kota\n");
    printf("Ola ma psa\n");
    */

    /*
    int a;
    a=5;
    a=1./2*a;
    printf("a=%d\n",a);
    */

    /*
    int i;
    for (i=0;i<10;i=i+1)
        printf("i=%d\n",i);
    */

    /*
    char i;
    for (i=0;i<=127;i=i+1) maxymalnie mo¿e byæ 127, od 128 zaczyna lataæ w kólko
        printf("i=%d\n",i);
    */

    /*
    unsigned char i;
    for (i=0;i<300;i=i+1) dzia³a w kó³ko, nie ma prawa sie zatrzymaæ, ale do 255 dziala
        printf("i=%d\n",i);
    */

    /*
    int a;
    a=-5;
    if(a>0)
        printf("a dodatnie\n");
    else if (a==0)
        printf("a zero\n");
    else
        printf("a ujemne\n");
    */

    int i;
    int nd;
    int nk;
    for(i=0; i<100;i=i+1)
    {
        printf("Ala ma %d kot", i);
        nd=i/10;
        nk=i%10;

        if(nd==1)
        {
            printf("ow\n");
        }

        else if(nd==0)
        {
            if (nk==1)
            {
                printf("a\n");
            }

            else if(1<nk && nk<5)
            {
                printf("y\n");
            }

            else
            {
                printf("ow\n");
            }
        }

        else
        {
            if(1<nk && nk<5)
            {
                printf("y\n");
            }
            else
            {
                printf("ow\n");
            }
        }
    }
    return 0;
}
