count = 0


def dfs(index, score):
    global count
    if index == 30:
        if score == 70:
            count += 1
        return
    # 答对
    if score < 100:
        dfs(index + 1, score + 10)
    # 答错
    dfs(index + 1, 0)


dfs(0, 0)
print(count)
