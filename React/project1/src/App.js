// import logo from './logo.svg';
// import { useState } from 'react';
import { useState } from 'react';
import './App.css';
// import Navbar from './components/Navbar';
// import Footer from './components/Footer';
// import Contant from './components/Contant';

// function App() {
//   return (
//     <>
//       <Navbar/>
//       <Contant/>
//       <Footer/>
//     </>
//   );
// }


//   --------------------------------------------- : Lab-1 : ---------------------------------------------



// function Property(props) {
//   const {name, age, rollno, isDisplay} = props;

//   return(
//     <>

//     {isDisplay && 
//     <div className='container'>
//       <div className='row border border-dark'>
//         <div className='col'>
//           {name}
//         </div>
//         <div className='col'>
//           {age}
//         </div>
//         <div className='col'>
//           {rollno}
//         </div>
//       </div>
//     </div>}

//     {!isDisplay && 
//     <div className='container'>
//       <div className='row border border-dark'>
//         <div className='col'>
//           Can't Display!!!
//         </div>
//       </div>
//     </div> }
//     </>
//   );
// }



// function App() {
//   function handlingevent(){
//     document.querySelector('.container').innerHTML+= <Property name={'Milan'} age={18} rollno={201} isDisplay={false}/>
//   }
//   return(
//     <>
//       <button onClick={handlingevent}> Click To Add </button>
//       <div className='container'>
//         <div className='row h2 border border-dark'>
//           <div className='col'>
//             Name
//           </div>
//           <div className='col'>
//             Age
//           </div>
//           <div className='col'>
//             Roll No
//           </div>
//         </div>
//       </div>

//       <Property name={'Milan'} age={18} rollno={201} isDisplay={true}/>

//     </>
//   );
// }



//   --------------------------------------------- : Lab-2 : ---------------------------------------------


// function DemoMap() {

// const fruits = ['Apple','Banana', 'Mango', 'Orang']

// return(
//   <>
//       <div>
//         <h2> Fruits List !!! </h2>
//         <ul>
//           {fruits.map((fruit, index) => (
//             <li key={index}>{fruit}</li>
//           ))}
//         </ul>
//       </div>
//   </>
// );




//   const student = [
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     },
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     },
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     }
//   ];
//   const faculty = [
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     },
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     },
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     }
//   ];
//   const product = [
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     },
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     },
//     {
//       name: 'kartik',
//       age: 18,
//       rollNO: 201
//     }
//   ];


//   return (
//     <>
//       <div className='row'>
//           <h2>Student List !!!</h2>
//         <div className='col d-flex'>
//           {student.map((value, key) => (
//             <div class="card m-3" style={{width: '18rem'}}>
//                 <div class="card-body">
//                   <h5 class="card-title">Name : {value.name}</h5>
//                   <p class="card-text">Age : {value.age}</p>
//                   <p class="card-text">Rollno. : {value.rollNO}</p>
//                   <a href="#" class="btn btn-primary">Go somewhere</a>
//                 </div>
//             </div>
//           ))}
//         </div>
//       </div>
//       <div className='row'>
//           <h2>Faculty List !!!</h2>
//         <div className='col d-flex'>
//           {faculty.map((value, key) => (
//             <div class="card m-3" style={{width: '18rem'}}>
//                 <div class="card-body">
//                   <h5 class="card-title">Name : {value.name}</h5>
//                   <p class="card-text">Age : {value.age}</p>
//                   <p class="card-text">Rollno. : {value.rollNO}</p>
//                   <a href="#" class="btn btn-primary">Go somewhere</a>
//                 </div>
//             </div>
//           ))}
//         </div>
//       </div>
//       <div className='row'>
//           <h2>Product List !!!</h2>
//         <div className='col d-flex'>
//           {product.map((value, key) => (
//             <div class="card m-3" style={{width: '18rem'}}>
//                 <div class="card-body">
//                   <h5 class="card-title">Name : {value.name}</h5>
//                   <p class="card-text">Age : {value.age}</p>
//                   <p class="card-text">Rollno. : {value.rollNO}</p>
//                   <a href="#" class="btn btn-primary">Go somewhere</a>
//                 </div>
//             </div>
//           ))}
//         </div>
//       </div>

//     </>
//   );
// }



// function App() {

//   return (
//     <>
//       <DemoMap />
//     </>
//   );
// }




//   ------------------------------------------------------------------- : Lab-4 : -------------------------------------------------------------------

// import A from './components/Lab-4/A'


// function App() {
//   return(
//     <>
//       <A/>
//     </>
//   );
// }


// export default App;




// ------------------------------------------------------------------- : Lab-5 : -------------------------------------------------------------------

// import { BrowserRouter, Routes, Route } from 'react-router-dom';
// import Home from './components/Lab-5/Home';
// import Image from './components/Lab-5/Image';
// import Find from './components/Lab-5/Find';

// function App() {
//   return (
//     <BrowserRouter>
//       <Routes>
//         <Route path='/' element={<Home/>}>
//           <Route path='/find' element={<Find/>}/>
//           <Route path='/image' element={<Image/>}/>
//         </Route>
//       </Routes>
//     </BrowserRouter>

//   );
// }

// export default App;







// ------------------------------------------------------------------- : Lab-6 : -------------------------------------------------------------------

// import Counter from './components/Lab-6/Counter';

// function App() {
  
//   return (
//     <>
//         <Counter/>
//     </>
//   );
// }

// export default App;
  
  
  
  
// ------------------------------------------------------------------- : Lab-7 : -------------------------------------------------------------------
// import Login from './components/Lab-7/Login';
// import Deshbord from './components/Lab-7/Deshbord';


// function App() {
//   const [user, setUser] = useState(null);

//   const login = (username, password) => {
//     if(username === 'admin' && password === 'admin'){
//       setUser(username);
//       return true;
//     }
//     return false;
//   }

//   const logout = () => {
//     setUser(null);
//   }

//   return (
//     <>
//       {user ?
//         <Deshbord user={user} logout={logout}/> :
//         <Login login={login}/>
//       } 
//     </>
//   );
// }

// export default App;



//   --------------------------------------------- : Lab-8 : ---------------------------------------------

import Cal from './components/Lab-8/Cal';

function App() {
  return (
    <>
      <Cal/>
    </>
  );
}

export default App;