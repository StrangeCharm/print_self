package main

import (
	"fmt"
	"io/ioutil"
)

func main() {
	self, err := ioutil.ReadFile("./print_self.go")
	if err != nil {
		fmt.Print(err)
	}
	fmt.Println(string(self))
}
