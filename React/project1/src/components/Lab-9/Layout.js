import Nasvbar from "./Navbar";
import Footer from "./Footer";
import { Outlet } from "react-router-dom";

function Layout() {
    return(
        <>
            <Nasvbar />
            <Outlet />
            <Footer />
        </>
    );
}

export default Layout;