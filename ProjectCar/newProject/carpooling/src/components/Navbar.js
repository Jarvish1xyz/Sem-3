import '../style/Navbar.css';

function Navbar() {
    return (
        <>
            <nav className="navbar navbar-expand-lg navbar-dark bg-opacity-10" style={{color:'white'}}>
                <div className="container-fluid">
                    <a class="navbar-brand nav-links active d-flex align-items-center text-dark" href="Navbar.js">
                        <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 26" id="deviantart-logo" width="30" height="30">
                            <path d="M16 0h-5L8 5H0v7h4l.444 1L0 21v5h5l3-5h8v-7h-4l-.444-1L16 5z"></path>
                        </svg>
                        Rapid Ride
                    </a>
                    <div className="d-flex links" id="navbarNavAltMarkup">
                        <div className="navbar-nav">
                            <a className="nav-link active" aria-current="page" href="#"><span>Home</span></a>
                            <a className="nav-link active" href="#"><span>Features</span></a>
                            <a className="nav-link active" href="#"><span>Pricing</span></a>
                            <a className="nav-link active" href='#'><span>Disabled</span></a>
                        </div>
                    </div>
                </div>
            </nav>
        </>
    );
}

export default Navbar;