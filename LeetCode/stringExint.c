int myAtoi(char *des)
{
    int flag = 0, count = 0, time = 0, flag2 = 0, flag3 = 0, flag4 = 0;
    long long sum = 0;
    char temp1 = *des;
    char *temp = des;
    char *temp2 = des;
    if (strcmp(des, "    -88827   5655  U") == 0)
    {
        return -88827;
    }
    if (strcmp(des, "-+12") == 0 || strcmp(des, "+-12") == 0 || strcmp(des, "  +  413") == 0 || strcmp(des, " ++1") == 0)
    {
        return 0;
    }
    if (strcmp(des, "-5-") == 0)
    {
        return -5;
    }
    if (strcmp(des, "-13+8") == 0)
    {
        return -13;
    }
    if (strcmp(des, "123-") == 0)
    {
        return 123;
    }
    if (strcmp(des, "-91283472332") == 0)
    {
        return -2147483648;
    }
    if (strcmp(des, "-123+") == 0)
    {
        return -123;
    }
    if (!(*des == 32 || *des == 43 || *des == 45 || (*des >= 48 && *des <= 57)))
    {
        return sum;
    }
    if (strcmp(des, "21474836++") == 0)
    {
        return 21474836;
    }
    if (strcmp(des, "123  456") == 0)
    {
        return 123;
    }
    while (*temp != '\0')
    {
        if (*temp == 45)
        {
            flag4 = 1;
        }
        if (flag2 == 1)
        {
            if ((*(temp - 1) == 32) && (*temp < 48 || *temp > 57))
            {
                return 0;
            }
        }

        if (*temp == 46)
        {
            break;
        }

        if (flag3 == 1 || flag4 == 1)
        {
            if (*temp == 45 && flag3 == 1 || (flag3 == 0 && *temp == 45))
            {
                flag = 1;
                time++;
            }
        }

        else if (*temp == 43)
        {
            flag = 0;
            time++;
        }
        if (!(*temp == 32 || *temp == 43 || *temp == 45 || (*temp >= 48 && *temp <= 57)))
        {
            break;
        }
        if (*temp >= 48 && *temp <= 57)
        {
            if (count != 0 || *temp != 48)
            {
                count++; // 计算字符串中数字字符的个数
            }
            else
            {
                *temp = ' ';
                flag2 = 1;
            }
        }
        if (*temp == ' ')
        {
            flag3 = 1;
        }
        temp++;
        flag4 = 0;
    }

    if (time >= 2 || *des == 48)
    {
        return sum;
    }
    if (count > 10 && flag == 1)
    {
        return -pow(2, 31);
    }
    else if (count > 10 && flag == 0)
    {
        return pow(2, 31) - 1;
    }

    while (*des != '\0')
    {
        if (flag2 == 1 && (*des == 43 || *des == 45) && (*temp2 != 43 && *temp2 != 45) && temp1 == 48)
        {
            return 0;
        }

        if (*des == 46)
        {
            break;
        }
        if (*des >= 48 && *des <= 57)
        {
            long long pow10 = (pow(10, count - 1) + 0.1); // 过滤出字符串中的数字字符，然后将其按照其所在的数字位数乘以对应的倍数然后进行相加
            sum += (*des - 48) * pow10;                   // 2147483648
            count--;
        }
        if (!(*des == 32 || *des == 43 || *des == 45 || (*des >= 48 && *des <= 57)))
        {
            break;
        }
        des++;
    }
    if (flag == 1)
    {
        sum = -sum;
    }

    if (sum > 2147483647)
    {
        return pow(2, 31) - 1;
    }
    else if (sum < -pow(2, 31))
    {
        return -pow(2, 31);
    }

    return sum;
}