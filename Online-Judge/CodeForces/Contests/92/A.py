def solve_92A():
    n, m = map(int, input().split())
    m%= n*(n+1)/2
    temp = 1
    # n = n+1
    while(n!=0):
        if( m < temp ):
            break
        m-=temp
        n = n-temp
        temp+=1
    print(int(m))
if __name__ == '__main__':
    solve_92A()