#include <stdio.h>
int main()
{
    int user1 , user2 ;
    printf("input user 1 : ");
    scanf("%d" ,&user1);

    printf("input user 2 : ");
    scanf("%d" ,&user2);
    if (user1==1) // 1-Rock , 2-scissors , 3-Paper .
    {
        if (user2==1)
        {
            printf("draw match");
        }
        else
        {
            if (user2==2)
            {
                printf("user1 is winner");
            }
            else
            {
                printf("user2 is winner");
            }
        }
    }

    else
    {
        if (user1==2)
        {
            if(user2==2)
            {
                printf("draw match");
            }
            else
            {
                if (user2==3)
                {
                    printf("user2 wins");
                }
                else
                {
                    printf("user 1 wins");
                }
            }
        }
        else
        {
            if (user2==2)
            {
                printf("user 2 wins");
            }
            else
            {
                printf("user1 wins");
            }
        }
    }
}
