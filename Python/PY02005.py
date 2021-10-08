def count_ans(lst):
    n = len(lst)
    if (n < 2): return 0
    lst_tmp1 = lst[:n // 2]
    lst_tmp2 = lst[n // 2:]
    # print(lst_tmp1, lst_tmp2)
    ans = 0
    ans += count_ans(lst_tmp1)
    ans += count_ans(lst_tmp2)
    i = j = k = 0
    while (i < len(lst_tmp1) and j < len(lst_tmp2)):
        if (lst_tmp1[i] <= lst_tmp2[j]):
            lst[k] = lst_tmp1[i]
            i += 1
            k += 1
        else:
            lst[k] = lst_tmp2[j]
            j += 1
            k += 1
            ans += len(lst_tmp1) - i
    if (i < len(lst_tmp1)): lst[k:] = lst_tmp1[i:]
    if (j < len(lst_tmp2)): lst[k:] = lst_tmp2[j:]
    return ans


n = int(input())
lst = list(map(int, input().strip().split()))[:n]
print(count_ans(lst))
