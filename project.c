#include <stdio.h>

int main()
{
    int ch, item, ci, size, c, qty;
    int tot = 0, price = 0;
    float discount, finaltot;

    do
    {
        printf("\n\n===== SHOPPING MENU =====");
        printf("\n1. Mens Wear");
        printf("\n2. Womens Wear");
        printf("\n3. Kids Wear");
        printf("\n4. Other Garments");
        printf("\n5. Shoes");

        printf("\nSelect Your Choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
           

            case 1:

                printf("\n----- MENS'S WEAR -----");
                printf("\n1. Shirt");
                printf("\n2. T-Shirt");
                printf("\n3. Jeans");

                printf("\nSelect Your Choice : ");
                scanf("%d", &item);

                switch(item)
                {
                    case 1:

                        printf("\n----- SHIRT -----");

                        printf("\nSelect Your Company");
                        printf("\n1. Peter England");
                        printf("\n2. Allen Solly");
                        printf("\n3. Linen King");
                        printf("\n4. H&M");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nPeter England Shirt");
                                break;

                            case 2:
                                printf("\nAllen Solly Shirt");
                                break;

                            case 3:
                                printf("\nLinen King Shirt");
                                break;

                            case 4:
                                printf("\nH&M Shirt");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Your Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                printf("\nSize S");
                                price = 500;
                                break;

                            case 2:
                                printf("\nSize M");
                                price = 700;
                                break;

                            case 3:
                                printf("\nSize L");
                                price = 900;
                                break;

                            case 4:
                                printf("\nSize XL");
                                price = 1100;
                                break;

                            default:
                                printf("\nWrong Size");
                                price = 0;
                        }

                        printf("\nPrice : Rs.%d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot + price * qty;

                        printf("\nAmount : Rs.%d", price * qty);

                        break;


                    case 2:

                        printf("\n----- T-SHIRT -----");

                        printf("\nSelect Your Company");
                        printf("\n1. Peter England");
                        printf("\n2. Allen Solly");
                        printf("\n3. Linen King");
                        printf("\n4. H&M");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nPeter England T-Shirt");
                                break;

                            case 2:
                                printf("\nAllen Solly T-Shirt");
                                break;

                            case 3:
                                printf("\nLinen King T-Shirt");
                                break;

                            case 4:
                                printf("\nH&M T-Shirt");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Your Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                printf("\nSize S");
                                price = 500;
                                break;

                            case 2:
                                printf("\nSize M");
                                price = 700;
                                break;

                            case 3:
                                printf("\nSize L");
                                price = 900;
                                break;

                            case 4:
                                printf("\nSize XL");
                                price = 1100;
                                break;

                            default:
                                printf("\nWrong Size");
                                price = 0;
                        }

                        printf("\nPrice : Rs.%d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot + price * qty;

                        printf("\nAmount : Rs.%d", price * qty);

                        break;


                    case 3:

                        printf("\n----- JEANS -----");

                        printf("\nSelect Your Company");
                        printf("\n1. Spykar");
                        printf("\n2. Levis");
                        printf("\n3. Denim");
                        printf("\n4. Zara");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nSpykar Jeans");
                                break;

                            case 2:
                                printf("\nLevis Jeans");
                                break;

                            case 3:
                                printf("\nDenim Jeans");
                                break;

                            case 4:
                                printf("\nZara Jeans");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Your Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                printf("\nSize S");
                                price = 500;
                                break;

                            case 2:
                                printf("\nSize M");
                                price = 700;
                                break;

                            case 3:
                                printf("\nSize L");
                                price = 900;
                                break;

                            case 4:
                                printf("\nSize XL");
                                price = 1100;
                                break;

                            default:
                                printf("\nWrong Size");
                                price = 0;
                        }

                        printf("\nPrice : Rs.%d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot + price * qty;

                        printf("\nAmount : Rs.%d", price * qty);

                        break;


                    default:
                        printf("\nWrong Item");
                }

                break;


          

            case 2:

                printf("\n----- WOMEN'S WEAR -----");
                printf("\n1. Top");
                printf("\n2. Kurti");
                printf("\n3. Jeans");

                printf("\nSelect Your Choice : ");
                scanf("%d", &item);

                switch(item)
                {
                    case 1:

                        printf("\n----- TOP -----");

                        printf("\n1. Biba");
                        printf("\n2. Zara");
                        printf("\n3. H&M");
                        printf("\n4. Westside");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nBiba Top");
                                break;

                            case 2:
                                printf("\nZara Top");
                                break;

                            case 3:
                                printf("\nH&M Top");
                                break;

                            case 4:
                                printf("\nWestside Top");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                price = 600;
                                break;

                            case 2:
                                price = 700;
                                break;

                            case 3:
                                price = 800;
                                break;

                            case 4:
                                price = 900;
                                break;

                            default:
                                price = 0;
                        }

                        printf("\nPrice : Rs.%d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot + price * qty;

                        printf("\nAmount : Rs.%d", price * qty);

                        break;


                    case 2:

                        printf("\n----- KURTI -----");

                        printf("\n1. Kurti 1");
                        printf("\n2. Kurti 2");
                        printf("\n3. Kurti 3");
                        printf("\n4. Kurti 4");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nKurti-1");
                                break;

                            case 2:
                                printf("\nKurti-2");
                                break;

                            case 3:
                                printf("\nKurti-3");
                                break;

                            case 4:
                                printf("\nKurti-4");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                price = 900;
                                break;

                            case 2:
                                price = 1000;
                                break;

                            case 3:
                                price = 1100;
                                break;

                            case 4:
                                price = 1200;
                                break;

                            default:
                                price = 0;
                        }

                        printf("\nPrice : Rs.%d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot + price * qty;

                        printf("\nAmount : Rs.%d", price * qty);

                        break;


                    case 3:

                        printf("\n----- WOMEN'S JEANS -----");

                        printf("\n1. Levis");
                        printf("\n2. Zara");
                        printf("\n3. Lee");
                        printf("\n4. Only");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nLevis Jeans");
                                break;

                            case 2:
                                printf("\nZara Jeans");
                                break;

                            case 3:
                                printf("\nLee Jeans");
                                break;

                            case 4:
                                printf("\nOnly Jeans");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                price = 900;
                                break;

                            case 2:
                                price = 1000;
                                break;

                            case 3:
                                price = 1100;
                                break;

                            case 4:
                                price = 1200;
                                break;

                            default:
                                price = 0;
                        }

                        printf("\nPrice :%d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot+price*qty;

                        printf("\nAmount : %d", price *qty);

                        break;


                    default:
                        printf("\nWrong Item");
                }

                break;


          

            case 3:

                printf("\n----- KIDS WEAR -----");
                printf("\n1. T-Shirt");
                printf("\n2. Shorts");
                printf("\n3. Jeans");

                printf("\nSelect Your Choice : ");
                scanf("%d", &item);

                switch(item)
                {
                    case 1:

                        printf("\n----- KIDS T-SHIRT -----");

                        printf("\n1. Nike");
                        printf("\n2. Adidas");
                        printf("\n3. Puma");
                        printf("\n4. H&M");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nNike T-Shirt");
                                break;

                            case 2:
                                printf("\nAdidas T-Shirt");
                                break;

                            case 3:
                                printf("\nPuma T-Shirt");
                                break;

                            case 4:
                                printf("\nH&M T-Shirt");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                price = 400;
                                break;

                            case 2:
                                price = 500;
                                break;

                            case 3:
                                price = 600;
                                break;

                            case 4:
                                price = 700;
                                break;

                            default:
                                price = 0;
                        }

                        printf("\nPrice : %d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot + price * qty;

                        printf("\nAmount : %d", price * qty);

                        break;


                    case 2:

                        printf("\n----- KIDS SHORTS -----");

                        printf("\n1. Nike");
                        printf("\n2. Adidas");
                        printf("\n3. Puma");
                        printf("\n4. H&M");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nNike Shorts");
                                break;

                            case 2:
                                printf("\nAdidas Shorts");
                                break;

                            case 3:
                                printf("\nPuma Shorts");
                                break;

                            case 4:
                                printf("\nH&M Shorts");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                price = 300;
                                break;

                            case 2:
                                price = 400;
                                break;

                            case 3:
                                price = 500;
                                break;

                            case 4:
                                price = 600;
                                break;

                            default:
                                price = 0;
                        }

                        printf("\nPrice : Rs.%d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot + price * qty;

                        printf("\nAmount : Rs.%d", price * qty);

                        break;


                    case 3:

                        printf("\n----- KIDS JEANS -----");

                        printf("\n1. Levis");
                        printf("\n2. Pepe");
                        printf("\n3. Lee");
                        printf("\n4. Spykar");

                        printf("\nSelect Company : ");
                        scanf("%d", &ci);

                        switch(ci)
                        {
                            case 1:
                                printf("\nLevis Jeans");
                                break;

                            case 2:
                                printf("\nPepe Jeans");
                                break;

                            case 3:
                                printf("\nLee Jeans");
                                break;

                            case 4:
                                printf("\nSpykar Jeans");
                                break;

                            default:
                                printf("\nWrong Company");
                        }

                        printf("\n1. S");
                        printf("\n2. M");
                        printf("\n3. L");
                        printf("\n4. XL");

                        printf("\nSelect Size : ");
                        scanf("%d", &size);

                        switch(size)
                        {
                            case 1:
                                price = 500;
                                break;

                            case 2:
                                price = 600;
                                break;

                            case 3:
                                price = 700;
                                break;

                            case 4:
                                price = 800;
                                break;

                            default:
                                price = 0;
                        }

                        printf("\nPrice : Rs.%d", price);

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        tot = tot + price * qty;

                        printf("\nAmount : Rs.%d", price * qty);

                        break;


                    default:
                        printf("\nWrong Item");
                }

                break;


          

            case 4:

                printf("\n----- OTHER GARMENTS -----");
                printf("\n1. Under Garments");
                printf("\n2. Socks");
                printf("\n3. Belt");
                printf("\n4. Cap");

                printf("\nSelect Your Choice : ");
                scanf("%d", &item);

                switch(item)
                {
                    case 1:
                        price = 300;
                        printf("\nUnder Garments");
                        break;

                    case 2:
                        price = 150;
                        printf("\nSocks");
                        break;

                    case 3:
                        price = 400;
                        printf("\nBelt");
                        break;

                    case 4:
                        price = 250;
                        printf("\nCap");
                        break;

                    default:
                        price = 0;
                        printf("\nWrong Item");
                }

                if(price > 0)
                {
                    printf("\nPrice : Rs.%d", price);

                    printf("\nEnter Quantity : ");
                    scanf("%d", &qty);

                    tot = tot + price * qty;

                    printf("\nAmount : Rs.%d", price * qty);
                }

                break;


         

            case 5:

                printf("\n----- SHOES -----");

                printf("\n1. Nike");
                printf("\n2. Adidas");
                printf("\n3. Puma");

                printf("\nSelect Your Choice : ");
                scanf("%d", &item);

                switch(item)
                {
                    case 1:
                        printf("\nNike Shoes");
                        price = 2000;
                        break;

                    case 2:
                        printf("\nAdidas Shoes");
                        price = 2200;
                        break;

                    case 3:
                        printf("\nPuma Shoes");
                        price = 1800;
                        break;

                    default:
                        printf("\nWrong Choice");
                        price = 0;
                }

                printf("\n1. 6");
                printf("\n2. 7");
                printf("\n3. 8");
                printf("\n4. 9");

                printf("\nSelect Your Size : ");
                scanf("%d", &size);

                switch(size)
                {
                    case 1:
                        printf("\nSize 6");
                        break;

                    case 2:
                        printf("\nSize 7");
                        break;

                    case 3:
                        printf("\nSize 8");
                        break;

                    case 4:
                        printf("\nSize 9");
                        break;

                    default:
                        printf("\nWrong Size");
                }

                printf("\nPrice : Rs.%d", price);

                printf("\nEnter Quantity : ");
                scanf("%d", &qty);

                tot = tot + price * qty;

                printf("\nAmount : Rs.%d", price * qty);

                break;


            default:

                printf("\nWrong Choice");
        }

        printf("\n\nDo You Want To Continue Shopping?");
        printf("\n1. Yes");
        printf("\n2. No");
        printf("\nEnter Choice : ");
        scanf("%d", &c);

    } while(c == 1);


   

    printf("\n\n------------------------------");
    printf("\n          FINAL BILL");
    printf("\n--------------------------------");

    printf("\nTotal Amount : Rs.%d", tot);

    if(tot > 3000)
    {
        discount = tot * 5 / 100;
        finaltot = tot - discount;

        printf("\nDiscount 5% : Rs.%.2f", discount);
        printf("\nFinal Total : Rs.%.2f", finaltot);
    }
    else
    {
        finaltot = tot;

        printf("\nDiscount : Rs.0");
        printf("\nFinal Total : Rs.%.2f", finaltot);
    }

    printf("\n-------------------------------");
    printf("\nThank You For Shopping!");
    printf("\n-------------------------------");

    return 0;
}