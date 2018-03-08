//
//  class_Assign1.c
//  Cpp
//
//  Created by MJMac on 2018. 3. 8..
//  Copyright © 2018년 innersme. All rights reserved.
//

#include <stdio.h>

void arstrcpy(char s[], char t[])
{
    int cnt = 0;
    while (1) {
        if (s[cnt] == '\0') {
            break;
        }
        else
        {
            s[cnt] = t[cnt];
            cnt++;
        }
    }

}

void ptstrcpy(char *s, char *t)
{
    while (1) {
        if (*s == '\0') {
            break;
        }
        else
        {
            *s++ = *t++;
        }
    }
    
}

float sumRecursive(int N, float* values)
{
    float res = values[N-1];
    if (N == 0) {
        return 0;
    }
    else
    {
        return res + sumRecursive(N-1, values);
    }
}

int main()
{
    int i = 0;
    char str[] = "hello world";
    printf("%s\n", str);
    arstrcpy(str, "heerrrrrrrrrrrrrr");
    printf("%s\n", str);
    ptstrcpy(str, "wwwwow");
    printf("%s\n", str);
    float values[10] = {0, };
    for (i = 0; i < 10;  i++) {
        values[i] = (i+1)*(i+1);
    }
    
    float res = sumRecursive(5, values);
    printf("%f\n", res);
    return 0;
}
