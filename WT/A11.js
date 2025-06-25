function dataCheck() {
    formref = document.forms["myform"];
    
    var name = formref.uname.value;
    unameRegex = /^[a-zA-Z]{8,}$/;
    console.log(unameRegex.test(name));
    if (!unameRegex.test(name))  {
        alert("Name must contain 8 letters!!!");
        return;
    }
    
    var password = formref.paswd.value;
    passwordRegex = /^(?=.*[0-9])(?=.*\d)(?=.*[!@#$%^&*()_+\-=\[\]{};':"\\|,.<>\/?]).{8,12}$/;
    console.log(password);
    if(!passwordRegex.test(password)) {
        alert("Password must contain a number and a special charecter!!!");
        return;
    }  
    
    var cpassword = formref.repaswd.value;
    cpasswordRegex = /^(?=.*[0-9])(?=.*\d)(?=.*[!@#$%^&*()_+\-=\[\]{};':"\\|,.<>\/?]).{8,12}$/;
    console.log(cpassword);
    if(cpasswordRegex.test(cpassword)) {
        if(!(cpassword==password)) {
            alert("Please enter the same confirm password!!!");
            return;
        }
    }
    else {
        alert("Please enter a valid confirm password!!!");
        return;
    }

    var DOB = formref.dob.value;
    date = new Date(DOB);
    var age = 2025-date.getFullYear();
    if(age<18) {
        alert("You must be 18 years old to register!!!");
        return;
    }

    var enroll = formref.enroll.value;
    enrollRegex = /^[0-9]{11}$/;
    if(!enrollRegex.test(enroll)) {
        alert("Enrollment number must be 11 digits!!!");
        return;
    }

    var email = formref.mail.value;
    emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if(!emailRegex.test(email)) {
        alert("Email must be in the format of email.com!!!");
        return;
    }

    formref.action = './index.html';
}