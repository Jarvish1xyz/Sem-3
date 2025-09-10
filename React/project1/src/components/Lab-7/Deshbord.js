function Deshbord({ user, logout }) {
    return (
        <>
            <div className="d-flex justify-content-center align-items-center vh-100">
                <div className="card" style={{ width: "18rem" }}>
                    <img src="https://images.pexels.com/photos/707046/pexels-photo-707046.jpeg" className="card-img-top" alt="..." />
                    <div className="card-body">
                        <h5 className="card-title">Welcome Back, {user}</h5>
                        <a className="btn btn-danger" onClick={logout}>Logout</a>
                    </div>
                </div>
            </div>
        </>
    );
}

export default Deshbord;