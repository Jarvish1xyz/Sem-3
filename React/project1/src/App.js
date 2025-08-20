// import logo from './logo.svg';
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


//   --------------- : Lab-1 : ---------------



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



//   --------------- : Lab-2 : ---------------


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




//   --------------------------------------------- : Lab-4 : ---------------------------------------------

import A from './components/Lab-4/A'


function App() {
  return(
    <>
      <A/>
    </>
  );
}


export default App;
