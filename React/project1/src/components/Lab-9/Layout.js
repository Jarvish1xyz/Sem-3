import Nasvbar from "./Navbar";
// import Footer from "./Footer";
import { Outlet } from "react-router-dom";

function Layout() {
    return(
        <>
            <Nasvbar />
            <div className="d-flex justify-content-center align-items-center flex-column" style={{minHeight: "90vh"}}>
                <Outlet />
            </div>
            {/* <Footer /> */}
        </>
    );
}

export default Layout;