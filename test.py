def main():
    print('简易计算器')
    while True:
        num1 = input('请输入第一个数字: ')
        num2 = input('请输入第二个数字: ')
        try:
            num1 = float(num1)
            num2 = float(num2)
        except ValueError:
            print('请输入有效的数字!')
            continue
        operator = input('请输入运算符(+,-,*,/): ')
        if operator == '+':
            result = num1 + num2
        elif operator == '-':
            result = num1 - num2
        elif operator == '*':
            result = num1 * num2
        elif operator == '/':
            if num2 == 0:
                print('错误，除数不能为零!')
                continue
            result = num1 / num2
        else:
            print('不支持的运算符!')
            continue
        print(f'{num1} {operator} {num2} = {result}')
        next_calculation = input('是否继续计算? (y/n): ')
        if next_calculation.lower() != 'y':
            break


if __name__ == '__main__':
    main()
