const fs=require('fs');
fs.exists('Hello.txt', (e)=> {
    console.log(e);
})
fs.stat('Hello.txt', (err,data)=> {
    console.log(data);
})
fs.readFile('Hello.txt', (err,data)=> {
    console.log(data.toString());
})
fs.writeFile('Hello.txt','Hello World!', (err)=> {
    console.log("File written successfully");
})