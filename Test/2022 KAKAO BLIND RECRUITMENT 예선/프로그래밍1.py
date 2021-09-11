def solution(id_list, report, k):
    answer = []
    user = {}
    report_user = {}
    ban_user = []

    for i in id_list:
        user[i] = []
        report_user[i] = []

    for i in report:
        a = i.split()
        if a[0] not in user[a[1]]:
            user[a[1]].append(a[0])
            report_user[a[0]].append(a[1])

    for a, b in user.items():
        if len(b) >= k:
            ban_user.append(a)

    for v in report_user.values():
        cnt = 0
        for i in ban_user:
            if i in v:
                cnt += 1
        answer.append(cnt)

    return answer
