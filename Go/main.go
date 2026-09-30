package main
import "fmt"
func add(num1, num2, result *int){
	*result = *num1 + *num2
}
func subtract(num1, num2, result *int){
	*result = *num1 - *num2
}
func multiply(num1, num2, result *int){
	*result = *num1 * *num2
}
func divide(num1, num2, result *int){
	*result = *num1 / *num2
}
func modulo(num1, num2, result *int){
	*result = *num1 % *num2
}
func main(){
	var operation, num1, num2, result int
	for {
		fmt.Print("Enter 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division or 5 for Modulo:\n")
		fmt.Scan(&operation)
		fmt.Print("Enter 1st number:\n")
		fmt.Scan(&num1)
		fmt.Print("Enter 2nd number:\n")
		fmt.Scan(&num2)
		switch operation {
		case 1:
			add(&num1, &num2, &result)
			fmt.Println(num1, "+", num2, "=", result)
		case 2:
			subtract(&num1, &num2, &result)
			fmt.Println(num1, "-", num2, "=", result)
		case 3:
			multiply(&num1, &num2, &result)
			fmt.Println(num1, "*", num2, "=", result)
		case 4:
			divide(&num1, &num2, &result)
			fmt.Println(num1, "/", num2, "=", result)
		case 5:
			modulo(&num1, &num2, &result)
			fmt.Println(num1, "%", num2, "=", result)
		default:
			fmt.Println("Invalid Operation")
	
		}
	}

}