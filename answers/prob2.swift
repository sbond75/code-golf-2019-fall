//let cast = ["Vivien", "Marlon", "Kim", "Karl"]
//let shortNames = cast.filter { $0.count < 5 }
//print(shortNames)

for i in 1...50 {
    let l = String(i, radix: 2).filter { $0 == "1" }
    if l.count % 2 != 0 {
        print(i)
    }
        
}