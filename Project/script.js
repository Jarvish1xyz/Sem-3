const students = [
    { roll: 101, enroll: 24010101151, name: "Jiya Kyada" },
    { roll: 102, enroll: 24010101257, name: "Shah Dhvani Hitesh" },
    { roll: 103, enroll: 24010101251, name: "Saraya Mohit Haresh" },
    { roll: 104, enroll: 24010101311, name: "Zalavadiya Heet Siddharth" },
    { roll: 105, enroll: 24010101065, name: "Darshil Dobariya" },
    { roll: 106, enroll: 24010101076, name: "Nafisa Gandhi" },
    { roll: 107, enroll: 24010101299, name: "Vasani Yashvi Niteshbhai" },
    { roll: 108, enroll: 24010101056, name: "Delvadiya Manavkumar Kirtibhai" },
    { roll: 109, enroll: 24010101008, name: "Ashara Palak Gopalbhai" },
    { roll: 110, enroll: 24010101158, name: "Lunagariya Greshi Kamleshbhai" },
    { roll: 111, enroll: 24010101187, name: "Nanavati Shrushti Gargesh" },
    { roll: 112, enroll: 24010101238, name: "Ranpara Jay Manishbhai" },
    { roll: 113, enroll: 24010101173, name: "Disha Mehta" },
    { roll: 114, enroll: 24010101282, name: "Thummar Niraj Bhaveshbhai" },
    { roll: 115, enroll: 24010101116, name: "Kachhava Nakul Umeshbhai" },
    { roll: 116, enroll: 24010101124, name: "Kanabar Urva Darshanbhai" },
    { roll: 117, enroll: 24010101186, name: "Nakar Dhruvil Hitesh" },
    { roll: 118, enroll: 24010101223, name: "Poshiya Priyanshi Ajaybhai" },
    { roll: 119, enroll: 24010101013, name: "Baravalia Dharitri Manharbhai" },
    { roll: 120, enroll: 24010101184, name: "Muchhara Kashish Hiteshbhai" },
    { roll: 121, enroll: 24010101038, name: "Chauhan Aditya Sureshbhai" },
    { roll: 122, enroll: 24010101097, name: "Harsora Sakshi Ajaybhai" },
    { roll: 123, enroll: 24010101139, name: "Katrodiya Sahil Rajeshbhai" },
    { roll: 124, enroll: 24010101284, name: "Trambadiya Parikshit Parimalbhai" },
    { roll: 125, enroll: 24010101192, name: "Padariya Preya Parasbhai" },
    { roll: 126, enroll: 24010101074, name: "Gambhava Krushiben Manojbhai" },
    { roll: 127, enroll: 24010101107, name: "Jadeja Vishwrajsinh Krushnasinh" },
    { roll: 128, enroll: 24010101214, name: "Patel Jiya Sandipbhai" },
    { roll: 129, enroll: 24010101219, name: "Pipalava Smit Ashvinbhai" },
    { roll: 130, enroll: 24010101091, name: "Gohil Harshrajsinh Jitendrasinh" },
    { roll: 131, enroll: 24010101138, name: "Kathiriya Arshi Keshubhai" },
    { roll: 132, enroll: 24010101288, name: "Undhad Vishwa Rajesh" },
    { roll: 133, enroll: 24010101229, name: "Diya Raiyani" },
    { roll: 134, enroll: 24010101043, name: "Chavda Maulik Vinodbhai" },
    { roll: 135, enroll: 24010101044, name: "Chavda Priyanka Prabodhbhai" },
    { roll: 136, enroll: 24010101045, name: "Chavda Virendrasinh Ashwinbhai" },
    { roll: 137, enroll: 24010101072, name: "Galani Krunal Chetanbhai" },
    { roll: 138, enroll: 24010101140, name: "Kavar Suchi Vasantbhai" },
    { roll: 139, enroll: 24010101190, name: "Odedara Nilesh Parbat" },
    { roll: 140, enroll: 24010101298, name: "Vasani Dishita Nikhilkumar" },
    { roll: 141, enroll: 24010101290, name: "Vachhani Vaishvi Manojkumar" },
    { roll: 142, enroll: 24010101017, name: "Bhadania Ronit Yatinbhai" },
    { roll: 143, enroll: 24010101039, name: "Chauhan Jenil Virenbhai" },
    { roll: 144, enroll: 24010101302, name: "Virpara Krisha Rajeshbhai" },
    { roll: 145, enroll: 24010101035, name: "Chandra Darshit Hiteshbhai" },
    { roll: 146, enroll: 24010101057, name: "Detroja Ruchit Arvindbhai" },
    { roll: 147, enroll: 24010101131, name: "Kapuriya Hepin Pravinbhai" },
    { roll: 148, enroll: 24010101090, name: "Gohel Smit Ashvinbhai" },
    { roll: 149, enroll: 24010101215, name: "Patel Kirtan Amitbhai" },
    { roll: 150, enroll: 24010101085, name: "Ginoya Deep Kantilal" },
    { roll: 151, enroll: 24010101169, name: "Marvaniya Jainish Dharmendrabhai" },
    { roll: 152, enroll: 24010101004, name: "Ajudiya Yash Nareshbhai" },
    { roll: 153, enroll: 24010101031, name: "Manas Borisagar" },
    { roll: 154, enroll: 24010101113, name: "Joshi Soham Kamleshbhai" },
    { roll: 155, enroll: 24010101117, name: "Kakadiya Khilan Manishbhai" },
    { roll: 156, enroll: 24010101265, name: "Sidhdhapura Dhaval Dharmeshbhai" },
    { roll: 157, enroll: 24010101267, name: "Sitapara Aryan Sunilbhai" },
    { roll: 158, enroll: 24010101021, name: "Bhatasana Nainshi Pareshbhai" },
    { roll: 159, enroll: 24010101163, name: "Malvaniya Viraj Jatinbhai" },
    { roll: 160, enroll: 24010101197, name: "Tanisha Pambhar" },
    { roll: 161, enroll: 24010101196, name: "Padshala Kuldeep Rajendrakumar" },
    { roll: 162, enroll: 24010101026, name: "Bhimani Vishva Manishbhai" },
    { roll: 163, enroll: 24010101132, name: "Karan Anushka Pintubhai" },
    { roll: 164, enroll: 24010101307, name: "Vyas Kavya Sachin" },
    { roll: 165, enroll: 24010101123, name: "Kamani Purna Hareshbhai" },
    { roll: 166, enroll: 24010101183, name: "Mori Nandita Renishkumar" },
    { roll: 167, enroll: 24010101239, name: "Ratanghayra Pankti Himanshu" },
    { roll: 168, enroll: 24010101242, name: "Rupala Nikhil Kashmeeraben" },
    { roll: 169, enroll: 24010101106, name: "Jadeja Shivrajsinh Girirajsinh" },
    { roll: 170, enroll: 24010101252, name: "Hirva Satani" },
    { roll: 171, enroll: 24010101230, name: "Raiyani Jenil Sanjaybhai" },
    { roll: 172, enroll: 24010101034, name: "Chandpa Prince Sureshbhai" },
    { roll: 173, enroll: 24010101069, name: "Faldu Vrajesh Sanjaybhai" },
    { roll: 174, enroll: 24010101142, name: "Khambholiya Manya Parasharbhai" },
    { roll: 175, enroll: 24010101224, name: "Prajapati Kaivalya Samir" },
    { roll: 176, enroll: 24010101182, name: "Moral Aadit Shaileshbhai" },
    { roll: 177, enroll: 24010101260, name: "Shihora Vibhu Chetanbhai" },
    { roll: 178, enroll: 24010101126, name: "Kanani Kruti Jayeshbhai" },
    { roll: 179, enroll: 24010101135, name: "Karoliya Princekumar Sandipbhai" },
    { roll: 180, enroll: 24010101146, name: "Khunt Rutvi Hiteshbhai" },
    { roll: 181, enroll: 24010101036, name: "Charadva Abhishek Virenbhai" },
    { roll: 182, enroll: 24010101053, name: "Dave Krisha Kalpeshbhai" },
    { roll: 183, enroll: 24010101119, name: "Janvi Kalaria" },
    { roll: 184, enroll: 24010101232, name: "Rajwani Rohan Malik" },
    { roll: 185, enroll: 24010101235, name: "Rana Parthrajsinh Bhupatsinh" },
    { roll: 186, enroll: 24010101271, name: "Solanki Ronak Arvindbhai" },
    { roll: 187, enroll: 24010101198, name: "Panchal Vedantkumar Niravbhai" },
    { roll: 188, enroll: 24010101006, name: "Ambasana Venisha Hitenbhai" },
    { roll: 189, enroll: 24010101228, name: "Raichura Smeet Rohitkumar" },
    { roll: 190, enroll: 24010101075, name: "Gambhava Mirali Sureshbhai" },
    { roll: 191, enroll: 24010101050, name: "Dave Dhruv Viralkumar" },
    { roll: 192, enroll: 24010101080, name: "Ghetiya Ritu Pankajbhai" },
    { roll: 193, enroll: 24010101226, name: "Radhanpara Saumya Jatinbhai" },
    { roll: 194, enroll: 24010101308, name: "Yadav Gaurav Kaushikbhai" },
    { roll: 195, enroll: 24010101033, name: "Buddadev Misri Sanjaybhai" },
    { roll: 196, enroll: 24010101112, name: "Joshi Kairav Paren" },
    { roll: 197, enroll: 24010101253, name: "Savaliya Dhruvi Bharatbhai" },
    { roll: 198, enroll: 24010101227, name: "Radhanpura Jeel Nimish" },
    { roll: 199, enroll: 24010101255, name: "Savaliya Priyanshi Sureshbhai" },
    { roll: 200, enroll: 24010101310, name: "Zala Bhavyadeepsinh Pruthvirajsinh" },
    { roll: 201, enroll: 24010101266, name: "Sinha Milankumar Sujitkumar" },
    { roll: 202, enroll: 24010101153, name: "Lakhtaria Kevin Homin" },
    { roll: 203, enroll: 24010101180, name: "Moliya Kartavya Bhaveshbhai" },
    { roll: 204, enroll: 24010101181, name: "Monpara Nij Hareshbhai" },
    { roll: 205, enroll: 24010101280, name: "Divya Thakar" },
    { roll: 206, enroll: 24010101177, name: "Mendapara Piyu Amishbhai" },
    { roll: 207, enroll: 24010101199, name: "Pandya Karan Tusharbhai" },
    { roll: 208, enroll: 24010101241, name: "Raval Meet Mohitkumar" },
    { roll: 209, enroll: 24010101303, name: "Virpariya Heer Manishbhai" },
    { roll: 210, enroll: 24010101020, name: "Bhanushali Hiral Bhaven" },
    { roll: 211, enroll: 24010101121, name: "Kamaliya Akashkumar Rameshbhai" },
    { roll: 212, enroll: 24010101222, name: "Popat Honey Nileshbhai" },
    { roll: 213, enroll: 24010101009, name: "Badrakiya Meet Bharatbhai" },
    { roll: 214, enroll: 24010101125, name: "Kanani Kavit Nareshbhai" },
    { roll: 215, enroll: 24010101005, name: "Ambaliya Manan Jayeshbhai" },
    { roll: 216, enroll: 24010101099, name: "Hinsu Umang Bharatbhai" },
    { roll: 217, enroll: 24010101118, name: "Kakaniya Bhavy Niteshbhai" },
    { roll: 218, enroll: 24010101195, name: "Padia Kartik Balkrishna" },
    { roll: 219, enroll: 24010101166, name: "Mankada Hasan Shabbirhusain" },
    { roll: 220, enroll: 24010101172, name: "Mehta Dhairy Kalpeshbhai" },
    { roll: 221, enroll: 24010101174, name: "Mehta Het Lalitkumar" },
    { roll: 222, enroll: 24010101246, name: "Kahan Sanghani" },
    { roll: 223, enroll: 24010101095, name: "Gotani Himesh Sanjaybhai" },
    { roll: 224, enroll: 24010101189, name: "Narola Yash Nileshbhai" },
    { roll: 225, enroll: 24010101279, name: "Targata Dharmishtha Arjanbhai" },
    { roll: 226, enroll: 24010101030, name: "Bhuva Tirth Shaileshbhai" },
    { roll: 227, enroll: 24010101108, name: "Jadeja Yashraj Lakhdhirsinh" },
    { roll: 228, enroll: 24010101225, name: "Krisha Pujara" },
    { roll: 229, enroll: 24010101296, name: "Varsani Ritul Hirji" },
    { roll: 230, enroll: 24010101208, name: "Parmar Dhyey Dharmendra" },
    { roll: 231, enroll: 24010101263, name: "Shingala Mansi Rajeshbhai" },
    { roll: 232, enroll: 24010101066, name: "Dobariya Jeel Upendrabhai" },
    { roll: 233, enroll: 24010101143, name: "Khant Mannkumar Jigneshbhai" },
    { roll: 234, enroll: 24010101309, name: "Yadav Neel Hiteshbhai" },
    { roll: 235, enroll: 24010101007, name: "Andodariya Yash Maheshbhai" },
    { roll: 236, enroll: 24010101101, name: "Hirani Jeelkumar Sanjaybhai" },
    { roll: 237, enroll: 24010101165, name: "Mankad Shyamsundar Mitbhai" },
    { roll: 238, enroll: 24010101001, name: "Agavan Rohan Farukbhai" },
    { roll: 239, enroll: 24010101018, name: "Bhadja Zeel Satishkumar" },
    { roll: 240, enroll: 24010101028, name: "Shreya Vijaybhai Bhundia" },
    { roll: 241, enroll: 24010101002, name: "Aghara Keyur Hiteshbhai" },
    { roll: 242, enroll: 24010101032, name: "Buddadev Deep Nitinbhai" },
    { roll: 243, enroll: 24010101086, name: "Godham Meet Maheshbhai" },
    { roll: 244, enroll: 24010101137, name: "Katariya Trisha Ashvinbhai" },
    { roll: 245, enroll: 24010101301, name: "Vekariya Jay Bipinbhai" },
    { roll: 246, enroll: 24010101077, name: "Rutvi Gautami" },
    { roll: 247, enroll: 24010101247, name: "Sankaliya Aryan Ashokbhai" },
    { roll: 248, enroll: 24010101078, name: "Ghadiya Yashvi Sanjaybhai" },
    { roll: 249, enroll: 24010101037, name: "Ved Chatvani" },
    { roll: 250, enroll: 24010101084, name: "Ghorai Swati Sanjib" },
    { roll: 251, enroll: 24010101134, name: "Karena Radhika Bharatbhai" },
    { roll: 252, enroll: 24010101200, name: "Pandya Kruti Tusharbhai" },
    { roll: 253, enroll: 24010101218, name: "Patel Tejkumar Niteshbhai" },
    { roll: 254, enroll: 24010101244, name: "Sagpariya Mahee Nitinbhai" },
    { roll: 255, enroll: 24010101258, name: "Sherasiya Shyam Sureshbhai" },
    { roll: 256, enroll: 24010101157, name: "Liya Hirvita Rajendra" },
    { roll: 257, enroll: 24010101003, name: "Ahir Krishna Manishbhai" },
    { roll: 258, enroll: 24010101206, name: "Parmar Devanshu Gopalbhai" },
    { roll: 259, enroll: 24010101283, name: "Tivari Astha Sureshbhai" },
    { roll: 260, enroll: 24010101191, name: "Pal Kana Odedra" },
    { roll: 261, enroll: 24010101275, name: "Sorathiya Nabhag Sanjaybhai" },
    { roll: 262, enroll: 24010101042, name: "Chauhan Vishal Girishbhai" },
    { roll: 263, enroll: 24010101150, name: "Kuchhadiya Vanita Bhima" },
    { roll: 264, enroll: 24010101025, name: "Bhimani Naman Chiragbhai" },
    { roll: 265, enroll: 24010101064, name: "Diyora Miraj Bhaveshbhai" },
    { roll: 266, enroll: 24010101071, name: "Gajera Rakshit Ketanbhai" },
    { roll: 267, enroll: 24010101205, name: "Parmar Darpan Jitendra" },
    { roll: 268, enroll: 24010101285, name: "Trivedi Manan Vijaykumar" },
    { roll: 269, enroll: 24010101055, name: "Dave Maharshi Kirtikumar" },
    { roll: 270, enroll: 24010101148, name: "Param Rameshbhai Kotadiya" },
    { roll: 271, enroll: 24010101213, name: "Patel Archi Pradipbhai" },
    { roll: 272, enroll: 24010101250, name: "Saradhara Yug Vrajbhushanbhai" },
    { roll: 273, enroll: 24010101193, name: "Padhariya Ruturajsinh Sureshbhai" },
    { roll: 214, enroll: 24010101300, name: "Vegad Jenil Ashokbhai" },
    { roll: 275, enroll: 24010101212, name: "Patani Kismatbanu Shahidbhai" },
    { roll: 276, enroll: 24010101254, name: "Savaliya Jinesh Kantilal" },
    { roll: 277, enroll: 24010101277, name: "Tank Darshan Chetanbhai" },
    { roll: 278, enroll: 24010101081, name: "Ghodasara Dev Ketanbhai" },
    { roll: 279, enroll: 24010101221, name: "Pithadiya Yash Devendrabhai" },
    { roll: 280, enroll: 24010101088, name: "Gohel Jenil Amitkum" }
];

let currentIndex = 0;
const attendance = {};

const rollList = document.getElementById("rollList");
const studentCard = document.getElementById("studentCard");
const modeIcon = document.getElementById("modeIcon");
const search = document.getElementById("searchInput");

function renderRollList() {
    rollList.innerHTML = '';
    students.forEach((student, index) => {
        const div = document.createElement("div");
        div.textContent = `Roll No: ${student.roll}`;
        div.className = `roll-item ${index === currentIndex ? 'active' : ''} ${attendance[student.roll] || ''}`;
        div.onclick = () => {
            currentIndex = index;
            renderUI();
        };
        rollList.appendChild(div);
    });

    search.addEventListener("input", function () {
        const val = this.value.trim().toLowerCase();

        if (!val) {
            currentIndex = 0;
            renderUI();
            return;
        }

        const index = students.findIndex(student =>
            student.name.toLowerCase().includes(val) ||
            student.roll.toString().includes(val)
        );

        if (index !== -1) {
            currentIndex = index;
            renderUI();
        }
    });


    const activeItem = rollList.querySelector('.roll-item.active');
    if (activeItem) {
        activeItem.scrollIntoView({ behavior: 'smooth', block: 'center' });
    }
}

function renderUI() {
    renderRollList();
    studentCard.innerHTML = '';

    const curr = students[currentIndex];
    if (curr) studentCard.appendChild(createCard(curr, 'card shadow-lg student-card'));
}

function createCard(student, cardClass) {
    const card = document.createElement('div');
    card.className = cardClass;
    card.innerHTML = `
        <div class="card-body">
          <h3 class="card-title text-primary">${student.name}</h3>
          <h3 class="card-text">Roll No: <i>${student.roll}</i></h3>
          <h3 class="card-text">Enrollment No: <i>${student.enroll}</i></h3>
          <button class="btn btn-success" onclick="markAttendance('present')">Present</button>
          <button class="btn btn-danger" onclick="markAttendance('absent')">Absent</button>
        </div>
      `;
    return card;
}

function markAttendance(status) {
    const student = students[currentIndex];
    attendance[student.roll] = status;
    currentIndex++;
    if (currentIndex < students.length) {
        renderUI();
    } else {
        showAbsent();
    }
}

document.getElementById("showAbsentBtn").onclick = showAbsent;

function showAbsent() {
    renderRollList();
    const absentRolls = students.filter(s => attendance[s.roll] === 'absent').map(s => s.roll);
    document.getElementById("absentList").textContent = absentRolls.length ? absentRolls.join(", ") : "No absent students.";
    const modal = new bootstrap.Modal(document.getElementById("absentModal"));
    document.querySelector(".modal-title").classList.add("text-dark");
    document.querySelector(".modal-body").classList.add("text-dark");
    modal.show();
}

function resetAttendance() {
    Object.keys(attendance).forEach(key => delete attendance[key]);
    currentIndex = 0;
    renderUI();
}

document.addEventListener("keydown", (e) => {
    if (e.key === "ArrowRight") {
        markAttendance("present");
    } else if (e.key === "ArrowLeft") {
        markAttendance("absent");
    }
});

document.getElementById("resetBtn").onclick = resetAttendance;

document.getElementById("modeToggle").onclick = function () {
    document.body.classList.toggle("dark-mode");
    // document.querySelector(".navbar").classList.toggle("rgba(25, 25, 25, 0.8)");
    // document.querySelector(".navbar").classList.toggle("navbar-dark");
    // document.querySelector(".navbar").classList.toggle("navbar-light");
    document.querySelector(".sidebar").classList.toggle("bg-dark");
    document.querySelector(".sidebar").classList.toggle("text-white");
    document.querySelector(".roll-item").classList.toggle("bg-primary");

    // modeIcon.classList.add("icon-toggle", "rotate");
    // setTimeout(() => modeIcon.classList.remove("rotate"), 500);

    modeIcon.innerHTML = document.body.classList.contains("dark-mode")
        ? `<svg  xmlns="http://www.w3.org/2000/svg"  width="24"  height="24"  viewBox="0 0 24 24"  fill="currentColor"  class="icon icon-tabler icons-tabler-filled icon-tabler-sun"><path stroke="none" d="M0 0h24v24H0z" fill="none"/><path d="M12 19a1 1 0 0 1 .993 .883l.007 .117v1a1 1 0 0 1 -1.993 .117l-.007 -.117v-1a1 1 0 0 1 1 -1z" /><path d="M18.313 16.91l.094 .083l.7 .7a1 1 0 0 1 -1.32 1.497l-.094 -.083l-.7 -.7a1 1 0 0 1 1.218 -1.567l.102 .07z" /><path d="M7.007 16.993a1 1 0 0 1 .083 1.32l-.083 .094l-.7 .7a1 1 0 0 1 -1.497 -1.32l.083 -.094l.7 -.7a1 1 0 0 1 1.414 0z" /><path d="M4 11a1 1 0 0 1 .117 1.993l-.117 .007h-1a1 1 0 0 1 -.117 -1.993l.117 -.007h1z" /><path d="M21 11a1 1 0 0 1 .117 1.993l-.117 .007h-1a1 1 0 0 1 -.117 -1.993l.117 -.007h1z" /><path d="M6.213 4.81l.094 .083l.7 .7a1 1 0 0 1 -1.32 1.497l-.094 -.083l-.7 -.7a1 1 0 0 1 1.217 -1.567l.102 .07z" /><path d="M19.107 4.893a1 1 0 0 1 .083 1.32l-.083 .094l-.7 .7a1 1 0 0 1 -1.497 -1.32l.083 -.094l.7 -.7a1 1 0 0 1 1.414 0z" /><path d="M12 2a1 1 0 0 1 .993 .883l.007 .117v1a1 1 0 0 1 -1.993 .117l-.007 -.117v-1a1 1 0 0 1 1 -1z" /><path d="M12 7a5 5 0 1 1 -4.995 5.217l-.005 -.217l.005 -.217a5 5 0 0 1 4.995 -4.783z" /></svg>`
        : `<svg  xmlns="http://www.w3.org/2000/svg"  width="24"  height="24"  viewBox="0 0 24 24"  fill="none"  stroke="currentColor"  stroke-width="2"  stroke-linecap="round"  stroke-linejoin="round"  class="icon icon-tabler icons-tabler-outline icon-tabler-moon-stars"><path stroke="none" d="M0 0h24v24H0z" fill="none"/><path d="M12 3c.132 0 .263 0 .393 0a7.5 7.5 0 0 0 7.92 12.446a9 9 0 1 1 -8.313 -12.454z" /><path d="M17 4a2 2 0 0 0 2 2a2 2 0 0 0 -2 2a2 2 0 0 0 -2 -2a2 2 0 0 0 2 -2" /><path d="M19 11h2m-1 -1v2" /></svg>`;
};

renderUI();