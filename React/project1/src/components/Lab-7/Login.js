import React, { useState } from 'react';

function Login({ login }) {
    const [username, setUsername] = useState('');
    const [password, setPassword] = useState('');
    return (
        <>
            <div className="d-flex justify-content-center align-items-center vh-100">
                <div className="card" style={{ width: "18rem" }}>
                    <div className="card-body">
                        <div className="mb-3">
                            <label for="exampleInputuserName1" className="form-label">UserName</label>
                            <input onChange={(e) => setUsername(e.target.value)} type="text" className="form-control" id="exampleInputuserName1" aria-describedby="userNameHelp"/>
                        </div>
                        <div className="mb-3">
                            <label for="exampleInputPassword1" className="form-label">Password</label>
                            <input onChange={(e) => setPassword(e.target.value)} type="password" className="form-control" id="exampleInputPassword1"/>
                                <div id="userNameHelp" className="form-text">We'll never share your userName and password with anyone else.</div>
                        </div>
                        <button onClick={() => login(username, password)} className="btn btn-primary">Submit</button>
                    </div>
                </div>
            </div>
        </>
    );
}

export default Login;