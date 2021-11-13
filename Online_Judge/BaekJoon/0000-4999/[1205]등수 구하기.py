N, score, P = map(int, input().split())

if N == 0:
    print(1)
else:
    ranklist = list(map(int, input().split()))
    ranklist.append(score)
    ranklist.sort(reverse=True)
    rank = ranklist.index(score) + 1

    if rank <= P:
        if P < len(ranklist) and min(ranklist) == score:
            print(-1)
        else:
            print(rank)
    else:
        print(-1)
