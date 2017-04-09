fn dangle() -> &u32 {
    let i = 69;
    &i // This does not typecheck because this would be a dangling pointer
}

fn main() {
    let p = dangle();
}
