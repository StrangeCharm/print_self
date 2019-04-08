use std::fs;

fn main() {
	let me = fs::read_to_string("./print_self.rs").expect("error");
	println!("{}",me);
}
