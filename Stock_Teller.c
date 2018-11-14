#include<stdio.h>
#include<time.h>
int main()
{
    printf("\tName: Utsab Sen\n\tEmail: utsabsen1999@gmail.com\n\tLOVEY PROFESSIONAL UNIVERSITY\n\t<3 INDIA <3\n\n\t---WELCOME---\n\n");
    FILE *fp,*fp1;
    char c;
    time_t t;
    time(&t);
    int n,answer,x;
    int buy,p;
    char a[15]="Brands.txt";
    file(a);
    printf("\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            int apple;
            char b[15]="Apple.txt";
            file(b);
            printf("\nChoose a model: ");
            scanf("%d",&apple);
            switch(apple)
            {
            case 1:
                {
                    char b1[15]="Apple1.txt";
                    file(b1);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=1;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 2:
                {
                    char b2[15]="Apple2.txt";
                    file(b2);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=2;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 3:
                {
                    char b3[15]="Apple3.txt";
                    file(b3);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=3;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 4:
                {
                    char b4[15]="Apple4.txt";
                    file(b4);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=4;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 5:
                {
                    char b5[15]="Apple5.txt";
                    file(b5);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=5;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            default:
                {
                    printf("\nInvalid Input");
                    exit(1);
                }
            }
            break;
        }
    case 2:
        {
            int samsung;
            char c[15]="Samsung.txt";
            file(c);
            printf("\nChoose a model: ");
            scanf("%d",&samsung);
            switch(samsung)
            {
            case 1:
                {
                    char c1[15]="Samsung1.txt";
                    file(c1);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=6;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 2:
                {
                    char c2[15]="Samsung2.txt";
                    file(c2);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=7;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 3:
                {
                    char c3[15]="Samsung3.txt";
                    file(c3);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=8;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 4:
                {
                    char c4[15]="Samsung4.txt";
                    file(c4);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=9;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 5:
                {
                    char c5[15]="Samsung5.txt";
                    file(c5);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=10;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            default:
                {
                    printf("\nInvalid Input");
                    exit(1);
                }
            }
            break;
        }
    case 3:
        {
            int sony;
            char d[15]="Sony.txt";
            file(d);
            printf("\nChoose a model: ");
            scanf("%d",&sony);
            switch(sony)
            {
            case 1:
                {
                    char d1[15]="Sony1.txt";
                    file(d1);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.\n");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=11;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 2:
                {
                    char d2[15]="Sony2.txt";
                    file(d2);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=12;
                    }
                        else
                    {
                        x=0;
                    }
                    break;
                }
            case 3:
                {
                    char d3[15]="Sony3.txt";
                    file(d3);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=13;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 4:
                {
                    char d4[15]="Sony4.txt";
                    file(d4);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=14;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 5:
                {
                    char d5[15]="Sony5.txt";
                    file(d5);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=15;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            default:
                {
                    printf("\nInvalid Input");
                    exit(1);
                }
            }
            break;
        }
    case 4:
        {
            int google;
            char e[15]="Google.txt";
            file(e);
            printf("\nChoose a model: ");
            scanf("%d",&google);
            switch(google)
            {
            case 1:
                {
                    char e1[15]="Google1.txt";
                    file(e1);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=16;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 2:
                {
                    char e2[15]="Google2.txt";
                    file(e2);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=17;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 3:
                {
                    char e3[15]="Google3.txt";
                    file(e3);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=18;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 4:
                {
                    char e4[15]="Google4.txt";
                    file(e4);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=19;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 5:
                {
                    char e5[15]="Google5.txt";
                    file(e5);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=20;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            default:
                {
                    printf("\nInvalid Input");
                    exit(1);
                }
            }
            break;
        }
    case 5:
        {
            int oneplus;
            char f[15]="OnePlus.txt";
            file(f);
            printf("\nChoose a model: ");
            scanf("%d",&oneplus);
            switch(oneplus)
            {
            case 1:
                {
                    char f1[15]="OnePlus1.txt";
                    file(f1);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=21;
                    }
                    else
                    {
                        x=0;
                    }
                break;
                    }
            case 2:
                {
                    char f2[15]="OnePlus2.txt";
                    file(f2);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=22;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 3:
                {
                    char f3[15]="OnePlus3.txt";
                    file(f3);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=23;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 4:
                {
                    char f4[15]="OnePlus4.txt";
                    file(f4);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=24;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            case 5:
                {
                    char f5[15]="OnePlus5.txt";
                    file(f5);
                    printf("\nDo you want to buy it?\nEnter 1 for yes or 2 for no.");
                    scanf("%d",&answer);
                    if(answer==1)
                    {
                        printf("\nHow many you want to buy?\nAvailable Products: 50\n");
                        scanf("%d",&buy);
                        p=stock(buy);
                        x=25;
                    }
                    else
                    {
                        x=0;
                    }
                    break;
                }
            default:
                {
                    printf("\nInvalid Input");
                    exit(1);
                }
            }
        }
    default:
        {
            printf("\nOut of stock");
        }
    }
    fp=fopen("Stock_Teller.txt","a");
    if(x==1)
    {
        fprintf(fp,"%s\t\t\t\tApple iPhone X\t\t\t\tRs. 95,880\t\t%d\n",ctime(&t),p);
    }
    else if(x==2)
    {
        fprintf(fp,"%s\t\t\t\tApple iPhone 5S\t\t\t\tRs. 15,979\t\t%d\n",ctime(&t),p);
    }
    else if(x==3)
    {
        fprintf(fp,"%s\t\t\t\tApple iPhone 6S\t\t\t\tRs. 34,499\t\t%d\n",ctime(&t),p);
    }
    else if(x==4)
    {
        fprintf(fp,"%s\t\t\t\tApple iPhone 8 Plus\t\t\tRs. 95,880\t\t%d\n",ctime(&t),p);
    }
    else if(x==5)
    {
        fprintf(fp,"%s\t\t\t\tApple iPhone 7 Plus\t\t\tRs. 68,690\t\t%d\n",ctime(&t),p);
    }
    else if(x==6)
    {
        fprintf(fp,"%s\t\t\t\tSamsung Galaxy Note 8\t\t\tRs. 67,900\t\t%d\n",ctime(&t),p);
    }
    else if(x==7)
    {
        fprintf(fp,"%s\t\t\t\tSamsung Galaxy E7\t\t\tRs. 16,700\t\t%d\n",ctime(&t),p);
    }
    else if(x==8)
    {
        fprintf(fp,"%s\t\t\t\tSamsung Galaxy S8 Plus\t\t\tRs. 70,000\t\t%d\n",ctime(&t),p);
    }
    else if(x==9)
    {
        fprintf(fp,"%s\t\t\t\tSamsung Galaxy S7 Edge\t\t\tRs. 43,900\t\t%d\n",ctime(&t),p);
    }
    else if(x==10)
    {
        fprintf(fp,"%s\t\t\t\tSamsung Galaxy A8\t\t\tRs. 37,999\t\t\t%d\n",ctime(&t),p);
    }
    else if(x==11)
    {
        fprintf(fp,"%s\t\t\t\tSony Xperia X Compact\t\t\tRs. 38,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==12)
    {
        fprintf(fp,"%s\t\t\t\tSony Xperia XA1 Plus\t\t\tRs. 23,922\t\t%d\n",ctime(&t),p);
    }
    else if(x==13)
    {
        fprintf(fp,"%s\t\t\t\tSony Xperia XZ1\t\t\t\tRs. 44,990\t\t%d\n",ctime(&t),p);
    }
    else if(x==14)
    {
        fprintf(fp,"%s\t\t\t\tSony Xperia XZ Prime\t\t\tRs. 38,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==15)
    {
        fprintf(fp,"%s\t\t\t\tSony Xperia Z3 Plus\t\t\tRs. 38,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==16)
    {
        fprintf(fp,"%s\t\t\t\tGoogle Pixel 2\t\t\t\tRs. 58,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==17)
    {
        fprintf(fp,"%s\t\t\t\tGoogle Pixel\t\t\t\tRs. 34,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==18)
    {
        fprintf(fp,"%s\t\t\t\tGoogle Nexus 6\t\t\t\tRs. 59,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==19)
    {
        fprintf(fp,"%s\t\t\t\tGoogle Pixel C\t\t\t\tRs. 61,990\t\t%d\n",ctime(&t),p);
    }
    else if(x==20)
    {
        fprintf(fp,"%s\t\t\t\tGoogle Pixel 2 XL\t\t\tRs. 82,000\t\t%d\n",ctime(&t),p);
    }
    else if(x==21)
    {
        fprintf(fp,"%s\t\t\t\tOne Plus 5\t\t\t\tRs. 32,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==22)
    {
        fprintf(fp,"%s\t\t\t\tOne Plus 3T\t\t\t\tRs. 27,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==23)
    {
        fprintf(fp,"%s\t\t\t\tOne Plus X\t\t\t\tRs. 13,890\t\t%d\n",ctime(&t),p);
    }
    else if(x==24)
    {
        fprintf(fp,"%s\t\t\t\tOne Plus One\t\t\t\tRs. 19,999\t\t%d\n",ctime(&t),p);
    }
    else if(x==25)
    {
        fprintf(fp,"%s\t\t\t\tOne Plus 2\t\t\t\tRs. 24,999\t\t%d\n",ctime(&t),p);
    }
    fclose(fp);

    if(answer==2)
    {
        printf("\nThanks. Visit Again.\n");
    }
    else
    {
        fp1=fopen("Stock_Teller.txt","r");
        if(fp1==NULL)
        {
            printf("File does not exists.");
        }
        else
        {
            while(c!=EOF)
            {
                c=getc(fp1);
                putchar(c);
            }
            fclose(fp1);
        }
    }
    return 0;
}

int stock(int buy)
{
    int left=50,q;
    if(buy>50)
    {
        printf("Product is out of stock.");
        exit(1);
    }
    else
    {
        q=left-buy;
        return (q);
    }
}

void file(char x[])
{
    FILE *fp;
    char c;
    fp=fopen(x,"r");
    if(fp==NULL)
    {
        printf("File does not exists.");
    }
    else
    {
        while(c!=EOF)
        {
            c=getc(fp);
            putchar(c);
        }
        fclose(fp);
    }
}
