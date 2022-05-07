//equation : 수식
//x=y+3 //x,y,3 : 피연산자 : operand , +,= : 연산자 : operator

//산술연산자 : 사칙연산 + %(modulo) : arithmetic operator
//정수 나누기 : 버림
// % modulo연산자 : 짝수 홀수 구분

//부호연산자 +-

//177~180 증감연산자 increment, decrement operator
// x=x+1 (대입연산,assignment op) / x++ / ++x / x-- / --x
// x += 1 (복합대입 연산자) / x =+ 1(이거는 그냥 대입) / x -= 1 / 

//y = x++ //-> y=x, x++
//z = ++x //-> x=x+1, z=x

//관계연산자
//==/!=/</>/<=/>=ㅊ`
//true : 1 반환(0이 아닌 다른 정수), false : 0 반환

//5.4논리연산자
// && and / || or / ! not

//191 단축계산 short circuit evaluation 이런코드는 지양할 것
//and에서 앞이 False면 자동으로 뒤는 계산 안하고 False
//or에서 앞이 True면 자동으로 뒤는 계산 안하고 True 

//193 조건연산자
//(조건문)?(맞을때 수식):(틀릴때 수식)

//194 콤마 연산자(가독성 떨어짐, 지양할 것)

//195 비트연산자 bit operator
// & and / | or / ^ xor (exclusive of) / << left shift / >> right shift / ~ not

//203 형변환 type conversion, casting
//int x
//float d
//d = (float) x

//208 우선순위, 결합규칙
//괄호로 명확하게 해줄 것