import java.util.*

fun main(args: Array<String>) {

    val `in` = Scanner(System.`in`)
    val s = `in`.next()
    val len = s!!.length
    if (s == null || len == 0) {
        println("0")
    }
    val stack = Stack<Int>()
    var currentNumber = 0
    var operation = '+'
    for (i in 0 until len) {
        val currentChar = s[i]
        if (Character.isDigit(currentChar)) {
            currentNumber = currentNumber * 10 + (currentChar - '0')
        }
        if (!Character.isDigit(currentChar) && !Character.isWhitespace(currentChar) || i == len - 1) {
            if (operation == '-') {
                stack.push(-currentNumber)
            } else if (operation == '+') {
                stack.push(currentNumber)
            } else if (operation == '*') {
                stack.push(stack.pop() * currentNumber)
            } else if (operation == '/') {
                stack.push(stack.pop() / currentNumber)
            }
            operation = currentChar
            currentNumber = 0
        }
    }
    var result = 0
    while (!stack.isEmpty()) {
        result += stack.pop()
    }
    println(result)
}


