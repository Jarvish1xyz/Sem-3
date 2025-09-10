import { useState } from 'react';

function Counter() {
  const [count, setCount] = useState(0);
  
  return (
    <>
        <h2>Count : {count}</h2>
        <div className=" m-2 btn btn-outline-primary" onClick={() => setCount(count+1)}>Increment</div>
        <div className=" m-2 btn btn-outline-primary" onClick={() => setCount(count-1)}>Decrment</div>
    </>
  );
}

export default Counter;