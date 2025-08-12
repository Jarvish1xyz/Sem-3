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

function Property(props) {
  const {name, age, rollno, isDisplay} = props;

  return(
    <>

    {isDisplay && 
    <div className='container'>
      <div className='row border border-dark'>
        <div className='col'>
          {name}
        </div>
        <div className='col'>
          {age}
        </div>
        <div className='col'>
          {rollno}
        </div>
      </div>
    </div>}

    {!isDisplay && 
    <div className='container'>
      <div className='row border border-dark'>
        <div className='col'>
          Can't Display!!!
        </div>
      </div>
    </div> }
    </>
  );
}



function App() {
  function handlingevent(){
    document.querySelector('.container').innerHTML+= <Property name={'Milan'} age={18} rollno={201} isDisplay={false}/>
  }
  return(
    <>
      <button onClick={handlingevent}> Click To Add </button>
      <div className='container'>
        <div className='row h2 border border-dark'>
          <div className='col'>
            Name
          </div>
          <div className='col'>
            Age
          </div>
          <div className='col'>
            Roll No
          </div>
        </div>
      </div>

      <Property name={'Milan'} age={18} rollno={201} isDisplay={true}/>

    </>
  );
}


export default App;
