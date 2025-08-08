import '../style/Navbar.css';

function Navbar() {
    return (
        <>
            <nav className="navbar navbar-expand-lg bg-dark-subtle text-light">
                <div className="container-fluid">
                    <a className="navbar-brand" href="#">Navbar</a>
                    <div className="d-flex links" id="navbarNavAltMarkup">
                        <div className="navbar-nav">
                            <a className="nav-link active" aria-current="page" href="#">Home</a>
                            <a className="nav-link" href="#">Features</a>
                            <a className="nav-link" href="#">Pricing</a>
                            <a className="nav-link" href='#'>Disabled</a>
                        </div>
                    </div>
                </div>
            </nav>
        </>
    );
}

export default Navbar;